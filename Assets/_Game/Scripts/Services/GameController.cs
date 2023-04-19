using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace _Game.Scripts.Services
{
    public static class GameController
    {
        public static int NumberOfBarracks { get; set; } = 0;

        public static Bastille Player { get; private set; }
        public static Bastille Imposter { get; private set; }

        public static void SetPlayer(Bastille player)
        {
            Player = player;
            Debug.LogError("Player" + Player.PlayerNumber);
        }

        public static void SetImposter(Bastille imposter)
        {
            Imposter = imposter;
            Debug.LogError("imposter " + imposter.PlayerNumber);
        }

        public delegate void CollectMoney(int gold, int number);
        public static event CollectMoney CollectMoneyEvent;
        public static void OnCollectMoney(int gold, int number)
        {
            CollectMoneyEvent?.Invoke(gold, number);
            
        }
        
        public delegate void SpendMoney(int gold, int number);
        public static event SpendMoney SpendMoneyEvent;
        public static void OnSpendMoney(int gold, int number)
        {
            SpendMoneyEvent?.Invoke(gold, number);
        }

        public delegate void SpawnToServer(int i, Vector3 installPosition, Quaternion rotation, int id);
        public static event SpawnToServer ServerSpawnEvent;
        public static  void OnServerSpawn(int i, Vector3 installPosition, Quaternion rotation, int id)
        {
            ServerSpawnEvent?.Invoke(i, installPosition, rotation, id);
        }
        
        public delegate void UnitDied(GameObject unit);
        public static event UnitDied UnitDiedEvent;
        public static void OnUnitDied(GameObject unit)
        {
            UnitDiedEvent?.Invoke(unit);
        }

        public delegate void GetDamage(float damage, int number);

        public static event GetDamage GetDamageEvent;

        public static void OnGetDamage(float damage, int number)
        {
            GetDamageEvent?.Invoke(damage, number);
        }

        
    }
}
