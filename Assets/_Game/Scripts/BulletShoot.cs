using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletShoot : MonoBehaviour
{
    [SerializeField] GameObject projectile;
    [SerializeField] float rateOfFire = 1f;
    GameObject Bclone;


    public float GetRateOfFire
    {
        get { return rateOfFire; }
        set { rateOfFire = value; }
    }

    public void Fire()
    {

        Bclone = Instantiate(projectile, transform.position, transform.rotation);
        DestroyObjectDelayed();

    }
    void DestroyObjectDelayed()
    {
        Destroy(Bclone, 2f);
    }
}
