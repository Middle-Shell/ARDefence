using System;
using System.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

//[RequireComponent(typeof(ARRaycastManager))]
public class PositionTracker : MonoBehaviour
{
    private float _Tx, _Tz;
    [SerializeField] private GameObject _plane;
    [SerializeField] private GameObject _selfPrefab;
    private Vector3 _oldPosition = Vector3.positiveInfinity;
    
    [SerializeField] private Material[] materials;
    
    public MeshRenderer mesh;//тестовое

    void Start()
    {
        
        _plane = GameObject.FindWithTag("Anchor");//поиск plane
       
        StartCoroutine(MaterialChanger());
    }
    IEnumerator Find()
    {
            
        print("check");
        if (Math.Abs(this.transform.position.x - _oldPosition.x) < 0.02 &&
            Math.Abs(this.transform.position.z - _oldPosition.z) < 0.02)
            //если объект не менял свою позицию больше чем на Х(0,02)(защита от случайной тряски)
            //то установка в эту позицию(x, 0, z) префаба работающего объекта, с const y = 0
        {
                
            var inst = Instantiate(_selfPrefab,new Vector3(GetInstallPositionOnAxis(_oldPosition.x), 
                _plane.transform.position.y + 0.01f, 
                GetInstallPositionOnAxis(_oldPosition.z)), 
                _plane.transform.rotation);
            inst.gameObject.transform.SetParent(_plane.transform);
            //print(inst.transform.position);
            mesh.enabled = false;
            yield return new WaitForSeconds(5f); 
            StopCoroutine(Find());
        }
           
        yield return new WaitForSeconds(2f);//проверка на изменение позиции 2сек
        _oldPosition = this.transform.position;
        StartCoroutine(Find());
    }

    IEnumerator MaterialChanger()
    {
        while (true)
        {
            if (this.transform.parent.gameObject.GetComponent<ARTrackedImage>().trackingState == TrackingState.Limited)
            {
                //делаем весь объект прозрачным
                mesh.enabled = false;
                yield return new WaitForSeconds(0.5f);
                continue;
            }

            mesh.enabled = true;
            _Tx = this.transform.position.x;
            _Tz = this.transform.position.z;
            foreach (Transform child in
                     GetComponentsInChildren<Transform>()) //берем все дочки и проверяем их на тег (тег есть тольуо у обьектов с мешом)
            {

                if (child.tag == "Deff")
                {
                    try
                    {
                        print(_Tx + " " + _Tz);
                        child.gameObject.GetComponent<MeshRenderer>().material = materials[0];
                        if (_Tx < 0 && _Tx > -0.25f) //сначала проверяем по Х потом уже по Z
                        {
                            if (_Tz > 0 && _Tz < 0.25f)//left up
                            {
                                StopCoroutine(Find());
                            }
                            else if (_Tz < 0 && _Tz > -0.25f)//left down
                            {
                                child.gameObject.GetComponent<MeshRenderer>().material = materials[1];
                                StartCoroutine(Find());
                            }
                        }
                        else if (_Tx > 0 && _Tx < 0.25f)
                        {
                            if (_Tz < 0 && _Tz > -0.25f)//right down
                            {
                                StopCoroutine(Find());
                            }
                            else if (_Tz > 0 && _Tz < 0.25f)//right up
                            {
                                child.gameObject.GetComponent<MeshRenderer>().material = materials[1];
                                StartCoroutine(Find());
                            }
                        }
                    }
                    catch
                    {
                        print("меша нет");
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
        if ((coor % 0.12f) != 0) //0.12 - расстояние между центрами установленных объектов
            //игровая локация бъётся на кусочки по 0,12(12см)х0,12
            //позиция любой установленного объекта будет кратна 0,12
            coor += coor > -1f ? (0.12f - coor % 0.12f) : -coor % 0.12f;
        return coor;
    }
}
