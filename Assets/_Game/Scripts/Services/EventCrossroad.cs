using System;
using UnityEngine;

namespace _Game.Scripts
{
    public class EventCrossroad : MonoBehaviour
    {
        public delegate void UnitDied(GameObject unit);
        
        public static event UnitDied UnitDiedEvent;
        

        public static void OnUnitDied(GameObject unit)
        {
            UnitDiedEvent?.Invoke(unit);
        }
    }
}