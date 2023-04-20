using _Game.Scripts.Enemies;
using Mirror;
using TMPro;
using UnityEngine;

public class OwnerController : NetworkBehaviour
{
    [SyncVar(hook = nameof(SyncIdOwner))]
    [SerializeField] private int _idOwner = -1;

    [SerializeField] private TextMeshPro _numText = null;

    void Update()
    {
        if(_numText!= null)
            _numText.text = GetOwner().ToString();
    }
    private void SyncIdOwner(int _, int newValue)
    {
        _idOwner = newValue;
    }
    public int GetOwner()
    {
        return _idOwner;
    }
    public void SetOwner(int id)
    {
        if (_idOwner == -1)
        {
            _idOwner = id;
        }
    }
}