using System.Collections;
using System.Collections.Generic;
using _Game.Scripts.Services;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Return : MonoBehaviour
{
    [SerializeField] private GameObject _setUp;
    [SerializeField] private GameObject _disable;
    [SerializeField] private GameObject _plane;
    public void Back()
    {
        _setUp.SetActive(true);
        _disable.SetActive(false);//переключение меню
    }

    public void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void Rotate()
    {
        _plane.transform.rotation = Quaternion.Euler(0f,-180f,0f);
    }
    
    public void TESTSpendMoney()
    {
        GameController.OnSpendMoney(5, GameController.Player.playerNumber);
    }
}

