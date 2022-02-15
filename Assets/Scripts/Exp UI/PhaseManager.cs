using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class PhaseManager : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI phaseText;
    private int phaseCount;

    // Start is called before the first frame update
    void Start()
    {
        phaseCount = 10;
        phaseText.text = "残り" + phaseCount + "ターン";
    }

    public void PhaseCount()
    {
        StartCoroutine("PhaseShowDelay");
    }

    IEnumerator PhaseShowDelay()
    {
        yield return new WaitForSeconds(5f);
        phaseCount-=1;
        if (phaseCount > 0)
        {
            phaseText.text = "残り" + phaseCount + "ターン";
        }
        else
        {
            yield return new WaitForSeconds(3f);
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().Lose();
            StartCoroutine("LoadEndingScene");
        }
        
        
    }

    private IEnumerator LoadEndingScene()
    {
        yield return new WaitForSeconds(4f);
        SceneManager.LoadScene("Ending");
    }




}
