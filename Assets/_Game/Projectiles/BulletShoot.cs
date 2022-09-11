using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletShoot : MonoBehaviour
{
   [SerializeField] GameObject projectile;
   [SerializeField] float rateOfFire = 1f;


    public float GetRateOfFire
    {
       get{ return rateOfFire;}
       set{rateOfFire = value;}
    }
    void DestroyObjectDelayed()
    {
        Destroy( Instantiate(projectile),0.5f);
    }
   public void Fire()
   {
        Instantiate(projectile,transform.position,transform.rotation);
        DestroyObjectDelayed();
        
   }
}
