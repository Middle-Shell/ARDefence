using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletSpeed : MonoBehaviour
{
    [SerializeField] float projectileSpeed=5f;
    
    void Update()
    {
        transform.Translate(new Vector3(projectileSpeed*Time.deltaTime,0f,0f));
    }
}
