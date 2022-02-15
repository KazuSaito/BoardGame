using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PhaseManager : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI phaseText;
    private int phaseCount;

    // Start is called before the first frame update
    void Start()
    {
        phaseCount = 1;
        phaseText.text = phaseCount + "ターン目";
    }

    public void PhaseCount()
    {
        StartCoroutine("PhaseShowDelay");
    }

    IEnumerator PhaseShowDelay()
    {
        yield return new WaitForSeconds(5f);
        phaseCount++;
        phaseText.text = phaseCount + "ターン目";
    }
}
