using System;
using UnityEngine;

public class PlaneOut : MonoBehaviour
{
    private void Update()
    {
        this.transform.Rotate(-360f, 0, 0);
    }
}
