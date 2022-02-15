using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OVRPlayerSetting : MonoBehaviour
{
    [SerializeField] private float posX;
    [SerializeField] private float posY;
    [SerializeField] private float posZ;

    // Start is called before the first frame update
    void Start()
    {
        GetComponent<OVRPlayerController>().enabled = false;
        transform.position = new Vector3(posX, posY, posZ);
    }

    
}
