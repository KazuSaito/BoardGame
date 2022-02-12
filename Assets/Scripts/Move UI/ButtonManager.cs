using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ButtonManager : MonoBehaviour
{
    [Header ("Button Panel")]
    [SerializeField]
    private GameObject actionButtons;

    [SerializeField]
    private GameObject movementButtons;

    [SerializeField]
    private GameObject[] transformMoveButtons;

    [SerializeField]
    private GameObject attackButtons;

    [Header ("Kunai")]
    [SerializeField]
    private GameObject kunaiButton;
    public TextMeshProUGUI kunaiText;

    [SerializeField]
    private GameObject player;

    [SerializeField]
    private GameObject enemy;

    private EnemyBattlePlayerMove playerMove;

    

    private int kunaiRemain = 0;

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < 4; i++)
            transformMoveButtons[i] = movementButtons.transform.GetChild(i).gameObject;
        actionButtons.SetActive(true);
        movementButtons.SetActive(false);
        attackButtons.SetActive(false);
        kunaiButton.SetActive(true);
        playerMove = player.GetComponent<EnemyBattlePlayerMove>();
        kunaiText.text = "クナイ投げ 残:2";
        
    }

    public void changeButtons (string clickedButtonName)
    {
        if (clickedButtonName.Contains("Move"))
        {
            StartCoroutine("visibleActionButtons", 3);
            playerMove.PlayerMovement(clickedButtonName);
        }

        else
        {
            switch (clickedButtonName)
            {
                case "ChangePosButton":
                    StartCoroutine("visibleMoveButtons", 1);
                    break;

                case "AttackButton":
                    StartCoroutine("visibleAttackButtons", 1);
                    break;

                case "SwordButton":
                    StartCoroutine("visibleActionButtons", 3);
                    playerMove.PlayerMovement(clickedButtonName);
                    break;

                case "GunButton":
                    StartCoroutine("visibleActionButtons", 3);
                    playerMove.PlayerMovement(clickedButtonName);
                    kunaiInvisible();
                    break;

                case "BackButton":
                    StartCoroutine("visibleActionButtons", 1);
                    break;

                default:
                    break;
            }
            }
    }


    IEnumerator visibleMoveButtons (int num)
    {
        actionButtons.SetActive(false);
        yield return new WaitForSeconds(num);
        for (int i = 0; i < 4; i++)
            transformMoveButtons[i].gameObject.SetActive(true);  // 全移動ボタンを一度アクティブに
        if (player.transform.position.z < 0.2f)  // 下移動ボタンの設定
        {
            transformMoveButtons[1].gameObject.SetActive(false);
        }
        if (player.transform.position.z > 1.0f)  // 上移動ボタンの設定
        {
            transformMoveButtons[0].gameObject.SetActive(false);
        }
        if (player.transform.position.x < 0.2f)  // 左移動ボタンの設定
        {
            transformMoveButtons[2].gameObject.SetActive(false);
        }
        if (player.transform.position.x > 1.0f)  // 右移動ボタンの設定
        {
            transformMoveButtons[3].gameObject.SetActive(false);
        }
        movementButtons.SetActive(true);
        
    }

    IEnumerator visibleAttackButtons (int num)
    {
        actionButtons.SetActive(false);
        yield return new WaitForSeconds(num);
        attackButtons.SetActive(true);
    }

    IEnumerator visibleActionButtons (int num)
    {
        attackButtons.SetActive(false);
        movementButtons.SetActive(false);
        yield return new WaitForSeconds(num);
        actionButtons.SetActive(true);
        
    }

    public void kunaiInvisible()
    {
        kunaiRemain = playerMove.KunaiRemaining();
        kunaiText.text = "クナイ投げ 残:" + kunaiRemain;
        if (kunaiRemain <= 0)
        {
            kunaiButton.SetActive(false);
        }
    }

}
