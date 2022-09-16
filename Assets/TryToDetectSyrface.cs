using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TryToDetectSyrface : MonoBehaviour
{
    public Camera camera;

    public GameObject plane;
    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            //Touch touch = Input.GetTouch(0);
            RaycastHit hit;
            Ray ray = camera.ScreenPointToRay(Vector3.forward);
            Debug.DrawRay(ray.origin, ray.direction * 10, Color.yellow);
            plane.transform.position = ray.direction * 10;
        }
        /*if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            RaycastHit hit;

            if (touch.phase == TouchPhase.Began)
            {
                Ray ray = camera.ScreenPointToRay(touch.position);
                Debug.DrawRay(ray.origin, ray.direction * 10, Color.yellow);
            }
        }*/
    }
}
