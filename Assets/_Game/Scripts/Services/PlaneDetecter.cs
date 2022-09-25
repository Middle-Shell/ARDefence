using System;
using System.Collections;
using System.Collections.Generic;
using _Game.Scripts.Services;
using UnityEngine;

public class PlaneDetecter : MonoBehaviour
{
    private List<GameObject> _planesList = new List<GameObject>();
    [SerializeField] private GameObject _gamePlane;

    private void Start()
    {
        EventCrossroad.PlaneAwakeEvent += AddPlane;
        EventCrossroad.PlaneSleepEvent += ExitPlane;
    }

    private void AddPlane(GameObject plane)
    {
        _planesList.Add(plane);
    }

    private void ExitPlane(GameObject plane)
    {
        for (int i = 0; i < _planesList.Count; ++i)
        {
            if (_planesList[i].name == plane.name)
            {
                _planesList.RemoveAt(i);
                if (i == 0)
                    MovePlane();
                return;
            }
        }
    }

    private void MovePlane()
    {
        _gamePlane.transform.SetParent(null, true);
        _gamePlane.transform.SetParent(_planesList[0].transform, true);
    }
}
