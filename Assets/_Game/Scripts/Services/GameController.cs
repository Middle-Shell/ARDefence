using System.Collections;
using System.Collections.Generic;

namespace _Game.Scripts.Services
{
    public class GameController
    {
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

        public delegate void DamageSystem(int damage, int playerNumber);

        public static event DamageSystem DamageSystemEvent;

        public static void OnDamageSystem(int damage, int playerNumber)
        {
            DamageSystemEvent?.Invoke(damage,playerNumber);
        }
    }
}
