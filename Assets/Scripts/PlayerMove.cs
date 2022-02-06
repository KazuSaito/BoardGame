using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class PlayerMove : MonoBehaviour
{
    public GameObject kunaiPrefab;
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

    [SerializeField]
    private GameObject kunaiInHand;

    [SerializeField]
    private AudioSource audioSourceSlash;
    [SerializeField]
    private AudioClip audioPlayerSlash;
    [SerializeField]
    private AudioSource audioSourceMove;
    [SerializeField]
    private AudioClip audioPlayerMove;

    private int isMaster;

    // Start is called before the first frame update
    void Start()
    {
        // enemy��instantiate���ꂽ��Ɍ�������K�v������̂ŗv�ύX
        // enemyMove = enemy.GetComponent<EnemyMove>();
    }

    public void PlayerMovement (string movementName)
    {
        // ����͑I�񂾍s���ɂ���ď��Ԃ��R���g���[���A�ړ����ɏ������A���̌�U��������
        // �Q�[�����Ƃ��Č��ݎ菇�̂ق����ʔ������ȏꍇ�ɂ͕ύX���� => �v���C���[�̃A�N�V�������coroutine���� 
        // enemyMove.EnemyAction();

        switch (movementName)
        {
            case "TopMoveButton":
                if (this.transform.position.z > -1.5f)
                {
                    playerAnim.SetTrigger("ForwardTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
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
                    audioSourceMove.PlayOneShot(audioPlayerMove);
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
                    audioSourceMove.PlayOneShot(audioPlayerMove);
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
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    Tween tween = transform.DOMove(new Vector3(-0.5f, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                    // this.transform.position = new Vector3(this.transform.position.x - posChange, positionY, this.transform.position.z);
                }
                break;

            case "SwordButton":
                Invoke("SwordAction", 2f);
                // �v���C���[���m�̋���(x,z distance)�̍����g���Ĕ��肷��̂��������� �� �N�i�C��collider�Ŏb��I�ɔ���ł��Ă�����
                float xDist = Mathf.Abs(transform.position.x - enemy.transform.position.x);
                float zDist = Mathf.Abs(transform.position.z - enemy.transform.position.z);
                Debug.Log("x distance is " + xDist + ", z distance is " + zDist);
                break;

            case "GunButton":
                kunaiInHand.SetActive(false);
                // �ȉ��ł̓A�j���[�V�����ɍ��킹�ăN�i�C�𓊂�����悤�ɂ��邽�߁ACoroutine������
                playerAnim.SetTrigger("ThrowTrigger");
                StartCoroutine("WaitKunaiThrowAnim");
                break;
        }

    }

    IEnumerator DeleteKunai(GameObject kunai)
    {
        yield return new WaitForSeconds(7f);
        Debug.Log(kunai);
        Destroy(kunai);
        kunaiInHand.SetActive(true);
    }

    IEnumerator WaitKunaiThrowAnim()
    {
        yield return new WaitForSeconds(1.5f);
        var kunai = Instantiate(kunaiPrefab, rightHandIndex.transform.position, new Quaternion(0, 180, 0, 0));
        kunai.GetComponent<Rigidbody>().AddForce(new Vector3(-0.7f, 0, kunaiSpeed));
        StartCoroutine("DeleteKunai", kunai);
    }

    private void SwordAction()
    {
        playerAnim.SetTrigger("SwordTrigger");
        Invoke("SwordSound", 0.5f);
    }

    private void SwordSound()
    {
        audioSourceSlash.PlayOneShot(audioPlayerSlash);
    }

    public void IsMaster(bool playerOrder)
    {
        if (!playerOrder)
            isMaster = -1;
        else
            isMaster = 1;
    }
}
