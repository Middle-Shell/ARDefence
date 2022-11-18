using System;
using System.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PositionTracker : MonoBehaviour
{
    [SerializeField] private GameObject _plane,_camera;
    [SerializeField] private GameObject _selfPrefab;
    [SerializeField] private Material[] materials;
    
    private float _localX, _localZ,_globalX,_globalZ;
    private Vector3 _oldPosition = Vector3.positiveInfinity;
    
    private bool _isFindWorking,_isChangerWorking,_isCheckWorking;
   

    void Start()
    {
        _plane = GameObject.FindWithTag("Anchor");//поиск plane
        _camera = GameObject.FindGameObjectWithTag("MainCamera");
        StartCoroutine(MaterialChanger());
    }
    
    IEnumerator Build()
    {
        while (true)
        {
            //print("start check");
            if (Math.Abs(this.transform.position.x - _oldPosition.x) < 0.02 &&
                Math.Abs(this.transform.position.z - _oldPosition.z) < 0.02)
                //если объект не менял свою позицию больше чем на Х(0,02)(защита от случайной тряски)
                //то установка в эту позицию(x, 0, z) префаба работающего объекта, с const y = 0
            {

                var inst = Instantiate(_selfPrefab, new Vector3(GetInstallPositionOnAxis(_oldPosition.x),
                        _plane.transform.position.y + 0.01f,
                        GetInstallPositionOnAxis(_oldPosition.z)),
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
        if (_isChangerWorking) //проверка на экземпляры корутины
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

            _localX = this.transform.position.x;
            _localZ = this.transform.position.z;
            _globalX = _camera.transform.position.x;
            _globalZ = _camera.transform.position.z; print(_camera.name+"------------------------------------------------------");
            foreach (Transform child in
                     GetComponentsInChildren<Transform>()) //берем все дочки и проверяем их на тег (тег есть тольуо у обьектов с мешом)
            {

                if (child.tag ==
                    "Deff" ) //лишняя проверка, если master объект имеет тег дефф, то логично, что все его части к нему относятся
                {
                    //упразднить проверку в отдельную функцию чек(тег)1
                    /*try
                    {*/
                    
                    child.gameObject.GetComponent<MeshRenderer>().material = materials[0];
                    
                    if ((_localX < 0.02 || _localX > -0.02) &&
                        (_localZ < 0.02 ||
                         _localZ > -0.02) && _globalZ < 0) //сначала проверяем взод в радиус погрешности над камерой(дроппод)
                    {
                        /*if (_localZ > 0 && _localZ < 0.25f)//left up
                        {*/
                        child.gameObject.GetComponent<MeshRenderer>().material = materials[1];
                        if (!_isFindWorking)
                        {
                            _isFindWorking = true;
                            StartCoroutine(Build());
                        }
                        // StopCoroutine(Build());
                        /*} 
                        else if (_localZ < 0 && _localZ > -0.25f)//left down
                        {
                            child.gameObject.GetComponent<MeshRenderer>().material = materials[1];
                            if (!_isFindWorking)
                            {
                                _isFindWorking = true;
                                StartCoroutine(Build());
                            }
                        }
                    }
                    else if (_localX > 0 && _localX < 0.25f)
                    {
                        if (_localZ < 0 && _localZ > -0.25f)//right down
                        {
                            StopCoroutine(Build());
                        }
                        else if (_localZ > 0 && _localZ < 0.25f)//right up
                        {
                            child.gameObject.GetComponent<MeshRenderer>().material = materials[1];
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
                    print("меша нет");
                }
            }*/
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
        }
    }

    private float GetInstallPositionOnAxis(float coor)
    {
        if ((coor % 0.12f) != 0) //0.12 - расстояние между центрами установленных объектов
            //игровая локация бъётся на кусочки по 0,12(12см)х0,12
            //позиция любой установленного объекта будет кратна 0,12
            coor += coor > -1f ? (0.12f - coor % 0.12f) : -coor % 0.12f;
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
                print("tracking");
                SetInvisible(false);
                _isFindWorking = false;
                StartCoroutine(MaterialChanger());
                yield break;
            }
        }
    }
    
}
