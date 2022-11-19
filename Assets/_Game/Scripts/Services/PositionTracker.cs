using System;
using System.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PositionTracker : MonoBehaviour
{
    [SerializeField] private GameObject _plane;
    [SerializeField] private GameObject _selfPrefab;//prefab для установки еа plane
    [SerializeField] private Material[] _materials;
    
    private float _tx, _tz;
    private Vector3 _oldPosition = Vector3.positiveInfinity;

    private const float DistanceBtwnPrefabs = 0.08f;//0.08 - расстояние между центрами установленных объектов (см. GetInstallPositionOnAxis)
    
    private bool _isFindWorking, _isChangerWorking, _isCheckWorking;

    void Start()
    {
        _plane = GameObject.FindWithTag("Anchor");//поиск plane
       
        StartCoroutine(MaterialChanger());
    }
    
    IEnumerator Build()
    {
        GameObject cam = Camera.main.gameObject;
        while (true)
        {
            //print("start check");
            print("camTr " + new Vector3(GetInstallPositionOnAxis(cam.transform.position.x),
                _plane.transform.position.y + 0.01f,
                GetInstallPositionOnAxis(cam.transform.position.z)));
            if (Math.Abs(this.transform.position.x - _oldPosition.x) < 0.02 &&
                Math.Abs(this.transform.position.z - _oldPosition.z) < 0.02)
                //если объект не менял свою позицию больше чем на Х(0,02)(защита от случайной тряски)
                //то установка в эту позицию(x, 0, z) префаба работающего объекта, с const y = 0
            {
                var inst = Instantiate(_selfPrefab, new Vector3(GetInstallPositionOnAxis(cam.transform.position.x),
                        _plane.transform.position.y + 0.01f,
                        GetInstallPositionOnAxis(cam.transform.position.z)),
                    _plane.transform.rotation);
                inst.gameObject.transform.SetParent(_plane.transform);

                
                SetInvisible(true);
                yield return new WaitForSeconds(1f);
                StartCoroutine(CheckState());
                yield break;
            }

            yield return new WaitForSeconds(2f); //проверка на изменение позиции 2сек
            _oldPosition = this.transform.position;
        }
    }

    IEnumerator MaterialChanger()
    {
        if(_isChangerWorking) //проверка на экземпляры корутины
            yield break;
        
        _isChangerWorking = true;
        while (true)
        {
            if (this.transform.parent.gameObject.GetComponent<ARTrackedImage>().trackingState 
                == TrackingState.Limited)
            {
                StartCoroutine(CheckState());
                SetInvisible(true);
                yield break;
            }
            _tx = this.transform.position.x;
            _tz = this.transform.position.z;
            foreach (Transform child in
                     GetComponentsInChildren<Transform>()) //берем все дочки и проверяем их на тег (тег есть тольуо у обьектов с мешом)
            {

                if (child.tag == "Deff")
                {//упразднить проверку в отдельную функцию чек(тег)
                    try
                    {
                        child.gameObject.GetComponent<MeshRenderer>().material = _materials[0];
                        if (_tx < 0 && _tx > -0.25f) //сначала проверяем по Х потом уже по Z
                        {
                            if (_tz > 0 && _tz < 0.25f)//left up
                            {
                                StopCoroutine(Build());
                            } 
                            else if (_tz < 0 && _tz > -0.25f)//left down
                            {
                                child.gameObject.GetComponent<MeshRenderer>().material = _materials[1];
                                if (!_isFindWorking)
                                {
                                    _isFindWorking = true;
                                    StartCoroutine(Build());
                                }
                            }
                        }
                        else if (_tx > 0 && _tx < 0.25f)
                        {
                            if (_tz < 0 && _tz > -0.25f)//right down
                            {
                                StopCoroutine(Build());
                            }
                            else if (_tz > 0 && _tz < 0.25f)//right up
                            {
                                child.gameObject.GetComponent<MeshRenderer>().material = _materials[1];
                                if (!_isFindWorking)
                                {
                                    _isFindWorking = true;
                                    StartCoroutine(Build());
                                }
                            }
                        }
                        else
                        {
                            StopCoroutine(Build());
                        }
                    }
                    catch
                    {
                        print("no mesh");
                    }
                }
            //----------------------------------------------------------------------------------------------------
                //if(child.tag =="Attk")
                //{
                //    if (_Tx > 0)//сначала проверяем по Х потом уже по Z
                //    {
                //        if (_Tz > 0)
                //            child.gameObject.GetComponent<MeshRenderer>().material = materials[0];
                //        else
                //            child.gameObject.GetComponent<MeshRenderer>().material = materials[1];
                //    }
                //    else
                //    {
                //        if (_Tz < 0)
                //            child.gameObject.GetComponent<MeshRenderer>().material = materials[0];
                //        else
                //            child.gameObject.GetComponent<MeshRenderer>().material = materials[1];
                //    }
                //}
                
            }
            
            yield return new WaitForSeconds(0.5f);
        }
    }
    private float GetInstallPositionOnAxis(float coor)
    {
        if ((coor % DistanceBtwnPrefabs) != 0) //0.08 - расстояние между центрами установленных объектов
            //игровая локация бъётся на кусочки по 0,08(8см)х0,08
            //позиция любой установленного объекта будет кратна 0,08
            coor += coor > -1f ? (DistanceBtwnPrefabs - coor % DistanceBtwnPrefabs) : -coor % DistanceBtwnPrefabs;
        return coor;
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
                _isFindWorking = false;
                StartCoroutine(MaterialChanger());
                yield break;
            }
        }
    }
    
}
