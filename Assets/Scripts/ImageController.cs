using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ImageController : MonoBehaviour
{
    // ячейка под отслеживаемый объект
    public GameObject Anchor;
    public GameObject camera;
    public GameObject gizmo;
    public TextMeshProUGUI text1;
    public TextMeshProUGUI text2;
    public TextMeshProUGUI text3;

    // Update is called once per frame
    void Update()
    {
        Anchor = GameObject.FindWithTag("Attk");
        text1.text = camera.name + camera.transform.position;
        text2.text = gizmo.name + gizmo.transform.position;
        //Anchor.transform.position = new Vector3(Anchor.transform.position.x, 0, Anchor.transform.position.z);
        text3.text = Anchor.transform.parent.transform.position + " | " + Anchor.transform.position;
        //Anchor.transform.parent.transform.position = new Vector3(Anchor.transform.position.x, -0.08f, Anchor.transform.position.z);
    }
}
