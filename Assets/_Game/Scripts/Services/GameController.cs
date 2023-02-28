using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace _Game.Scripts.Services
{
    public class GameController
    {
        private static Bastille player1, player2;

        public static void SetPlayer()
        {
            player1 = GameObject.FindWithTag("MyBastille").GetComponent<Bastille>();
            player2 = GameObject.FindWithTag("EnemyBastille").GetComponent<Bastille>();
        }

        public delegate void CollectMoney(int gold, int playerNumber);
        public static event CollectMoney CollectMoneyEvent;

        public static void OnCollectMoney(int gold, int playerNumber)
        {
            CollectMoneyEvent?.Invoke(gold, playerNumber);
            
        }
        
        public delegate void SpendMoney(int gold, int playerNumber);
        public static event SpendMoney SpendMoneyEvent;

        public static void OnSpendMoney(int gold, int playerNumber)
        {
            SpendMoneyEvent?.Invoke(gold, playerNumber);
        }

        public delegate void SpawnToServer(GameObject build);

        public static event SpawnToServer ServerSpawnEvent;
        
        public static  void OnServerSpawn(GameObject build)
        {
            ServerSpawnEvent?.Invoke(build);
        }

        public static int GetPlayerNumber(bool isMe)
        {
            return isMe ? player1.playerNumber : player2.playerNumber;
        }
    }
}
