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
        Invoke("OwnerTEXT", 2f);
    }

    void OwnerTEXT()
    {
        if (GameController.Player == null)
        {
            Debug.LogError("Player is null");
            return;
        }
        
        if (this.transform.position.z < 0 && GameController.Player.PlayerNumber == 0)
            _PN.text = "My Bastille";
        else if (this.transform.position.z > 0 && GameController.Player.PlayerNumber == 1)
            _PN.text = "My Bastille";
        else
        {
            _PN.text = "Enemy Bastille";
            _PN.rectTransform.localEulerAngles = new Vector3(0f, 180f, 0f);
        }
    }
}
