using System;
using System.Collections;
using _Game.Scripts;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace easyar
{
    public class Enemy : UnityEngine.MonoBehaviour
    {
        [SerializeField] private Transform _target = null;
        private byte _motheLand = 0;
        
        [SerializeField] private int _hp = 100;
        [SerializeField] private float _speed = 2f;

        [SerializeField] private Slider _text;
        
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
                Debug.Log("Died");
            }
        }
        
        IEnumerator Walk()
        {
            while (true)
            {
                yield return new WaitForSeconds(0.05f);
                Debug.Log(_text.value);
                transform.position = Vector3.MoveTowards(transform.position, _target.position, (float)_text.value * Time.deltaTime); //Vector3.Lerp (transform.position, _target.position, 0.1f);
                if (Vector3.Distance(transform.position, _target.position) < 0.01) ApplyDamage(100); //тестовое
            }
        }
    }
}