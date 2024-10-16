using Mirror;
using UnityEngine;

public class RandomColor : NetworkBehaviour
{
    public override void OnStartServer()
    {
        base.OnStartServer();
        color = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
    }

    // Color32 packs to 4 bytes
    [SyncVar(hook = nameof(SetColor))] 
    [SerializeField] private Color32 color = Color.black;

    [SerializeField] private Renderer _colorChangeObject;

    // Unity clones the material when GetComponent<Renderer>().material is called
    // Cache it here and destroy it in OnDestroy to prevent a memory leak
    Material cachedMaterial;

    void SetColor(Color32 _, Color32 newColor)
    {
        if (cachedMaterial == null) cachedMaterial = _colorChangeObject.material;
        cachedMaterial.color = newColor;
    }
}