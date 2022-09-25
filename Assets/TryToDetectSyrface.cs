using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TryToDetectSyrface : MonoBehaviour
{

    public TextMeshProUGUI _Text;
    // Update is called once per frame
    void Update()
    {
        _Text.text = this.gameObject.transform.position.x + " " + this.gameObject.transform.position.y + " " +
                     this.gameObject.transform.position.z;
    }
}
