using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;
using Mirror;



public class SpawnNetController : NetworkBehaviour
{
    void Start()
    {
        GameController.ServerSpawnEvent += ServerTransfer;
    }
//поймал за говно, он обращается к сервер нетворку, а у клиента то какой сервер нетворк
    [Command]
    private void ServerTransfer(GameObject build)
    {
        NetworkServer.Spawn(build);
        Debug.LogError("Sent");
    }
}