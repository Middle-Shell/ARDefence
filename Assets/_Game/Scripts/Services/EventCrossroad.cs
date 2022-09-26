using UnityEngine;

namespace _Game.Scripts.Services
{
    public class EventCrossroad : MonoBehaviour
    {
        public delegate void UnitDied(GameObject unit);
        public static event UnitDied UnitDiedEvent;
        
        public delegate void PlaneAwake(GameObject plane);
        public static event PlaneAwake PlaneAwakeEvent;
        
        public delegate void PlaneSleep(GameObject plane);
        public static event PlaneSleep PlaneSleepEvent;

        public static void OnUnitDied(GameObject unit)
        {
            UnitDiedEvent?.Invoke(unit);
        }

        public static void OnPlaneAwake(GameObject plane)
        {
            PlaneAwakeEvent?.Invoke(plane);
        }
        
        public static void OnPlaneSleep(GameObject plane)
        {
            PlaneSleepEvent?.Invoke(plane);
        }
    }
}