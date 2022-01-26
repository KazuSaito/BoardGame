using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class OPExplanation : MonoBehaviour
{
    [SerializeField]
    private GameObject EnterGamePanel;

    [SerializeField]
    private GameObject RulePanel;

    [SerializeField]
    private GameObject StartPanel;

    // Start is called before the first frame update
    void Start()
    {
        EnterGamePanel.SetActive(true);
        RulePanel.SetActive(false);
        StartPanel.SetActive(false);
    }

    public void OpenRulePanel()
    {
        RulePanel.SetActive(true);
        EnterGamePanel.SetActive(false);
    }

    public void OpenStartPanel()
    {
        StartPanel.SetActive(true);
        RulePanel.SetActive(false);
    }

    public void StartGame()
    {
        SceneManager.LoadScene("vsEnemy");
    }
}
