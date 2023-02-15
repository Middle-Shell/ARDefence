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

    private void ServerTransfer(GameObject build)
    {
        print("Sent");
        NetworkServer.Spawn(build);
    }
}