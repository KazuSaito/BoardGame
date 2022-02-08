using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class EnemyBattlePlayerMove : MonoBehaviour
{
    public GameObject kunaiPrefab;
    [SerializeField]
    private float kunaiSpeed = 60;

    [SerializeField]
    private GameObject enemy;
    private EnemyMove enemyMove;

    [Header ("AnimSettings")]
    [SerializeField]
    private GameObject rightHandIndex;

    [SerializeField]
    private Animator playerAnim;

    [SerializeField]
    private GameObject playerModel;

    [SerializeField]
    private GameObject kunaiInHand;

    [Header ("AudioSettings")]
    [SerializeField]
    private AudioSource audioSourceSlash;
    [SerializeField]
    private AudioClip audioPlayerSlash;
    [SerializeField]
    private AudioSource audioSourceMove;
    [SerializeField]
    private AudioClip audioPlayerMove;

    [Header ("ChangeViewpoint")]
    [SerializeField]
    private GameObject playerCamera;

    [SerializeField]
    private Renderer playerModelVisibility;

    // ��ςƋq�ς��m�F����ϐ�
    private bool subjective;

    // Start is called before the first frame update
    void Start()
    {
        this.transform.position = new Vector3(0, 0, 0);
        enemyMove = enemy.GetComponent<EnemyMove>();
        playerCamera.transform.position = new Vector3(0, 1.8f, -0.45f);
        playerCamera.transform.rotation = new Quaternion(0, 0, 0, 0);
        subjective = false;
        // �q�v�f�ɂ���OVRPlayer��OVRPlayerController�R���|�[�l���g���A�N�e�B�u�ɂ���
        GetComponentInChildren<OVRPlayerController>().enabled = false;
    }

    public void PlayerMovement (string movementName)
    {
        enemyMove.EnemyAction();

        switch (movementName)
        {
            case "TopMoveButton":
                if (this.transform.position.z < 6.0f)
                {
                    playerAnim.SetTrigger("ForwardTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    // OVR player Controller�Ƃ̑����ɂ��l�X�ȕs����������Ă���
                    Tween tween = transform.DOMove(new Vector3(0, 0, 2.0f), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, 2), 3f).SetRelative();
                }
                break;

            case "DownMoveButton":
                if (this.transform.position.z > 1.0f)
                {
                    playerAnim.SetTrigger("BackTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    Tween tween = transform.DOMove(new Vector3(0, 0, -2f), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, -2), 3f).SetRelative();
                }
                break;

            case "LeftMoveButton":
                if (this.transform.position.x > 1.0f)
                {
                    playerAnim.SetTrigger("LeftTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    Tween tween = transform.DOMove(new Vector3(-2f, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
                }
                break;

            case "RightMoveButton":
                if (this.transform.position.x < 6.0f)
                {
                    playerAnim.SetTrigger("RightTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    Tween tween = transform.DOMove(new Vector3(2f, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                }
                break;

            case "SwordButton":
                StartCoroutine("SwordAction");
                // �v���C���[���m�̋���(x,z distance)�̍����g���Ĕ��肷��̂��������� �� �N�i�C��collider�Ŏb��I�ɔ���ł��Ă�����
                // particle����effect�ōU���͈͂����o�I�ɂ��킩��₷������
                
                break;

            case "GunButton":
                kunaiInHand.SetActive(false);
                // �ȉ��ł̓A�j���[�V�����ɍ��킹�ăN�i�C�𓊂�����悤�ɂ��邽�߁ACoroutine������
                playerAnim.SetTrigger("ThrowTrigger");
                StartCoroutine("WaitKunaiThrowAnim");
                break;
        }

    }

    #region Attack Action Coroutine
    IEnumerator DeleteKunai(GameObject kunai)
    {
        yield return new WaitForSeconds(7f);
        Debug.Log(kunai);
        Destroy(kunai);
        kunaiInHand.SetActive(true);
    }

    IEnumerator WaitKunaiThrowAnim ()
    {
        yield return new WaitForSeconds(1.5f);
        var kunai = Instantiate(kunaiPrefab, rightHandIndex.transform.position, new Quaternion(0, 180, 0, 0));
        kunai.GetComponent<Rigidbody>().AddForce(new Vector3(-0.7f, 0, kunaiSpeed));
        StartCoroutine("DeleteKunai", kunai);
    }

    IEnumerator SwordAction ()
    {
        yield return new WaitForSeconds(2f);
        playerAnim.SetTrigger("SwordTrigger");
        Invoke("SwordSound", 0.5f);
        float xDist = Mathf.Abs(transform.position.x * 4 + enemy.transform.position.x);
        float zDist = Mathf.Abs(transform.position.z * 4 + enemy.transform.position.z);
        Debug.Log(transform.position.z);
        Debug.Log(enemy.transform.position.z);
        Debug.Log("x distance is " + xDist + ", z distance is " + zDist);
        if (xDist < 5.0f && zDist < 3.0f)
        {
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().Win();
            StartCoroutine("LoadEndingScene");
        }
    }

    private void SwordSound()
    {
        audioSourceSlash.PlayOneShot(audioPlayerSlash);
    }

    private IEnumerator LoadEndingScene()
    {
        yield return new WaitForSeconds(4f);
        SceneManager.LoadScene("Ending");
    }

#endregion

    public void ChangeViewpoint()
    {
        if (!subjective)
        {
            playerCamera.transform.position = new Vector3(playerCamera.transform.position.x, 1.8f, 0);
            playerModelVisibility.enabled = false;
            kunaiInHand.SetActive(false);
            subjective = true;
        }
        else if (subjective)
        {
            playerCamera.transform.position = new Vector3(playerCamera.transform.position.x, 1.8f, -0.45f);
            playerModelVisibility.enabled = true;
            kunaiInHand.SetActive(true);
            subjective = false;
        }
        
    }
}
