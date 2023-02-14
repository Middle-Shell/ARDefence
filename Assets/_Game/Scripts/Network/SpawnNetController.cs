using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using _Game.Scripts.Services;



namespace Mirror
{


    public class SpawnNetController : NetworkBehaviour
    {
        void Start()
        {
            GameController.ServerSpawnEvent += ServerTransfer;
        }

        private void ServerTransfer(GameObject build)
        {
            NetworkServer.Spawn(build);
        }
    }
}