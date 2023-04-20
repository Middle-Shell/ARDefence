using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using Mirror;



public class SpawnNetController : NetworkBehaviour
{
    [SerializeField] private int _numBuild;
    [SerializeField] private string _nameInDict;
    [SerializeField] private SerializableDictionary<string, GameObject> _spawnObject = new SerializableDictionary<string, GameObject>();
    private Quaternion _limitedRotation = new Quaternion(0F, 0F, 0F, 0F);
    Vector3 spawnPos = new Vector3(0.12f,-0.0415f,0.11f);
    
    void Start()
    {
        GameController.ServerSpawnEvent += CmdServerTransfer;
    }
    
    [Command(requiresAuthority = false)]
    private void CmdServerTransfer(string keyName, float x, float y, float z, int id)//нельзя передать значения извне, можно только работать с тем что уже есть на сервере
    //условно мы можем передать только ID префаба из списка, который уже лежит внутри Контроллера, но не сам префаб и так со всеми значениями
    //подумать либо как обойти, либо как с этим жить, но постройки теперь работают
    {
        _nameInDict = keyName;
        var installPosition = new Vector3(x, y, z);
        GameObject inst = Instantiate(_spawnObject[_nameInDict], installPosition, Quaternion.identity);
        inst.GetComponent<OwnerController>().SetOwner(id);
        NetworkServer.Spawn(inst);
    }

    public void test()//для тестов, потом убрать
    {
        print(_nameInDict + spawnPos.x + spawnPos.y + spawnPos.z + GameController.Player.PlayerNumber);
        GameController.OnServerSpawn("Barrack", 0.12f, -0.0415f, 0.11f, GameController.Player.PlayerNumber);
        //inst.gameObject.transform.SetParent(_plane.transform);
        //Выяснить почему здесь вычитаются деньги у сервера, но не у клиента, кнопка однако работает корректно
        //подозреваю что то с подписками на событие
        GameController.OnSpendMoney(10, GameController.Player.PlayerNumber);
    }
}