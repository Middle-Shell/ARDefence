using System;
using System.Collections.Generic;
using System.Collections;
using _Game.Scripts;
using Unity.VisualScripting;
using UnityEngine;

namespace easyar
{
    public class Enemy : UnityEngine.MonoBehaviour
    {
        [SerializeField] private Transform _target = null;
        private byte _motheLand = 0;
        
        [SerializeField] private int _hp = 100;
        //[SerializeField] private float _speed = 2f;
        
        public Transform Target
        {
            set => _target = value; //подумать над передачей таргета, когда цели нет
        } 

        public void Go()
        {
            StartCoroutine(Walk());
        }

        public void ApplyDamage(int damageValue)
        {
            _hp -= damageValue;
            if (_hp <= 0)
            {
                StopAllCoroutines();
                _hp = 100;
                EventCrossroad.OnUnitDied(this.gameObject);
            }
        }
        
        IEnumerator Walk()
        {
            while (true)
            {
                yield return new WaitForSeconds(0.1f);
                transform.position = Vector3.Lerp (transform.position, _target.position, 0.1f);
                if (Math.Abs(transform.position.x - _target.position.x) < 0.2) ApplyDamage(100); //тестовое
            }
        }
    }
}