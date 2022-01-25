using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using TMPro;

public class PlayerSetup : MonoBehaviourPunCallbacks
{
    [SerializeField]
    private GameObject playerOVR;

    public GameObject uiManager;

    // まだ未設定のためコメントアウト
    // [SerializeField]
    // private TextMeshProUGUI playerNameText;

    // Start is called before the first frame update
    void Start()
    {
        if (photonView.IsMine)
        {
            // 下記同様にCamera部分の制御・非制御を決めたい、どのComponentがいいか検証中
            playerOVR.GetComponent<OVRPlayerController>().enabled = true;

            // Player内UIManagerのComponentであるUIManagerスクリプトを有効化、制御可能に
            uiManager.GetComponent<UIManager>().enabled = true;
            // Collideを追加して当たり判定処理にする場合
            // GetComponent<Collide>().enabled = true;
        }
        else
        {
            playerOVR.GetComponent<OVRPlayerController>().enabled = false;
            uiManager.GetComponent<UIManager>().enabled = false;
            // Collideを追加して当たり判定処理にする場合
            // GetComponent<Collide>().enabled = false;
        }
    }

    /*
    void SetPlayerUI()
    {
        if (playerNameText != null)
        {
            playerNameText.text = photonView.Owner.NickName;
        }
    }
    */
}
