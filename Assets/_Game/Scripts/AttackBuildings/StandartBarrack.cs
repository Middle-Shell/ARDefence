using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.Linq;
using _Game.Scripts.Services;
using easyar;

namespace _Game.Scripts.Enemies
{
    public class StandartBarrack : MonoBehaviour, IBaseBarrack
    {
        [SerializeField] private int _idBarrack = 0;
        [SerializeField] private List<GameObject> _solders = new List<GameObject>();
        
        [SerializeField] private float _timeoutSpawn = 1f;
        
        private GameObject _target;
        
        [SerializeField] private Transform _startPosition;
        [SerializeField] private Transform _storeUnitPosition; // vector3

        public void Start()
        {
            //EventCrossroad.UnitDiedEvent += AddSolder;
            EventCrossroad.UnitDiedEvent += ReturnUnit;//подпись на события
            
            _target = GameObject.FindWithTag("EnemyBastille");
            foreach (var solder in _solders)
            {
                solder.GetComponent<Enemy>().IdMasterBarrack = _idBarrack;
            }
            StartCoroutine(Spawn());
        }

        public void AddSolder(GameObject solder)
        {
            solder.GetComponent<Enemy>().IdMasterBarrack = _idBarrack;
            _solders.Add(solder);
            //Debug.Log("Solder added");
        }

        public void ExitSolder()
        {
            _solders.RemoveAt(0);
            //Debug.Log("Solder came out");
        }

        private void ReturnUnit(GameObject unit)
        {
            if (unit.GetComponent<Enemy>().IdMasterBarrack == _idBarrack)
            {
                unit.transform.position = _storeUnitPosition.position;
                AddSolder(unit);
            }
        }
        IEnumerator Spawn()
        {
            while (true)
            {
                //Debug.Log("Start");
                yield return new WaitForSeconds(_timeoutSpawn);
                if (_target.activeSelf && _solders.Any())
                {
                    _solders[0].transform.position = _startPosition.position;
                    _solders[0].GetComponent<Enemy>().Target = _target.transform;
                    _solders[0].GetComponent<Enemy>().Go();
                    ExitSolder();
                }
            }
        }
    }
}