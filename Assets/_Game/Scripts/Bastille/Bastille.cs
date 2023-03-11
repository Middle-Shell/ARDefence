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
    
    [SerializeField] private GameObject Pref;
    [SerializeField] private GameObject _plane;

    [SyncVar(hook = nameof(SyncNumber))]
    [SerializeField] private int _playerNumber;//указывать в редакторе
    [SerializeField] private TextMeshPro _textNum;

    [SerializeField] private TextMeshPro _text;
    
    [SyncVar(hook = nameof(OnColorChanged))]
    public Color playerColor = Color.white;
    
    private Material playerMaterialClone;
    public GameObject bast;


    void SyncNumber(int oldValue, int newValue)
    {
        _playerNumber = newValue;
    }
    void SyncGold(int oldValue, int newValue)
    {
        _gold = newValue;
    }
    
    void OnColorChanged(Color _Old, Color _New)
    {
        playerMaterialClone = new Material(bast.GetComponent<Renderer>().material);
        playerMaterialClone.color = _New;
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
        //gameObject.transform.SetParent(_plane.transform);
        GameController.CollectMoneyEvent += AddMoney;
        GameController.SpendMoneyEvent += CmdSpendMoney;
        if(isOwned)//(this.transform.position.z < 0)
            this.gameObject.tag = "MyBastille";
        else
        {
            GameController.SpendMoneyEvent -= CmdSpendMoney;
        }

        Debug.LogError(playerNumber);
        

        Invoke("test",  5f);
        GameController.SetPlayer(this);

        //Debug.LogError(NetworkServer.);
    }
    void Update()
    {
        _textNum.text = GameController.Player.playerNumber.ToString(); //gameObject.tag;
        _text.text = _gold.ToString();
        //playerNumber.ToString();
        //Debug.LogError("Im a " + isLocalPlayer);
        //Debug.LogError("Its my " + isOwned);
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
    
    [Command]
    void CmdSpendMoney(int gold) 
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
