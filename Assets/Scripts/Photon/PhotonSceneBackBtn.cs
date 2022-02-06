using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PhotonSceneBackBtn : MonoBehaviour
{
    public void BackButtonClicked()
    {
        SceneManager.LoadScene("Opening_Enemy");
    }
}
