using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class PlayerMove : MonoBehaviour
{
    private float positionY = 1.0f;

    private float posChange = 0.5f;

    [SerializeField]
    private GameObject enemy;
    private EnemyMove enemyMove;

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
        // ����͑I�񂾍s���ɂ���ď��Ԃ��R���g���[���A�ړ����ɏ������A���̌�U��������
        // �Q�[�����Ƃ��Č��ݎ菇�̂ق����ʔ������ȏꍇ�ɂ͕ύX���� => �v���C���[�̃A�N�V�������coroutine���� 
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
        }

    }
}
