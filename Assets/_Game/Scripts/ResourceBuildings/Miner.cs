using System.Collections;
using System.Collections.Generic;
using _Game.Scripts.Services;
using UnityEngine;

public class Miner : MonoBehaviour
{
    [SerializeField] private float _timeOfMining = 1f;

    [SerializeField] private int _minedGold = 10;
    
    [SerializeField] private OwnerController _ownerController;
    
    void Start()
    {
        StartCoroutine(Mining());
    }

    IEnumerator Mining()
    {
        while (true)
        {
            yield return new WaitForSeconds(_timeOfMining);
            GameController.OnCollectMoney(_minedGold, _ownerController.GetOwner());
        }
    }
    
}
