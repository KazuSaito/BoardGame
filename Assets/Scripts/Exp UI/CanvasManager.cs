using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasManager : MonoBehaviour
{
    public GameObject winPanel;
    public GameObject losePanel;

    // Start is called before the first frame update
    void Start()
    {
        Invoke("HidePanel", 0.05f);
        
    }

    public void Win()
    {
        StartCoroutine("WinLosePanel", winPanel);
    }

    public void Lose()
    {
        StartCoroutine("WinLosePanel", losePanel);
    }

    private void HidePanel()
    {
        winPanel.SetActive(false);
        losePanel.SetActive(false);
    }

    IEnumerator WinLosePanel(GameObject panel)
    {
        yield return new WaitForSeconds(1f);
        panel.SetActive(true);
    }

}
