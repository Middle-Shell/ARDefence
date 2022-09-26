using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlaneOut : MonoBehaviour
{
    // Start is called before the first frame update
    void OnDisable()
    {
        this.gameObject.SetActive(true);
        this.gameObject.transform.SetParent(null,true);

    }
}
