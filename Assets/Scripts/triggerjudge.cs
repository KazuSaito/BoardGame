using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class triggerjudge : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.name);
        Debug.Log(other.tag);
        if(other.CompareTag("Enemy"))
        {
            Debug.Log("Hit kunai");
        }
        else if (other.CompareTag("Player"))
        {
            Debug.Log("I lost...");
        }
    }
}
