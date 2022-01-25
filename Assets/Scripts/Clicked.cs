using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Clicked : MonoBehaviour
{
    [SerializeField]
    private GameObject buttonManager;

    [SerializeField]
    private GameObject thisButton;

    [SerializeField]
    private GameObject movementButtons;

    // 参照先はprivateでも良さそう (初期処理では問題なし)
    [SerializeField]
    private ButtonManager changeButtonTypes;

    // Start is called before the first frame update
    void Start()
    {
        // Button Managerのスクリプト取得
        changeButtonTypes = buttonManager.GetComponent<ButtonManager>();
    }

    public void onClick()
    {
        // 自身として押されたボタンの名前を引数として渡す、その名前に応じて処理実行
        changeButtonTypes.changeButtons(thisButton.name);
    }
}
