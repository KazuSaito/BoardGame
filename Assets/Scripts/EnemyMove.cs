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

    private float enemyTransformMove = 0.4f;

    [Header ("Audio Settings")]
    [SerializeField] private AudioClip audioEnemySlash;
    [SerializeField] private AudioSource audioSourceEnemySlash;
    [SerializeField] private AudioClip audioEnemyMove;
    [SerializeField] private AudioSource audioSourceEnemyMove;

    private int enemyLevel;

    private float xDist;
    private float zDist;
    private float distance;
    private int countPhase = 0;

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
                LevelThree();
                break;

            case 4:
                LevelFour();
                break;
        }

        
    }

    #region Coroutine Methods
    IEnumerator DeleteKunai(GameObject kunai)
    {
        yield return new WaitForSeconds(2f);
        Debug.Log(kunai);
        Destroy(kunai);
        enemyKunaiInHand.SetActive(true);
    }

    IEnumerator WaitKunaiThrowAnim()
    {
        yield return new WaitForSeconds(1.5f);
        var kunai = Instantiate(enemyKunaiPrefab, enemyRightHandIndex.transform.position, new Quaternion(0, 0, 0, 0));
        AudioClip audioKunaiEnemyThrow = kunai.GetComponent<AudioClip>();
        kunai.GetComponent<AudioSource>().PlayOneShot(audioKunaiEnemyThrow);
        kunai.GetComponent<Rigidbody>().AddForce(new Vector3(-0.15f, 0, -enemyKunaiSpeed));
        StartCoroutine("DeleteKunai", kunai);
    }

    IEnumerator EnemySwordAttack()
    {
        yield return new WaitForSeconds(1.5f);
        anim.SetTrigger("SwordTrigger");
        EnemySwordParticle();
        yield return new WaitForSeconds(1.1f);
        Invoke("EnemySwordSound", 0.5f);
        float xDistForSlash = Mathf.Abs(transform.position.x - player.transform.position.x);
        float zDistForSlash = transform.position.z - player.transform.position.z;
        Debug.Log("x distance is " + xDistForSlash + ", z distance is " + zDistForSlash);
        if (xDistForSlash < 0.6f && 0.1f < zDistForSlash && zDistForSlash < 0.6f)
        {
            GameObject canvas = GameObject.FindWithTag("Canvas");
            canvas.GetComponent<CanvasManager>().Lose();
            
        }
    }

    private void EnemySwordSound()
    {
        audioSourceEnemySlash.PlayOneShot(audioEnemySlash);
    }

    private void EnemySwordParticle()
    {
        enemyKunaiInHand.GetComponent<slashParticleEnemy>().EnemyKunaiParticleOn();
    }

    #endregion



    #region LevelSettings

    private void LevelOne()
    {
        // distance = Vector3.Distance(player.transform.position, transform.position);
        xDist = Mathf.Abs(transform.position.x - player.transform.position.x);
        zDist = Mathf.Abs(transform.position.z - player.transform.position.z);
        int xOrz = Random.Range(0, 9);

        if (xDist > 0.2f)
        {
            if (this.transform.position.x < 0.4f)
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("RightTrigger");
                transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
            }
            else
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("LeftTrigger");
                transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
            }
        }
        else if (zDist > 0.6f && enemyKunaiLeft >=1)
        {
            enemyKunaiInHand.SetActive(false);
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
        xDist = Mathf.Abs(transform.position.x - player.transform.position.x);
        zDist = transform.position.z - player.transform.position.z;
        int xOrz = Random.Range(0, 9);

        if (xDist > 0.1f)
        {
            if (zDist > 0.6f)
            {
                if (xOrz > 2)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("ForwardTrigger");
                    transform.DOMove(new Vector3(0, 0, -enemyTransformMove), 3f).SetRelative();
                }
                else
                {
                    if (this.transform.position.x < 0.4f)
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("RightTrigger");
                        transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                    else
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("LeftTrigger");
                        transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                }
            }

            // 上記と順序が逆のほうが自然だが、あえてこれで
            else if (xDist > 0.6f)
            {
                if (this.transform.position.x < 0.4f)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("LeftTrigger");
                    transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                }
            }

            else if (zDist < 0)
            {
                if (xOrz > 4)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("BackTrigger");
                    transform.DOMove(new Vector3(0, 0, enemyTransformMove), 3f).SetRelative();
                }
                else
                {
                    if (this.transform.position.x < 0.8f)
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("RightTrigger");
                        transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                    else
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("LeftTrigger");
                        transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                }
            }

            else
            {
                if (xOrz > 4 && transform.position.z < 1.0f)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("BackTrigger");
                    transform.DOMove(new Vector3(0, 0, enemyTransformMove), 3f).SetRelative();
                }
                else if (xOrz > 2)
                {
                    if (this.transform.position.x < 0.8f)
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("RightTrigger");
                        transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                    else
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("LeftTrigger");
                        transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
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
            {
                if (this.transform.position.x < 0.8f)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("LeftTrigger");
                    transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                }
            }

            else if (xOrz > 3)
            {
                enemyKunaiInHand.SetActive(false);
                // 以下ではアニメーションに合わせてクナイを投げられるようにするため、Coroutineを二つ実装
                anim.SetTrigger("ThrowTrigger");
                StartCoroutine("WaitKunaiThrowAnim");
            }

            else if (this.transform.position.x < 0.8f)
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("RightTrigger");
                transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
            }
            else
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("LeftTrigger");
                transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
            }


        }
    }

    private void LevelThree()
    {
        countPhase ++;
        // distance = Vector3.Distance(player.transform.position, transform.position);
        xDist = Mathf.Abs(transform.position.x - player.transform.position.x);
        zDist = transform.position.z - player.transform.position.z;
        int xOrz = Random.Range(0, 9);

        if (countPhase == 1)
        {
            audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
            anim.SetTrigger("ForwardTrigger");
            transform.DOMove(new Vector3(0, 0, -enemyTransformMove), 3f).SetRelative();
        }
        else if (countPhase == 2)
        {
            audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
            anim.SetTrigger("LeftTrigger");
            transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
        }
        else if (xDist > 0.1f)
        {
            if (zDist > 0.6f)
            {
                if (xOrz > 2)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("ForwardTrigger");
                    transform.DOMove(new Vector3(0, 0, -enemyTransformMove), 3f).SetRelative();
                }
                else
                {
                    if (this.transform.position.x < 0.4f)
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("RightTrigger");
                        transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                    else
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("LeftTrigger");
                        transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                }
            }

            // 上記と順序が逆のほうが自然だが、あえてこれで
            else if (xDist > 0.6f)
            {
                if (this.transform.position.x < 0.4f)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("LeftTrigger");
                    transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                }
            }

            else if (zDist < 0)
            {
                if (xOrz > 4)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("BackTrigger");
                    transform.DOMove(new Vector3(0, 0, enemyTransformMove), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                }
            }

            else
            {
                if (xOrz > 4)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("BackTrigger");
                    transform.DOMove(new Vector3(0, 0, enemyTransformMove), 3f).SetRelative();
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
            {
                if (this.transform.position.x < 0.8f)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("LeftTrigger");
                    transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                }
            }

            else if (xOrz > 3)
            {
                enemyKunaiInHand.SetActive(false);
                // 以下ではアニメーションに合わせてクナイを投げられるようにするため、Coroutineを二つ実装
                anim.SetTrigger("ThrowTrigger");
                StartCoroutine("WaitKunaiThrowAnim");
            }

            else if (this.transform.position.x < 0.8f)
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("RightTrigger");
                transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
            }
            else
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("LeftTrigger");
                transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
            }


        }
    }

    private void LevelFour()
    {
        countPhase++;
        // distance = Vector3.Distance(player.transform.position, transform.position);
        xDist = Mathf.Abs(transform.position.x - player.transform.position.x);
        zDist = transform.position.z - player.transform.position.z;
        int xOrz = Random.Range(0, 9);

        if (countPhase == 1)
        {
            audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
            anim.SetTrigger("ForwardTrigger");
            transform.DOMove(new Vector3(0, 0, -enemyTransformMove), 3f).SetRelative();
        }
        else if (countPhase == 2)
        {
            audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
            anim.SetTrigger("LeftTrigger");
            transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
        }
        else if (countPhase == 3)
        {
            if (xDist < 0.2f)
            {
                enemyKunaiInHand.SetActive(false);
                // 以下ではアニメーションに合わせてクナイを投げられるようにするため、Coroutineを二つ実装
                anim.SetTrigger("ThrowTrigger");
                StartCoroutine("WaitKunaiThrowAnim");
            }
            else if (xDist < 0.6f)
            {
                StartCoroutine("EnemySwordAttack");
            }
            else
            {
                audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                anim.SetTrigger("BackTrigger");
                transform.DOMove(new Vector3(0, 0, enemyTransformMove), 3f).SetRelative();
            }
        }

        else if (xDist > 0.1f)
        {
            if (zDist > 0.6f)
            {
                if (xOrz > 2)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("ForwardTrigger");
                    transform.DOMove(new Vector3(0, 0, -enemyTransformMove), 3f).SetRelative();
                }
                else
                {
                    if (this.transform.position.x < 0.4f)
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("RightTrigger");
                        transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                    else
                    {
                        audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                        anim.SetTrigger("LeftTrigger");
                        transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                    }
                }
            }

            // 上記と順序が逆のほうが自然だが、あえてこれで
            else if (xDist > 0.6f)
            {
                if (this.transform.position.x < 0.4f)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("LeftTrigger");
                    transform.DOMove(new Vector3(-enemyTransformMove, 0, 0), 3f).SetRelative();
                }
            }

            else if (zDist < 0)
            {
                if (xOrz > 4)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("BackTrigger");
                    transform.DOMove(new Vector3(0, 0, enemyTransformMove), 3f).SetRelative();
                }
                else
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("RightTrigger");
                    transform.DOMove(new Vector3(enemyTransformMove, 0, 0), 3f).SetRelative();
                }
            }

            else
            {
                if (xOrz > 4)
                {
                    audioSourceEnemyMove.PlayOneShot(audioEnemyMove);
                    anim.SetTrigger("BackTrigger");
                    transform.DOMove(new Vector3(0, 0, enemyTransformMove), 3f).SetRelative();
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




