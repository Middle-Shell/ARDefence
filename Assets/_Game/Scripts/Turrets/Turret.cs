using System.Collections;
using System.Collections.Generic;
using easyar;
using UnityEngine;

public class Turret : MonoBehaviour
{

    public Transform target;
    SphereCollider _range;
    float _turretRoatationSpeed = 5f;
    Vector3 _enemyPos;
    Vector3 _targetDirection;
    Vector3 _newLookDirection;
    float _turretRoatationStep;// *скорость* вращения
    private BulletShoot _currectGun;
    Queue<Transform> _targets = new Queue<Transform>();//очередь целей
    //-------------------------------------------
    private float _fireRate;
    private float _fireRateDelta;

    [SerializeField] private int damageValue = 25;


    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other);

        // создать очередь на расстрел
        if (other.tag != "Deff") { 
        Debug.Log("TYT");
        _targets.Enqueue(other.gameObject.transform);
        if (target == null)
        {
            target = _targets.Dequeue();
        }
    }


    }
    private void OnTriggerExit(Collider other)
    {
        if (_targets.TryPeek(out var test))
            target = _targets.Dequeue();
        else
            target = null;
    }
    void Start()
    {
        _currectGun = GetComponentInChildren<BulletShoot>();
        _currectGun.GetRateOfFire = 0.1f;
        _fireRate = _currectGun.GetRateOfFire;
        _range = GetComponent<SphereCollider>();

    }


    void Update()
    {
        if (target != null)
        {
            StartCoroutine(TargetTracker());
            _enemyPos = new Vector3(target.position.x, target.position.y, target.position.z);  // перенести в корутину
                                                                                              //out of _range check
            if (Vector3.Distance(transform.position, _enemyPos) > _range.radius)
                StopAllCoroutines();
            //Возможно стоит перенести старт корутины в TriggerEnter и заLoppить корутину - while true
            //А там где проверка на target=null воткнуть остановку корутины
        }

    }



    IEnumerator TargetTracker()
    {
        yield return new WaitForSeconds(0.2f);
        //Rotate turret
        _targetDirection = _enemyPos - transform.position;
        _turretRoatationStep = _turretRoatationSpeed * Time.deltaTime;
        _newLookDirection = Vector3.RotateTowards(transform.forward, _targetDirection, _turretRoatationStep, 0f);
        
        transform.rotation = Quaternion.LookRotation(_newLookDirection);

        _fireRateDelta -= Time.deltaTime;
        if (_fireRateDelta <= 0)
        {
            _currectGun.Fire();
            _fireRateDelta = _fireRate;
            RaycastHit hit;
            if (Physics.Raycast(transform.position, transform.TransformDirection(Vector3.forward), out hit, _range.radius, 1 << 6))
                //6 слой-enemy, что бы игнорировать все столкновения кроме как с 6
            {
                Debug.DrawRay(transform.position, transform.TransformDirection(Vector3.forward) * hit.distance, Color.red);
                hit.collider.gameObject.GetComponent<Enemy>().ApplyDamage(damageValue);
            }
        }
    }



}
