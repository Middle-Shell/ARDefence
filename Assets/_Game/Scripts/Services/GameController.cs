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
            Debug.LogError(player.gameObject.tag);
            Player = player;
        }

        public static void SetImposter(Bastille imposter)
        {
            Debug.LogError(imposter.gameObject.tag);
            Imposter = imposter;
        }

        public delegate void CollectMoney(int gold);
        public static event CollectMoney CollectMoneyEvent;
        public static void OnCollectMoney(int gold)
        {
            CollectMoneyEvent?.Invoke(gold);
            
        }
        
        public delegate void SpendMoney(int gold);
        public static event SpendMoney SpendMoneyEvent;
        public static void OnSpendMoney(int gold)
        {
            SpendMoneyEvent?.Invoke(gold);
        }

        public delegate void SpawnToServer(GameObject build);
        public static event SpawnToServer ServerSpawnEvent;
        public static  void OnServerSpawn(GameObject build)
        {
            ServerSpawnEvent?.Invoke(build);
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
