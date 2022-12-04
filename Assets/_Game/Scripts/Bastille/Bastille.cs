using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using TMPro;
using UnityEngine.Serialization;

public class Bastille : MonoBehaviour
{
    [SerializeField] private int _gold = 100;
    [SerializeField] private int _bHealth = 1000;
    
    [SerializeField] private int _playerNumber;//указывать в редакторе
    [SerializeField] private TextMeshProUGUI _goldText,_Helthtext;

    void Start()
    {
        GameController.CollectMoneyEvent += AddMoney;
        GameController.SpendMoneyEvent += SpendMoney;
        GameController.DamageSystemEvent += TakeDamage;
    }

    void TakeDamage(int damage, int playerNumber)
    {
        if (CheckPlayer(playerNumber))
            _bHealth -= damage;
        _Helthtext.text = _bHealth.ToString();
    }
    void AddMoney(int gold, int playerNumber)
    {
        if(CheckPlayer(playerNumber))
            _gold += gold;
        _goldText.text = _gold.ToString();
    }

    public void test()//для тестов, потом убрать
    {
        SpendMoney(10, 1);
    }
    void SpendMoney(int gold, int playerNumber) 
    {
        if(CheckPlayer(playerNumber))
            _gold -= gold;
        _goldText.text = _gold.ToString();
    }

    bool CheckPlayer(int number)
    {
        if (number == _playerNumber)
            return true;
        return false;
    }
}
