using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttkField : MonoBehaviour
{
    //Перейти в Position Tracker
    //проверка областей не эффективна т.к. карты находятся в каких то ебенях
    //перенести смену цвета в Position Tracker
    public Material[] materials;
    [SerializeField] 
    bool Defzone;//proverka chasti zony (1-Attk zone,0-Deff zone)
    private void OnTriggerEnter(Collider other)
    {
        if (Defzone)
        {
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
    /*private void OnTriggerExit(Collider other)
    {
        other.gameObject.GetComponent<MeshRenderer>().material = materials[1];

    }*/
}
