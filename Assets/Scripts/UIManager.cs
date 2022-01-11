using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class UIManager : MonoBehaviour
{
    [SerializeField]
    private GameObject actionButtons;

    [SerializeField]
    private GameObject movementButtons;

    [SerializeField]
    private GameObject attackButtons;

    [SerializeField]
    private GameObject player;

    private PlayerMove playerMove;

    // Start is called before the first frame update
    void Start()
    {
        actionButtons.SetActive(true);
        movementButtons.SetActive(false);
        playerMove = player.GetComponent<PlayerMove>();

    }

    public void changeButtons (string clickedButtonName)
    {
        if (clickedButtonName.Contains("Move"))
        {
            StartCoroutine("visibleActionButtons", 1);
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
                    StartCoroutine("visibleActionButtons", 1);
                    break;

                case "GunButton":
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
}
