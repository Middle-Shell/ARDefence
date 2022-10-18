using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Return : MonoBehaviour
{
    [SerializeField] private GameObject _setUp;
    [SerializeField] private GameObject _tracker;

    public void Back()
    {
        _setUp.SetActive(true);
        _tracker.SetActive(false);
    }
}

