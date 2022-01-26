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
            // 非アクティブ状態時はFindできない
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().WinLose();
            StartCoroutine("LoadEndingScene");
        }
        else if (other.CompareTag("Player"))
        {
            Debug.Log("I lost...");
        }
        // 厳密にはwallに当たった瞬間にクナイをDestroyすべき、ただし既存のものでは秒数で内部消去で実装
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
