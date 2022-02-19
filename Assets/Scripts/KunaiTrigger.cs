using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class KunaiTrigger : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        // ���܂ɏ�肭�������Ȃ��o�O����������̂ŗv����
        if (this.gameObject.tag == "Weapon")
        {
            if (other.CompareTag("Enemy"))
            {
                // ��A�N�e�B�u��Ԏ���Find�ł��Ȃ�
                GameObject canvas = GameObject.FindWithTag("Canvas");
                canvas.GetComponent<CanvasManager>().Win();
            }
        }
        else if (other.CompareTag("Player"))
        {
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().Lose();
        }
    }
}
