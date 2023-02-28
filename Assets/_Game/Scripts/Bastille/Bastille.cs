using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using TMPro;
using Mirror;

public class Bastille : NetworkBehaviour
{
    [SerializeField] private int _gold = 100;
    [SerializeField] private GameObject Pref;
    [SerializeField] private GameObject _plane;

    [SyncVar(hook = nameof(SyncNumber))]
    [SerializeField] private int _playerNumber;//указывать в редакторе
    [SerializeField] private TextMeshProUGUI _text;

    void SyncNumber(int oldValue, int newValue) //обязательно делаем два значения - старое и новое. 
    {
        _playerNumber = newValue;
    }

    void Start()
    {
        if(this.transform.position.z < 0)
            this.gameObject.tag = "MyBastille";

        Debug.LogError(playerNumber);
        GameController.CollectMoneyEvent += AddMoney;
        GameController.SpendMoneyEvent += SpendMoney;
        _plane = GameObject.FindWithTag("Anchor");
        Invoke("test",  5f);

        GameController.SetPlayer();
        
        //Debug.LogError(NetworkServer.connections.Count);
    }

    public int playerNumber
    {
        get => _playerNumber;
        set => _playerNumber = value;
    }

    void AddMoney(int gold, int playerNumber)
    {
        if(CheckPlayer(playerNumber))
            _gold += gold;
        _text.text = _gold.ToString();
    }

    [Command]//выполняется на сервере ...Call this from a client to run this function on the server
    public void test()//для тестов, потом убрать
    {
        var inst = Instantiate(Pref, new Vector3(-0.1213229f,
                -0.0405f,
                -0.0672235f),
            Quaternion.identity);
        GameController.OnServerSpawn(inst);
        //inst.gameObject.transform.SetParent(_plane.transform);
        //SpendMoney(10, 1);
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
