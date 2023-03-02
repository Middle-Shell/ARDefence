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
        NetworkServer.Spawn(build);
        print("Sent");
    }
    public override void OnStartLocalPlayer()
    {
        print("ЧТО то происходит");
        if (isServer)
        {
            Debug.LogError("I am the server host!");
        }
        else
        {
            Debug.LogError("I am a client.");
        }
    }
}