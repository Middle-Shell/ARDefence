using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Return : MonoBehaviour
{
    [SerializeField] private GameObject _setUp;
    [SerializeField] private GameObject _disable;

    public void Back()
    {
        _setUp.SetActive(true);
        _disable.SetActive(false);//переключение меню
    }
}

