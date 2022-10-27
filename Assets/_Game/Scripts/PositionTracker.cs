using System;
using System.Collections;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

//[RequireComponent(typeof(ARRaycastManager))]
public class PositionTracker : MonoBehaviour
{
    [SerializeField] private GameObject _plane;
    [SerializeField] private GameObject _selfPrefab;
    private Vector3 _oldPosition = Vector3.positiveInfinity;

    public MeshRenderer mesh;

    void Start()
    {
        _plane = GameObject.FindWithTag("Anchor");//поиск plane
        StartCoroutine(Find());
    }
    IEnumerator Find()
    {
        while (true)
        {
            if (this.transform.parent.gameObject.GetComponent<ARTrackedImage>().trackingState == TrackingState.Limited)
            {
                //делаем весь объект прозрачным
                mesh.enabled = false;
            }
            else
            {
                mesh.enabled = true;
            }
            //print("check");
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
                yield return new WaitForSeconds(5f);
            }
                
            yield return new WaitForSeconds(2f);//проверка на изменение позиции 2сек
            _oldPosition = this.transform.position;
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
