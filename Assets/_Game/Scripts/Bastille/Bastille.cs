using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using TMPro;
using Mirror;

public class Bastille : NetworkBehaviour
{
    [SerializeField] private SyncHPnGold _syncHPnGold;

    [SerializeField] private GameObject _plane;
    [SerializeField] private GameObject _spawnPoint;
    
    [SyncVar(hook = nameof(SyncNumber))]
    [SerializeField] private int _playerNumber;
    

    void SyncNumber(int _, int newValue)
    {
        _playerNumber = newValue;
    }

    void AddMoney(int gold, int number)
    {
        if (CheckPlayer(number))
            _syncHPnGold.SetGold(-gold);
    }

    void CmdSpendMoney(int gold, int number)
    {
        if (CheckPlayer(number))
            _syncHPnGold.SetGold(gold);
    }

    void CmdGetDamage(float damage, int number)
    {
        if (CheckPlayer(number))
            _syncHPnGold.SetHP(damage);
    }

    void Start()
    {
        _plane = GameObject.FindWithTag("Anchor");
        _spawnPoint = GameObject.FindWithTag("SpawnPoint");
        
        gameObject.transform.SetParent(_plane.transform);
        
        GameController.GetDamageEvent += CmdGetDamage;
        GameController.CollectMoneyEvent += AddMoney;
        GameController.SpendMoneyEvent += CmdSpendMoney;
        if (isOwned) //(this.transform.position.z < 0)
        {
            this.gameObject.tag = "MyBastille";
            GameController.SetPlayer(this);
            if (this.transform.position.z > 0 )
                this.gameObject.transform.rotation = Quaternion.Euler(0,180,0);
        }
        else
        {
            GameController.SetImposter(this);
            if (this.transform.position.z > 0 )
                this.gameObject.transform.rotation = Quaternion.Euler(0,180,0);
            this.gameObject.transform.position = _spawnPoint.transform.position;
        }
        

        this.gameObject.transform.localScale = new Vector3(2, 1, 2);
    }
    

    public int PlayerNumber
    {
        get => _playerNumber;
        set => _playerNumber = value;
    }
    
    bool CheckPlayer(int number)
    {
        if (number == PlayerNumber)
            return true;
        return false;
    }
}
