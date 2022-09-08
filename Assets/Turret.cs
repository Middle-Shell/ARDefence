using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Turret : MonoBehaviour
{
    // private static float range
    //  {
    //     get{return range;}
    //     set{range=value;}
    //  }
    public Transform target;
    public float range = 5f;
    float turretRoatationSpeed = 5f;

    private BulletShoot currectGun;

    private float fireRate;
    private float fireRateDelta;

    
    void Start()
    {
       target = FindObjectOfType<enemy>().transform;
       currectGun = GetComponentInChildren<BulletShoot>();
       currectGun.GetRateOfFire = 0.1f;
       fireRate = currectGun.GetRateOfFire;
       
    }
   
    
    void Update()
    {
        Vector3 enemyPos = new Vector3(target.position.x,target.position.y,target.position.z);
                    //out of range check
        if(Vector3.Distance(transform.position, enemyPos)>range)
            return;
    

                    //Rotate turret
        Vector3 targetDirection = enemyPos - transform.position;
        float turretRoatationStep = turretRoatationSpeed * Time.deltaTime;
        Vector3 newLookDirection = Vector3.RotateTowards(transform.forward,targetDirection,turretRoatationStep,0f);
         Debug.DrawRay(transform.position, newLookDirection, Color.red);
        transform.rotation = Quaternion.LookRotation(newLookDirection);

        fireRateDelta-= Time.deltaTime;
        if(fireRateDelta<=0)
        {
        currectGun.Fire();
        fireRateDelta = fireRate;
        }
    }
    void OnDrawGizmosSelected()//show turret range
    {
        
        Gizmos.color=Color.red;
        Gizmos.DrawWireSphere(transform.position,range);
    }
}
