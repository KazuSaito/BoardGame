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
    private GameObject attackButtons;

    [Header ("Kunai")]
    [SerializeField]
    private GameObject kunaiButton;
    public TextMeshProUGUI kunaiText;

    [SerializeField]
    private GameObject player;

    private EnemyBattlePlayerMove playerMove;

    

    private int kunaiRemain = 0;

    // Start is called before the first frame update
    void Start()
    {
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

                case "ChangeViewpointButton":
                    playerMove.ChangeViewpoint();
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
