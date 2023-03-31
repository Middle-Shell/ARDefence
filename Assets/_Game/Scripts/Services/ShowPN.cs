using System.Collections;
using System.Collections.Generic;
using _Game.Scripts.Services;
using TMPro;
using UnityEngine;

public class ShowPN : MonoBehaviour
{
    [SerializeField] private TextMeshPro _PN;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        _PN.text = GameController.Player.PlayerNumber.ToString();
    }
}
