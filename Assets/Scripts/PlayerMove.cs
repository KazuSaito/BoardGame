using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class PlayerMove : MonoBehaviour
{
    public GameObject kunai;

    private float positionY = 1.0f;

    private float posChange = 0.5f;

    private int isMaster = 1;

    [SerializeField]
    private GameObject enemy;
    private EnemyMove enemyMove;

    [SerializeField]
    private Animator playerAnim;

    [SerializeField]
    private GameObject playerModel;

    [SerializeField]
    private GameObject rightHandIndex;

    // Start is called before the first frame update
    void Start()
    {
        // Photon利用の場合はinstantiate側で初期位置設定のため以下の一文は不要
        // this.transform.position = new Vector3(0, 0, 0);
        // enemyはinstantiateされた後に検索する必要があるので要変更
        // enemyMove = enemy.GetComponent<EnemyMove>();
    }

    public void PlayerMovement (string movementName)
    {
        // 現状は選んだ行動によって順番をコントロール、移動を先に処理し、その後攻撃を処理
        // ゲーム制として交互手順のほうが面白そうな場合には変更する => プレイヤーのアクション後にcoroutine処理 
        // enemyMove.EnemyAction();

        switch (movementName)
        {
            case "TopMoveButton":
                if (this.transform.position.z > -1.5f)
                {
                    playerAnim.SetTrigger("ForwardTrigger");
                    Tween tween = transform.DOMove(new Vector3(0, 0, -0.5f), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, 2), 3f).SetRelative();

                    // this.transform.position = new Vector3(this.transform.position.x, positionY, this.transform.position.z - posChange);
                }
                break;

            case "DownMoveButton":
                if (this.transform.position.z < 0)
                {
                    playerAnim.SetTrigger("BackTrigger");
                    Tween tween = transform.DOMove(new Vector3(0, 0, 0.5f), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, -2), 3f).SetRelative();
                    // this.transform.position = new Vector3(this.transform.position.x, positionY, this.transform.position.z + posChange);
                }
                break;

            case "LeftMoveButton":
                if (this.transform.position.x < 0)
                {
                    playerAnim.SetTrigger("LeftTrigger");
                    Tween tween = transform.DOMove(new Vector3(0.5f, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
                    // this.transform.position = new Vector3(this.transform.position.x + posChange, positionY, this.transform.position.z);
                }
                break;

            case "RightMoveButton":
                if (this.transform.position.x > -1.5f)
                {
                    playerAnim.SetTrigger("RightTrigger");
                    Tween tween = transform.DOMove(new Vector3(-0.5f, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                    // this.transform.position = new Vector3(this.transform.position.x - posChange, positionY, this.transform.position.z);
                }
                break;

            case "SwordButton":

                break;

            case "GunButton":
                var obj = Instantiate(kunai, rightHandIndex.transform.position, new Quaternion(0, 180, 0, 0));
                obj.GetComponent<Rigidbody>().AddForce(new Vector3(0, 0, 30));
                break;
        }

    }

    public void IsMaster(bool playerOrder)
    {
        if (!playerOrder)
            isMaster = -1;
        else
            isMaster = 1;
    }
}
