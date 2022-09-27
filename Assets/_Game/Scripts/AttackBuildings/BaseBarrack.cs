using UnityEngine;

namespace _Game.Scripts.Enemies
{
    public interface IBaseBarrack
    {
         void AddSolder(GameObject solder);

         void ExitSolder();
    }
}