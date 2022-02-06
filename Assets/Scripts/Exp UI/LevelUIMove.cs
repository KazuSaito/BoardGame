using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;

public class LevelUIMove : MonoBehaviour
{
    public int level;
    [SerializeField] private TextMeshProUGUI txt;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = new Vector3(0, 3.5f, 1);
        // txt.enabled = true;
        txt.gameObject.SetActive(true);
        txt.SetText("Level: {0}", level);
        StartCoroutine("LevelDisplay");
    }

    IEnumerator LevelDisplay()
    {
        yield return new WaitForSeconds(0.5f);
        Sequence seq = DOTween.Sequence();
        seq.Append(transform.DOMove(new Vector3(0, 2.0f, 1), 5f));
        seq.Join(transform.DORotate(new Vector3(0, 360, 0), 8f, RotateMode.LocalAxisAdd).SetRelative());
        seq.Append(transform.DOMove(new Vector3(0, 4f, 1), 9f));
        StartCoroutine("HideText");
    }

    IEnumerator HideText()
    {
        yield return new WaitForSeconds(20f);
        txt.gameObject.SetActive(false);
    }


}