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
        Debug.Log(other.name);
        Debug.Log(other.tag);
        if(other.CompareTag("Enemy"))
        {
            // ��A�N�e�B�u��Ԏ���Find�ł��Ȃ�
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().WinLose();
            StartCoroutine("LoadEndingScene");
        }
        else if (other.CompareTag("Player"))
        {
            Debug.Log("I lost...");
        }
        // �����ɂ�wall�ɓ��������u�ԂɃN�i�C��Destroy���ׂ��A�����������̂��̂ł͕b���œ��������Ŏ���
        // else if (other.CompareTag("Wall"))
        // {
           // GameObject player =
        // }
    }

    private IEnumerator LoadEndingScene()
    {
        yield return new WaitForSeconds(2f);
        SceneManager.LoadScene("Ending");
    }
}
