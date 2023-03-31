using System.Collections;
using System.Collections.Generic;
using _Game.Scripts.Services;
using UnityEngine;

public class Miner : MonoBehaviour
{
    [SerializeField] private float _timeOfMining = 1f;

    [SerializeField] private int _minedGold = 10;

    
    void Start()
    {
        if(transform.position.z < 0)
            StartCoroutine(Mining());
    }

    IEnumerator Mining()
    {
        while (true)
        {
            yield return new WaitForSeconds(_timeOfMining);
            GameController.OnCollectMoney(_minedGold);
        }
    }
    
}
