using System;
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
        [SerializeField] private byte idLand = 0;
        public  List<GameObject> _solders = new List<GameObject>();
        
        [SerializeField] private float _perSecends = 1f;
        
        [SerializeField] private GameObject _target;
        
        [SerializeField] private GameObject _startPosition; // = Vector3.zero;
        [SerializeField] private GameObject _storeUnitPosition; // vector3

        public void Start()
        {
            EventCrossroad.UnitDiedEvent += AddSolder;
            EventCrossroad.UnitDiedEvent += ReturnUnit;
        }

        public void OnEnable()
        {
            Debug.Log("Awake");
            //AddSolder(sol);
            StartCoroutine(Spawn());
        }

        private void OnDisable()
        {
            StopAllCoroutines();
        }

        public void AddSolder(GameObject solder)
        {
            _solders.Add(solder);
            Debug.Log("Solder added");
        }

        public void ExitSolder()
        {
            _solders.RemoveAt(0);
            Debug.Log("Solder came out");
        }

        private void ReturnUnit(GameObject unit)
        {
            
            unit.transform.position = _storeUnitPosition.transform.position;
        }
        IEnumerator Spawn()
        {
            while (true)
            {
                Debug.Log("Start");
                yield return new WaitForSeconds(_perSecends);
                if (_target.activeSelf && _solders.Any())
                {
                    _solders[0].transform.position = _startPosition.transform.position;
                    _solders[0].GetComponent<Enemy>().Target = _target.transform;
                    _solders[0].GetComponent<Enemy>().Go();
                    ExitSolder();
                }
            }
        }
    }
}