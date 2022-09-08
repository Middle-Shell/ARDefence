using System;
using System.Collections.Generic;
using System.Collections;
using UnityEngine;

namespace easyar
{
    public class Enemy : UnityEngine.MonoBehaviour
    {
        [SerializeField] private Transform _target = null;
        //[SerializeField] private float _speed = 2f;
        
        //когда они приходят на место или умирают, надо их возвращать, подумать насчёт event'ов
        public Transform Target
        {
            set => _target = value;
        }

        public void Go()
        {
            StartCoroutine(Walk());
        }

        IEnumerator Walk()
        {
            while (true)
            {
                Debug.Log("Go");
                yield return new WaitForSeconds(0.1f);
                transform.position = Vector3.Lerp (transform.position, _target.position, 0.1f);
            }
        }
    }
}