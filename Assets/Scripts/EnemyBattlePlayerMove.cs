using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class EnemyBattlePlayerMove : MonoBehaviour
{
    public GameObject kunai;
    [SerializeField]
    private float kunaiSpeed = 60;


    [SerializeField]
    private GameObject enemy;
    private EnemyMove enemyMove;

    [SerializeField]
    private GameObject rightHandIndex;

    [SerializeField]
    private Animator playerAnim;

    [SerializeField]
    private GameObject playerModel;

    // Start is called before the first frame update
    void Start()
    {
        this.transform.position = new Vector3(0, 0, 0);
        enemyMove = enemy.GetComponent<EnemyMove>();
    }

    public void PlayerMovement (string movementName)
    {
        enemyMove.EnemyAction();

        switch (movementName)
        {
            case "TopMoveButton":
                if (this.transform.position.z > -1.5f)
                {
                    playerAnim.SetTrigger("ForwardTrigger");
                    Tween tween = transform.DOMove(new Vector3(0, 0, -0.5f), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, 2), 3f).SetRelative();
                }
                break;

            case "DownMoveButton":
                if (this.transform.position.z < 0)
                {
                    playerAnim.SetTrigger("BackTrigger");
                    Tween tween = transform.DOMove(new Vector3(0, 0, 0.5f), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, -2), 3f).SetRelative();
                }
                break;

            case "LeftMoveButton":
                if (this.transform.position.x < 0)
                {
                    playerAnim.SetTrigger("LeftTrigger");
                    Tween tween = transform.DOMove(new Vector3(0.5f, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
                }
                break;

            case "RightMoveButton":
                if (this.transform.position.x > -1.5f)
                {
                    playerAnim.SetTrigger("RightTrigger");
                    Tween tween = transform.DOMove(new Vector3(-0.5f, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                }
                break;

            case "SwordButton":

                break;

            case "GunButton":
                var obj = Instantiate(kunai, rightHandIndex.transform.position, new Quaternion(0, 180, 0, 0));
                obj.GetComponent<Rigidbody>().AddForce(new Vector3(0, 0, kunaiSpeed));
                break;
        }

    }
}
