/*//Create three Sliders ( Create>UI>Slider) and three Text GameObjects (Create>UI>Text). These are for manipulating the x, y, and z values of the Quaternion. The text will act as a label for each Slider, so position them appropriately.
//Attach this script to a GameObject.
//Click on the GameObject and attach each of the Sliders and Texts to the fields in the Inspector.

//This script shows how the numbers placed into the x, y, and z components of a Quaternion effect the GameObject when the w component is left at 1.
//Use the Sliders to see the effects.

using UnityEngine;
using UnityEngine.UI;

public class PlaneOut : MonoBehaviour
{
    //These are the floats for the x, y, and z components of the quaternion
    float m_MyX, m_MyY, m_MyZ;
    //These are the Sliders that set the rotation. Remember to assign these in the Inspector
    public Slider m_SliderX, m_SliderY, m_SliderZ;
    //These are the Texts that output the current value of the rotations. Remember to assign these in the Inspector

    // Use this for initialization
    void Start()
    {
        //Initialise the x, y, and z components of the future Quaternion
        m_MyX = 0;
        m_MyY = 0;
        m_MyZ = 0;

        //Set all the sliders max values to 1 so the Quaternion values don't go over 1
        m_SliderX.maxValue = 1;
        m_SliderY.maxValue = 1;
        m_SliderZ.maxValue = 1;

        //Set all the sliders min values to -1 so the Quaternion values don't go under 1
        m_SliderX.minValue = -1;
        m_SliderY.minValue = -1;
        m_SliderZ.minValue = -1;
    }

    //Change the Quaternion values depending on the values of the Sliders
    private static Quaternion Change(float x, float y, float z)
    {
        Quaternion newQuaternion = new Quaternion();
        newQuaternion.Set(x, y, z, 1);
        //Return the new Quaternion
        return newQuaternion;
    }

    void Update()
    {
        //Update the x, y and z values to that of the sliders
        m_MyX = m_SliderX.value;
        m_MyY = m_SliderY.value;
        m_MyZ = m_SliderZ.value;
        //Output the current values of x, y, and z

        //Rotate the GameObject by the new Quaternion
        transform.rotation = Change(m_MyX, m_MyY, m_MyZ);
    }
}*/
using System;
using UnityEngine;
using UnityEngine.UI;
public class PlaneOut : MonoBehaviour
{
    /*private void Update()
    {
        //this.transform.Rotate(, 0, 0);
        /*Debug.Log(Math.PI * (this.transform.rotation.x + (-90 - this.transform.rotation.x)) / 180.0);
        Debug.Log(this.transform.rotation.x);
        transform.rotation = new Quaternion((float)(Math.PI * (this.transform.rotation.x + (-90 - this.transform.rotation.x)) / 180.0), 0f, 0f, 0f);
        #1#
        
        float degreesx = this.transform.parent.transform.rotation.x-90;
        float degreesy = -this.transform.parent.transform.rotation.y;
        float degreesz = -this.transform.parent.transform.rotation.z;
        Vector3 to = new Vector3(degreesx, degreesy, degreesz);
        Debug.Log(this.transform.rotation);
        transform.eulerAngles = to;
    }
    */
    //These are the floats for the x, y, and z components of the quaternion
    float m_MyX, m_MyY, m_MyZ;

    public Slider m_SliderX;

    public GameObject parent;
    // Use this for initialization
    void Start()
    {
        //m_SliderX.maxValue = 180;
        //m_SliderX.minValue = -180;
        //Initialise the x, y, and z components of the future Quaternion
        m_MyX = 0;
        m_MyY = 0;
        m_MyZ = 0;
        parent = transform.parent.gameObject;
    }
    //Change the Quaternion values depending on the values of the Sliders
    private static Quaternion Change(float x, float y, float z)
    {
        Quaternion newQuaternion = new Quaternion();
        newQuaternion.Set(x, y, z, 1);
        
        //Return the new Quaternion
        return newQuaternion;
    }

    void Update()
    {
        //Update the x, y and z values to that of the sliders
        var rotationP = parent.transform.rotation;
        Debug.Log("nowSlave " + transform.rotation);
        m_MyX = -90 + (rotationP.eulerAngles.x * -1);
        m_MyY = 0;
        m_MyZ = 0;
        // m_MyX = m_SliderX.value;
        // m_MyY = 0;
        // m_MyZ = 0;
        Debug.Log("master " + rotationP.eulerAngles.x);
        Debug.Log("slave " + m_MyX);
        // Debug.Log(-rotation.eulerAngles.z);
        Debug.Log(Quaternion.Euler(m_MyX, m_MyY, m_MyZ));
        //Rotate the GameObject by the new Quaternion
        transform.rotation = Quaternion.Euler(m_MyX, m_MyY, m_MyZ); //Change(m_MyX, m_MyY, m_MyZ);
    }
}
