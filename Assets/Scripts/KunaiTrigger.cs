using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class KunaiTrigger : MonoBehaviour
{
    public GameObject canvas;

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.name);
        Debug.Log(other.tag);
        if(other.CompareTag("Enemy"))
        {
            // 非アクティブ状態時はFindできない
            canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().WinLose();
        }
        else if (other.CompareTag("Player"))
        {
            Debug.Log("I lost...");
        }
    }
}
