using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CanvasManager : MonoBehaviour
{
    public GameObject winPanel;
    public GameObject losePanel;
    public GameObject panelImage;

    [SerializeField] private GameObject phaseManger;

    // 0: default, 1: win, 2: lose
    private int NumberWinLose;

    // Start is called before the first frame update
    void Start()
    {
        Invoke("HidePanel", 0.05f);
        NumberWinLose = 0;
        
    }

    public void Win()
    {
        if (NumberWinLose == 0)
        {
            StartCoroutine("SameTimingCheckWin");
        }
        NumberWinLose = 1;

    }

    public void Lose()
    {
        if (NumberWinLose == 0)
        {
            StartCoroutine("SameTimingCheckLose");
        }
        NumberWinLose = 2;
    }

    private void HidePanel()
    {
        panelImage.SetActive(false);
        winPanel.SetActive(false);
        losePanel.SetActive(false);
    }

    IEnumerator WinLosePanel(GameObject panel)
    {
        yield return new WaitForSeconds(1f);
        panelImage.SetActive(true);
        panel.SetActive(true);
    }
    private IEnumerator LoadEndingScene()
    {
        yield return new WaitForSeconds(4f);
        SceneManager.LoadScene("Ending");
    }

    #region Check SameAttackTiming
    /// <summary>
    /// the below two methods can check whether both players attack in same time or not 
    /// </summary>
    /// <returns></returns>
    private IEnumerator SameTimingCheckWin()
    {
        yield return new WaitForSeconds(1f);
        if (NumberWinLose == 1)
        {
            GameObject levelManager = GameObject.FindWithTag("LevelMg");
            levelManager.GetComponent<LevelUIMove>().LevelUp();
            StartCoroutine("WinLosePanel", winPanel);
        }
        else
        {
            phaseManger.GetComponent<PhaseManager>().CollideTrigger();
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

    private IEnumerator SameTimingCheckLose()
    {
        yield return new WaitForSeconds(1f);
        if (NumberWinLose == 2)
        {
            StartCoroutine("WinLosePanel", losePanel);
            StartCoroutine("LoadEndingScene");
        }
        else
        {
            phaseManger.GetComponent<PhaseManager>().CollideTrigger();
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }

    #endregion

}
