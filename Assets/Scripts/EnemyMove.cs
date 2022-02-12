using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.SceneManagement;

public class EnemyMove : MonoBehaviour
{
    [Header ("Kunai Settings")]
    public GameObject enemyKunaiPrefab;
    [SerializeField] private float enemyKunaiSpeed = 60;
    [SerializeField] private GameObject enemyKunaiInHand;
    [SerializeField] private GameObject enemyRightHandIndex;
    private int enemyKunaiLeft;

    [SerializeField] private GameObject player;

    [SerializeField] private Animator anim;

    [Header ("Audio Settings")]
    [SerializeField] private AudioClip audioEnemySlash;
    [SerializeField] private AudioSource audioSourceEnemySlash;
    [SerializeField] private AudioClip audioEnemyMove;
    [SerializeField] private AudioSource audioSourceEnemyMove;

    private int enemyLevel;

    private float xDist;
    private float zDist;
    private float distance;

    private void Start()
    {
        enemyLevel = LevelUIMove.level;
        enemyKunaiLeft = 2;
    }

    public void EnemyAction()
    {
        switch (enemyLevel)
        {
            case 1:
                LevelOne();
                break;

            case 2:
                LevelTwo();
                break;

            case 3:
                break;
        }

        
    }

    #region Coroutine Methods
    IEnumerator DeleteKunai(GameObject kunai)
    {
        yield return new WaitForSeconds(7f);
        Debug.Log(kunai);
        Destroy(kunai);
        enemyKunaiInHand.SetActive(true);
    }

    IEnumerator WaitKunaiThrowAnim()
    {
        yield return new WaitForSeconds(1.5f);
        var kunai = Instantiate(enemyKunaiPrefab, enemyRightHandIndex.transform.position, new Quaternion(0, 0, 0, 0));
        kunai.GetComponent<Rigidbody>().AddForce(new Vector3(-0.7f, 0, -enemyKunaiSpeed));
        StartCoroutine("DeleteKunai", kunai);
    }

    IEnumerator EnemySwordAttack()
    {
        yield return new WaitForSeconds(3f);
        anim.SetTrigger("SwordTrigger");
        EnemySwordParticle();
        Invoke("EnemySwordSound", 0.5f);
        Debug.Log("x distance is " + xDist + ", z distance is " + zDist);
        if (xDist < 5.0f && zDist < 3.0f)
        {
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().Lose();
            StartCoroutine("LoadEndingScene");
        }
    }

    private void EnemySwordSound()
    {
        audioSourceEnemySlash.PlayOneShot(audioEnemySlash);
    }

    private IEnumerator LoadEndingScene()
    {
        yield return new WaitForSeconds(4f);
        SceneManager.LoadScene("Ending");
    }

    #endregion

    private void EnemySwordParticle()
    {
        enemyKunaiInHand.GetComponent<slashParticleEnemy>().EnemyKunaiParticleOn();
    }

    #region LevelSettings

    private void LevelOne()
    {
        // distance = Vector3.Distance(player.transform.position, transform.position);
        xDist = Mathf.Abs(transform.position.x + player.transform.position.x);
        zDist = Mathf.Abs(transform.position.z + player.transform.position.z);
        int xOrz = Random.Range(0, 9);

        if (xDist > 4.0f)
        {
            if (this.transform.position.x < 2.0f)
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("RightTrigger");
                transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
            }
            else
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("LeftTrigger");
                transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
            }
        }
        else if (zDist > 3.0f && enemyKunaiLeft >=1)
        {
            enemyKunaiInHand.SetActive(false);
            // 以下ではアニメーションに合わせてクナイを投げられるようにするため、Coroutineを二つ実装
            anim.SetTrigger("ThrowTrigger");
            StartCoroutine("WaitKunaiThrowAnim");
            enemyKunaiLeft -= 1;
        }
        else
        {
            StartCoroutine("EnemySwordAttack");
        }
    }

    private void LevelTwo()
    {
        // distance = Vector3.Distance(player.transform.position, transform.position);
        xDist = Mathf.Abs(transform.position.x + player.transform.position.x);
        zDist = Mathf.Abs(transform.position.z + player.transform.position.z);
        int xOrz = Random.Range(0, 9);

        if (xDist > 0.5f)
        {
            if (zDist > 3.0f)
            {
                if (xOrz > 2)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("ForwardTrigger");
                    transform.DOMove(new Vector3(0, 0, -2), 3f).SetRelative();
                }
                else
                {
                    if (this.transform.position.x < 2.0f)
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("RightTrigger");
                        transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                    }
                    else
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("LeftTrigger");
                        transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
                    }
                }
            }

            // 上記と順序が逆のほうが自然だが、あえてこれで
            else if (xDist > 3.0f)
            {
                if (this.transform.position.x < 2.0f)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("LeftTrigger");
                    transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
                }
            }

            else
            {
                if (xOrz == 0)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("BackTrigger");
                    transform.DOMove(new Vector3(0, 0, 2), 3f).SetRelative();
                }
                else
                {
                    StartCoroutine("EnemySwordAttack");
                }
            }
        }
        else 
        {
            if (enemyKunaiLeft < 1)
                return;

            enemyKunaiInHand.SetActive(false);
            // 以下ではアニメーションに合わせてクナイを投げられるようにするため、Coroutineを二つ実装
            anim.SetTrigger("ThrowTrigger");
            StartCoroutine("WaitKunaiThrowAnim");
        }
    }

    #endregion
}




