using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndingManager : MonoBehaviour
{
    public void ContinueButtonClicked ()
    {
        SceneManager.LoadScene("Opening_Enemy");
    }

    public void FinishButtonClicked ()
    {
        Debug.Log("Finish Game");
        Invoke("FinishGame", 1.5f);
    }

    private void FinishGame()
    {
        // Oculus Link‚Å‚Í‚Å‚«‚È‚³‚»‚¤Abuild‚µ‚ÄŠm”F—\’è
        UnityEngine.Application.Quit();
    }
}
