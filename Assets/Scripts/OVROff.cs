using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OVROff : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        GetComponent<OVRPlayerController>().enabled = false;
    }

    
}
