using System;
using System.Collections;
using _Game.Scripts.Services;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Mirror;

public class PositionTracker : NetworkBehaviour
{
    
    private float _localX, _localZ, _globalX, _globalZ;
    [SerializeField] private GameObject _plane;
    [SerializeField] private GameObject _selfPrefab;//prefab для установки на plane
    [SerializeField] private Material[] _materials;
    
    private Vector3 _oldPosition = Vector3.positiveInfinity;

    private const float DistanceBtwnPrefabs = 0.05f;// - расстояние между центрами установленных объектов (см. GetInstallPositionOnAxis)
    private const float DroppodRange = 0.2f;
    
    private bool _isBuildWorking, _isChangerWorking, _isCheckWorking;
    private GameObject _camera;

    void Start()
    {
        _plane = GameObject.FindWithTag("Anchor");//поиск plane
        _camera = Camera.main.gameObject;
        StartCoroutine(MaterialChanger());
    }
    
    //[Command]//выполняется на сервере ...Call this from a client to run this function on the server
    IEnumerator Build()
    {
        if (_isBuildWorking) //проверка на экземпляры корутины
            yield break;

        _isBuildWorking = true;
        while (true)
        {
            //print("start check");
            if (Math.Abs(this.transform.position.x - _oldPosition.x) < 0.02 &&
                Math.Abs(this.transform.position.z - _oldPosition.z) < 0.02)
                //если объект не менял свою позицию больше чем на Х(0,02)(защита от случайной тряски)
                //то установка в эту позицию(x, 0.01, z) префаба работающего объекта, с const y = 0.01 (чуть выше plane)
            {
                //переписать в отдельный метод
                var inst = Instantiate(_selfPrefab, new Vector3(GetInstallPositionOnAxis(_camera.transform.position.x),
                        _plane.transform.position.y + 0.01f,
                        GetInstallPositionOnAxis(_camera.transform.position.z)),
                    _plane.transform.rotation);
                //inst.gameObject.transform.SetParent(_plane.transform);
                
                GameController.OnServerSpawn(inst);

                
                SetInvisible(true);
                yield return new WaitForSeconds(1f);
                StartCoroutine(CheckState());
                GameController.OnSpendMoney(100, GameController.Player.playerNumber);
                yield break;
            }

            yield return new WaitForSeconds(2f); //проверка на изменение позиции 2сек
            _oldPosition = this.transform.position;
        }
    }

    IEnumerator MaterialChanger()
    {
        if (_isChangerWorking) //проверка на экземпляры корутины
            yield break;

        _isChangerWorking = true;
        while (true)
        {
            
            if (this.transform.parent.gameObject.GetComponent<ARTrackedImage>().trackingState
                == TrackingState.Limited)
            {
                StopCoroutine(Build());
                StartCoroutine(CheckState());
                SetInvisible(true);
                yield break;
            }

            _localX = this.transform.position.x;
            _localZ = this.transform.position.z;//локальные координаты относительно камеры
            //print(_localX);
            //print(_localZ);
            _globalX = _camera.transform.position.x;
            _globalZ = _camera.transform.position.z; 
            
            /*print((_localX < 0.02 && _localX > -0.02) &&
                       (_localZ < 0.02 && _localZ > -0.02) && 
                       _globalZ < 0);*/
            foreach (Transform child in
                     GetComponentsInChildren<Transform>()) //берем все дочки и проверяем их на тег (тег есть тольуо у обьектов с мешом)
            {

                if (child.tag == "Deff" ) 
                {
                    //упразднить проверку в отдельную функцию чек(тег)1
                    
                    child.gameObject.GetComponent<MeshRenderer>().material = _materials[0];
                    
                    if (_globalX > 0.015 &&
                        (_localX < DroppodRange && _localX > -DroppodRange) &&
                        (_localZ < DroppodRange && _localZ > -DroppodRange) && 
                        _globalZ < 0) //сначала проверяем вход в радиус погрешности над камерой(дроппод) //надо перенести проверку до цикла, потому что зачем проверять координаты для
                                                                                                        //всех элементов префаба, если они и так вместе
                    {
                        
                        child.gameObject.GetComponent<MeshRenderer>().material = _materials[1];
                        StartCoroutine(Build());
                        
                    }
                }
                else if (child.tag == "Attk" ) 
                {
                    //упразднить проверку в отдельную функцию чек(тег)
                    
                    child.gameObject.GetComponent<MeshRenderer>().material = _materials[0];
                    
                    if (_globalX < 0.015 && 
                        (_localX < DroppodRange && _localX > -DroppodRange) &&
                        (_localZ < DroppodRange && _localZ > -DroppodRange) && 
                        _globalZ < 0) //сначала проверяем вход в радиус погрешности над камерой(дроппод) //надо перенести проверку до цикла, потому что зачем проверять координаты для
                        //всех элементов префаба, если они и так вместе
                    {
                        child.gameObject.GetComponent<MeshRenderer>().material = _materials[1];
                        StartCoroutine(Build());
                    }
                }
            }
            yield return new WaitForSeconds(0.5f);
        }
    }

    private float GetInstallPositionOnAxis(float coor)
    {
        //print("Origin InPos: " + coor);
        if ((coor % DistanceBtwnPrefabs) != 0) //0.08 - расстояние между центрами установленных объектов
            //игровая локация бъётся на кусочки по 0,08(8см)х0,08
            //позиция любой установленного объекта будет кратна 0,08
            coor += coor > 0f ? (DistanceBtwnPrefabs - coor % DistanceBtwnPrefabs) : -1 * coor % DistanceBtwnPrefabs;
        //print("Result InPos: " + coor);
        //print("Minus: " + (coor - DistanceBtwnPrefabs/2));
        return coor - DistanceBtwnPrefabs/2;
    }

    private void SetInvisible(bool invisible)
    {
        try
        {
            foreach (MeshRenderer childMesh in GetComponentsInChildren<MeshRenderer>())
            {
                childMesh.enabled = !invisible;
            }
        }
        catch
        {
            print("no mesh");
        }
        
    }
    private IEnumerator CheckState()
    {
        StopCoroutine(MaterialChanger());
        _isChangerWorking = false;
        while (true)
        {
            yield return new WaitForSeconds(0.4f);
            if (this.transform.parent.gameObject.GetComponent<ARTrackedImage>().trackingState
                == TrackingState.Tracking)
            {
                SetInvisible(false);
                _isBuildWorking = false;
                StartCoroutine(MaterialChanger());
                yield break;
            }
        }
    }
    
}
