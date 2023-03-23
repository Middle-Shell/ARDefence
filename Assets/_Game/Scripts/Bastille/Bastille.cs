using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using TMPro;
using Mirror;

public class Bastille : NetworkBehaviour
{
    [SyncVar(hook = nameof(SyncGold))]
    [SerializeField] private int _gold = 100;

    [SyncVar(hook = nameof(SyncHp))]
    [SerializeField] private float _hp = 500f;
    
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
    [SyncVar(hook = nameof(OnColorChanged))]
    public Color playerColor = Color.white;
    //
    
    //delete//
    private Material playerMaterialClone;
    public GameObject bast;
    //
    
    //delete//
    public Vector3 spawnPos;
    public Vector3 spawnPosAttk;
    //


    void SyncNumber(int oldValue, int newValue)
    {
        _playerNumber = newValue;
    }
    void SyncGold(int oldValue, int newValue)
    {
        _gold = newValue;
    }
    
    void SyncHp(float oldValue, float newValue)
    {
        _hp = newValue;
    }
    
    void OnColorChanged(Color oldValue, Color newValue)
    {
        playerMaterialClone = new Material(bast.GetComponent<Renderer>().material);
        playerMaterialClone.color = newValue;
        bast.GetComponent<Renderer>().material = playerMaterialClone;
    }
    
    public override void OnStartLocalPlayer()
    {
        Color color = new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));
        CmdSetupPlayer(color);
    }
    [Command]
    private void CmdSetupPlayer(Color col)
    {
        // player info sent to server, then server updates sync vars which handles it on all clients
        playerColor = col;
    }
    
    void Start()
    {
        _plane = GameObject.FindWithTag("Anchor");
        _spawnPoint = GameObject.FindWithTag("SpawnPoint");
        
        gameObject.transform.SetParent(_plane.transform);
        
        GameController.GetDamageEvent += CmdGetDamage;
        
        if (isOwned) //(this.transform.position.z < 0)
        {
            GameController.CollectMoneyEvent += AddMoney;
            GameController.SpendMoneyEvent += CmdSpendMoney;
            
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
            spawnPosAttk = new Vector3(-0.12f, -0.06f, 0.12f);
        }

        this.gameObject.transform.localScale = new Vector3(2, 1, 2);
        Invoke("test",  5f);
        

        //Debug.LogError(NetworkServer.);
    }
    void Update()
    {
        _textNum.text = "HP: " + _hp; //gameObject.tag;
        _text.text = _gold.ToString();
        //playerNumber.ToString();
        //Debug.LogError("Im a " + isLocalPlayer);
        //Debug.LogError("Its my " + isOwned);
    }

    public int PlayerNumber
    {
        get => _playerNumber;
        set => _playerNumber = value;
    }

    [Command]
    void AddMoney(int gold)
    {
        _gold += gold;
        _text.text = _gold.ToString();
    }

    [Command]//выполняется на сервере ...Call this from a client to run this function on the server
    public void test()//для тестов, потом убрать
    {
        var inst = Instantiate(_pref, spawnPos,
            Quaternion.identity);
        var inst2 = Instantiate(_attPref, spawnPosAttk,
            Quaternion.identity);
        GameController.OnServerSpawn(inst);
        GameController.OnServerSpawn(inst2);
        //inst.gameObject.transform.SetParent(_plane.transform);
        GameController.OnSpendMoney(20);
    }
    
    [Command]
    void CmdSpendMoney(int gold) 
    {
        _gold -= gold;
        _text.text = _gold.ToString();
    }

    [Command]
    void CmdGetDamage(float damage, int number)
    {
        if(CheckPlayer(number))
            _hp -= damage;
        _textNum.text = "HP: " + _hp;
    }

    bool CheckPlayer(int number)
    {
        if (number == PlayerNumber)
            return true;
        return false;
    }
}
