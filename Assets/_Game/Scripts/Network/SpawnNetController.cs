using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using Mirror;



public class SpawnNetController : NetworkBehaviour
{
    [SerializeField] private int _numBuild;
    [SerializeField] private List<GameObject> _prefabs;
    Vector3 spawnPos = new Vector3(0.12f,-0.0415f,0.11f);
    
    void Start()
    {
        GameController.ServerSpawnEvent += CmdServerTransfer;
    }
    
    [Command]
    private void CmdServerTransfer(int i, Vector3 installPosition, Quaternion rotation, int id)//нельзя передать значения извне, можно только работать с тем что уже есть на сервере
    //условно мы можем передать только ID префаба из списка, который уже лежит внутри Контроллера, но не сам префаб и так со всеми значениями
    //подумать либо как обойти, либо как с этим жить, но постройки теперь работают
    {
        GameObject inst = Instantiate(_prefabs[i], installPosition, rotation);
        inst.GetComponent<OwnerController>().SetOwner(id);
        NetworkServer.Spawn(inst);
    }

    public void test()//для тестов, потом убрать
    {
        GameController.OnServerSpawn(_numBuild, spawnPos, GameObject.FindWithTag("Anchor").transform.rotation, GameController.Player.PlayerNumber);
        //inst.gameObject.transform.SetParent(_plane.transform);
        //Выяснить почему здесь вычитаются деньги у сервера, но не у клиента, кнопка однако работает корректно
        //подозреваю что то с подписками на событие
        GameController.OnSpendMoney(10, GameController.Player.PlayerNumber);
    }
}