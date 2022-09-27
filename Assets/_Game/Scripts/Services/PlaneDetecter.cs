using System.Collections.Generic;
using _Game.Scripts.Services;
using UnityEngine;

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
            CreateClone(_planesList[0].transform);
    }

    private void ExitPlane(GameObject plane)
    {
        int a = _planesList.Count;
        for (int i = 0; i < a; ++i)
        {
            if (_planesList[i].name == plane.name)
            {
                if (i == 0)
                {
                    DestroyClone(i);
                    _planesList.RemoveAt(i);
                    if (a>=2)
                        CreateClone(_planesList[i].transform);
                    
                    return;
                }

                _planesList.RemoveAt(i);
                                
                return;
            }
        }
    }

    private void CreateClone(Transform plane)
    {
        //_gamePlane.transform.SetParent(null,true);
        _gamePlaneCOPY = Instantiate(_gamePlane);//создание копии
        _gamePlaneCOPY.transform.SetParent(plane, true);
        _gamePlaneCOPY.transform.position = _planesList[0].transform.position;
        _gamePlaneCOPY.transform.Rotate(-90f, 0, 0);
    }
    private void DestroyClone(int k)
    {
        Destroy(_planesList[k].transform.GetChild(0).gameObject);
    }
}
