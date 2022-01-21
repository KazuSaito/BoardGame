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

    // �܂����ݒ�̂��߃R�����g�A�E�g
    // [SerializeField]
    // private TextMeshProUGUI playerNameText;

    // Start is called before the first frame update
    void Start()
    {
        if (photonView.IsMine)
        {
            // ���L���l��Camera�����̐���E�񐧌�����߂����A�ǂ�Component�����������ؒ�
            playerOVR.GetComponent<OVRPlayerController>().enabled = true;

            // Player��UIManager��Component�ł���UIManager�X�N���v�g��L�����A����\��
            uiManager.GetComponent<UIManager>().enabled = true;
            // Collide��ǉ����ē����蔻�菈���ɂ���ꍇ
            // GetComponent<Collide>().enabled = true;
        }
        else
        {
            playerOVR.GetComponent<OVRPlayerController>().enabled = false;
            uiManager.GetComponent<UIManager>().enabled = false;
            // Collide��ǉ����ē����蔻�菈���ɂ���ꍇ
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
