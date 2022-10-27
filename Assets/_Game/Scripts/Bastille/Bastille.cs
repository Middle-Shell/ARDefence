using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using TMPro;

public class Bastille : MonoBehaviour
{
    [SerializeField] private int _gold = 100;

    [SerializeField] private int _playerNumber;//указывать в редакторе
    [SerializeField] private TextMeshProUGUI _text;
    
    void Start()
    {
        GameController.CollectMoneyEvent += AddMoney;
        GameController.SpendMoneyEvent += SpendMoney;
    }

    void AddMoney(int gold, int playerNumber)
    {
        if(CheckPlayer(playerNumber))
            _gold += gold;
        _text.text = _gold.ToString();
    }

    public void test()//для тестов, потом убрать
    {
        SpendMoney(10, 1);
    }
    void SpendMoney(int gold, int playerNumber) 
    {
        if(CheckPlayer(playerNumber))
            _gold -= gold;
        _text.text = _gold.ToString();
    }

    bool CheckPlayer(int number)
    {
        if (number == _playerNumber)
            return true;
        return false;
    }
}
