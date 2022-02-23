using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndingManager : MonoBehaviour
{
    private LevelUIMove levelManager;

    private void Start()
    {
        levelManager = GameObject.FindWithTag("LevelMg").GetComponent<LevelUIMove>();
    }

    public void RestartButtonClicked ()
    {
        levelManager.Restart();
        SceneManager.LoadScene("Opening_Enemy");
    }

    public void ContinueButtonClicked()
    {    
        SceneManager.LoadScene("vsEnemy");
    }

    public void FinishButtonClicked ()
    {
        Invoke("FinishGame", 1.5f);
    }

    private void FinishGame()
    {
        UnityEngine.Application.Quit();
    }
}
