using UnityEngine;
using _Game.Scripts.Services;

public class ActiveSender : MonoBehaviour
{
    // Start is called before the first frame update
    
    void Start()
    {
         
    }

    void OnEnable()
    {

        EventCrossroad.OnPlaneAwake(this.gameObject);
       
    }

    void OnDisable()
    {
       EventCrossroad.OnPlaneSleep(this.gameObject);   
    }
}
