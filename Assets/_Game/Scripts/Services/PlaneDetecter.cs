using System;
using System.Collections;
using System.Collections.Generic;
using _Game.Scripts.Services;
using UnityEngine;
using System.Threading;

public class PlaneDetecter : MonoBehaviour
{
    private List<GameObject> _planesList = new List<GameObject>();
    [SerializeField] private GameObject _gamePlane;
    [SerializeField] private GameObject _gamePlaneCOPY;


    private void Start()
    {
        EventCrossroad.PlaneAwakeEvent += AddPlane;
        EventCrossroad.PlaneSleepEvent += ExitPlane;
    }

    private void AddPlane(GameObject plane)
    {

        _planesList.Add(plane);
        if(_planesList.Count==1)
            CreateClone();
    }

    private void ExitPlane(GameObject plane)
    {
        
        for (int i = 0; i < _planesList.Count; ++i)
        {
            
            if (_planesList[i].name == plane.name)
            {
                
                _planesList.RemoveAt(i);
                
                 if (i == 0)
                    CreateClone();
                return;
            }
        }
    }

    private void CreateClone()
    {
        _gamePlane.transform.SetParent(null,true);
        _gamePlaneCOPY = Instantiate(_gamePlane);//создание копии
        _gamePlaneCOPY.transform.SetParent(_planesList[0].transform,true);// перенос в tracker
                
    }
    private void DestroyClone()
    {
        Destroy(_planesList[0].transform.GetChild(1).gameObject);
    }
}
