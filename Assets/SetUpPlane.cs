using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetUpPlane : MonoBehaviour
{
    [SerializeField] private GameObject _setUp;
    [SerializeField] private GameObject _tracker;

    public void SetUp()
    {
        _tracker.SetActive(true);
        _setUp.SetActive(false);
    }
}
