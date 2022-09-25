using System;
using System.Collections;
using _Game.Scripts;
using _Game.Scripts.Services;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

namespace easyar
{
    public class Enemy : UnityEngine.MonoBehaviour
    {
        [SerializeField] private Transform _target = null;
        private NavMeshAgent _navMeshAgent;
        
        private byte _motheLand = 0;
        
        [SerializeField] private int _hp = 100;
        [SerializeField] private float _speed = 2f;

        [SerializeField] private Slider _text;

        private void Awake()
        {
            _navMeshAgent = GetComponent<NavMeshAgent>();
        }

        public Transform Target
        {
            set => _target = value; //подумать над передачей таргета, когда цели нет
        } 

        public void Go()
        {
            StartCoroutine(Walk());
            _navMeshAgent.enabled = !_navMeshAgent.enabled;
            _navMeshAgent.destination = _target.position;
            
        }

        public void ApplyDamage(int damageValue)
        {
            _hp -= damageValue;
            if (_hp <= 0)
            {
                _navMeshAgent.enabled = !_navMeshAgent.enabled;
                StopAllCoroutines();
                _hp = 100;
                EventCrossroad.OnUnitDied(this.gameObject);
                Debug.Log("Died");
            }
        }
        
        IEnumerator Walk()
        {
            while (true)
            {
                if (Vector3.Distance(transform.position, _target.position) < 0.5f) ApplyDamage(101); //тестовое
                yield return new WaitForSeconds(0.05f);
                
                // Debug.Log(_text.value);
                // transform.position = Vector3.MoveTowards(transform.position, _target.position, (float)_text.value * Time.deltaTime); //Vector3.Lerp (transform.position, _target.position, 0.1f);
                
            }
        }
    }
}