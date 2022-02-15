using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class EnemyBattlePlayerMove : MonoBehaviour
{
    [Header ("Kunai Settings")]
    public GameObject kunaiPrefab;
    [SerializeField]
    private float kunaiSpeed = 60;
    [SerializeField]
    private int kunaiRemain;

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

    private float transformMove = 0.4f;

    [SerializeField] float transformY = 0.2f;

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

    [Header("Others")]
    [SerializeField] private PhaseManager phaseManager;

    // 主観と客観を確認する変数
    private bool subjective;

    // Start is called before the first frame update
    void Start()
    {
        this.transform.position = new Vector3(0, transformY, 0);
        enemyMove = enemy.GetComponent<EnemyMove>();
        // playerCamera.transform.position = new Vector3(0, 1f, -0.3f);
        // playerCamera.transform.rotation = new Quaternion(0, 0, 0, 0);
        subjective = false;
        // 子要素にあるOVRPlayerのOVRPlayerControllerコンポーネントを非アクティブにする
        // GetComponentInChildren<OVRPlayerController>().enabled = false;
        kunaiRemain = 2;
        phaseManager = GameObject.FindWithTag("PhaseManager").GetComponent<PhaseManager>();
        
    }

    public void PlayerMovement (string movementName)
    {
        enemyMove.EnemyAction();
        phaseManager.PhaseCount();        

        switch (movementName)
        {
            case "TopMoveButton":
                if (this.transform.position.z < 1.2f)
                {
                    playerAnim.SetTrigger("ForwardTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    // OVR player Controllerとの相性により様々な不具合が発生している
                    Tween tween = transform.DOMove(new Vector3(0, 0, transformMove), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, transformMove), 3f).SetRelative();
                    StartCoroutine("CheckWinCondition");
                }
                break;

            case "DownMoveButton":
                if (this.transform.position.z > 0.2f)
                {
                    playerAnim.SetTrigger("BackTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    Tween tween = transform.DOMove(new Vector3(0, 0, -transformMove), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(0, 0, -transformMove), 3f).SetRelative();
                }
                break;

            case "LeftMoveButton":
                if (this.transform.position.x > 0.2f)
                {
                    playerAnim.SetTrigger("LeftTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    Tween tween = transform.DOMove(new Vector3(-transformMove, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(-transformMove, 0, 0), 3f).SetRelative();
                }
                break;

            case "RightMoveButton":
                if (this.transform.position.x < 1.2f)
                {
                    playerAnim.SetTrigger("RightTrigger");
                    audioSourceMove.PlayOneShot(audioPlayerMove);
                    Tween tween = transform.DOMove(new Vector3(transformMove, 0, 0), 3f).SetRelative();
                    tween.SetEase(Ease.Linear);
                    playerModel.transform.DOMove(new Vector3(transformMove, 0, 0), 3f).SetRelative();
                    StartCoroutine("CheckWinCondition");
                }
                break;

            case "SwordButton":
                StartCoroutine("SwordAction");
                // プレイヤー同士の距離(x,z distance)の差を使って判定するのがいいかも → クナイのcolliderで暫定的に判定できていそう
                // particle等のeffectで攻撃範囲を視覚的によりわかりやすくする
                
                break;

            case "GunButton":
                if (kunaiRemain > 0)
                {
                    kunaiInHand.SetActive(false);
                    // 以下ではアニメーションに合わせてクナイを投げられるようにするため、Coroutineを二つ実装
                    playerAnim.SetTrigger("ThrowTrigger");
                    StartCoroutine("WaitKunaiThrowAnim");
                    kunaiRemain -= 1;
                    Debug.Log(kunaiRemain);
                }
                
                break;
        }

    }

    #region Attack Action Coroutine
    IEnumerator DeleteKunai(GameObject kunai)
    {
        yield return new WaitForSeconds(4f);
        Debug.Log(kunai);
        Destroy(kunai);
        kunaiInHand.SetActive(true);
    }

    IEnumerator WaitKunaiThrowAnim ()
    {
        yield return new WaitForSeconds(1f);
        var kunai = Instantiate(kunaiPrefab, rightHandIndex.transform.position, new Quaternion(0, 180, 0, 0));
        kunai.GetComponent<Rigidbody>().AddForce(new Vector3(-0.15f, 0, kunaiSpeed));
        StartCoroutine("DeleteKunai", kunai);
    }

    IEnumerator SwordAction ()
    {
        yield return new WaitForSeconds(2f);
        playerAnim.SetTrigger("SwordTrigger");
        yield return new WaitForSeconds(1.1f);
        SwordParticle();
        Invoke("SwordSound", 0.5f);
        float xDist = Mathf.Abs(transform.position.x  - enemy.transform.position.x);
        float zDist = Mathf.Abs(transform.position.z  - enemy.transform.position.z);
        Debug.Log(transform.position.z);
        Debug.Log(enemy.transform.position.z);
        Debug.Log("x distance is " + xDist + ", z distance is " + zDist);
        if (xDist < 0.8f && zDist < 0.8f)
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

    private IEnumerator CheckWinCondition()
    {
        yield return new WaitForSeconds(3f);
        if (transform.position.x > 1.1f && transform.position.z > 1.1f)
        {
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().Win();
            StartCoroutine("LoadEndingScene");
        }
    }

    #endregion

    #region Public Function

    public int KunaiRemaining()
    {
        Debug.Log(kunaiRemain);
        return kunaiRemain;
    }

    private void SwordParticle()
    {
        kunaiInHand.GetComponent<slashParticle>().ParticleOn();
    }

    #endregion
}
