using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttkField : MonoBehaviour
{
    public Material[] materials;
    [SerializeField] 
    bool Defzone;//proverka chasti zony (1-Attk zone,0-Deff zone)
    private void OnTriggerEnter(Collider other)
    {
        if (Defzone)
        {
            Debug.Log("hey");
            if (other.tag == "Deff")
            {
                other.gameObject.GetComponent<MeshRenderer>().material = materials[0];
                
            }
        }
        else
        {
            if (other.tag == "Attk")
            {
                other.gameObject.GetComponent<MeshRenderer>().material = materials[0];

            }
        }

    }
    private void OnTriggerExit(Collider other)
    {
        other.gameObject.GetComponent<MeshRenderer>().material = materials[1];

    }
}
