using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using TMPro;
using Mirror;

public class Bastille : NetworkBehaviour
{
    [SerializeField] private SyncHPnGold _syncHPnGold;
    
    //delete//
    [SerializeField] private GameObject _pref;
    [SerializeField] private GameObject _attPref;
    //
    
    [SerializeField] private GameObject _plane;
    [SerializeField] private GameObject _spawnPoint;
    
    [SyncVar(hook = nameof(SyncNumber))]
    [SerializeField] private int _playerNumber;
    
    [SerializeField] private TextMeshPro _textNum;
    [SerializeField] private TextMeshPro _text;

    //delete//
    public Vector3 spawnPos;
    public Vector3 spawnPosAttk;
    
    
    //


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
            
            spawnPos = new Vector3(-0.12f, -0.0415f, -0.12f);
            spawnPosAttk = new Vector3(0.12f, -0.06f, -0.12f);
        }
        else
        {
            GameController.SetImposter(this);
            
            this.gameObject.transform.position = _spawnPoint.transform.position;
            
            spawnPos = new Vector3(0.12f,-0.0415f,0.11f);
            spawnPosAttk = new Vector3(-0.18f, -0.06f, 0.12f);
        }

        this.gameObject.transform.localScale = new Vector3(2, 1, 2);
        //Invoke("test",  5f);
    }
    /*void Update()
    {
        _textNum.text = "HP: " + _hp; //gameObject.tag;
        _text.text = _gold.ToString();
        //Debug.LogError("Im a " + isLocalPlayer);
        //Debug.LogError("Its my " + isOwned);
    }*/
    

    public int PlayerNumber
    {
        get => _playerNumber;
        set => _playerNumber = value;
    }

    //выполняется на сервере ...Call this from a client to run this function on the server
    
    

    bool CheckPlayer(int number)
    {
        if (number == PlayerNumber)
            return true;
        return false;
    }
}
