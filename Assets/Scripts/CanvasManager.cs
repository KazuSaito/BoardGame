using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasManager : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        Invoke("HidePanel", 0.05f);
        
    }

    public void WinLose()
    {
        this.transform.GetChild(0).gameObject.SetActive(true);
    }

    private void HidePanel()
    {
        this.transform.GetChild(0).gameObject.SetActive(false);
    }
}
