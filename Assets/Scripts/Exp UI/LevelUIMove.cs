using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;
using UnityEngine.SceneManagement;

public class LevelUIMove : MonoBehaviour
{
    public static int level = 1;
    [SerializeField] private TextMeshProUGUI txt;
    [SerializeField] private GameObject bgImage;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = new Vector3(0.6f, 3.5f, 1);
        bgImage.SetActive(true);
        txt.gameObject.SetActive(true);
        txt.SetText("Stage: {0}", level);
        StartCoroutine("LevelDisplay");
    }

    IEnumerator LevelDisplay()
    {
        yield return new WaitForSeconds(0.5f);
        Sequence seq = DOTween.Sequence();
        seq.Append(transform.DOMove(new Vector3(0.6f, 1.7f, 1), 4f));
        seq.Join(transform.DORotate(new Vector3(0, 360, 0), 6f, RotateMode.LocalAxisAdd).SetRelative());
        seq.Append(transform.DOMove(new Vector3(0.6f, 4f, 1), 8f));
        StartCoroutine("HideText");
    }

    IEnumerator HideText()
    {
        yield return new WaitForSeconds(20f);
        bgImage.SetActive(false);
        txt.gameObject.SetActive(false);
    }

    public void LevelUp()
    {
        StartCoroutine("NextLevelOrEnding");
    }
    private IEnumerator NextLevelOrEnding()
    {
        yield return new WaitForSeconds(4f);
        if (level <= 2)
        {
            level++;
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
        else if (level >= 3)
        {
            SceneManager.LoadScene("Ending");
        }
        
    }


}
