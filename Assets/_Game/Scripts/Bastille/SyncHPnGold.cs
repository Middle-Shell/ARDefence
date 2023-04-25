using System.Collections.Generic;
using Mirror;
using TMPro;
using UnityEngine;

//[assembly: InternalsVisibleTo("Bastille")]
public class SyncHPnGold : NetworkBehaviour
{
    [SyncVar(hook = nameof(SyncHP))]
    [SerializeField] private float _hp = 500;
     
    [SyncVar(hook = nameof(SyncGold))]
    [SerializeField] private int _gold = 100;

    [SerializeField] private List<TextMeshPro> _hpText;
    [SerializeField] private List<TextMeshPro> _goldText;
    

    void Update()
    {
        _hpText[0].text = "Armor:\n"+  + _hp;
        _goldText[0].text = "Gold:\n" + _gold;
        _hpText[1].text = "Armor:\n"+  + _hp;
    }
    private void SyncHP(float _, float newValue)
    {
        _hp = newValue;
    }

    internal void SetHP(float damage)
    {
        _hp -= damage;
    }
    private void SyncGold(int _, int newValue)
    {
        _gold = newValue;
    }
    internal void SetGold(int gold)
    {
        _gold -= gold;
    }
}