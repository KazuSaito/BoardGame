using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class EnemyMove : MonoBehaviour
{
    [SerializeField]
    private GameObject player;

    [SerializeField]
    private Animator anim;

    private float xDist;
    private float zDist;
    private float distance;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void EnemyAction()
    {
        // distance = Vector3.Distance(player.transform.position, transform.position);
        xDist = Mathf.Abs(transform.position.x - player.transform.position.x);
        zDist = Mathf.Abs(transform.position.z - player.transform.position.z);
        int xOrz = Random.Range(0, 3);
        Debug.Log(xOrz);

        if (xDist > 0.5f)
        {
            if (zDist > 3.0f)
            {
                if (xOrz == 0)
                {
                    anim.SetTrigger("forwardTrigger");
                    transform.DOMove(new Vector3(0, 0, -2), 3f).SetRelative();
                }
                else
                {
                    anim.SetTrigger("leftRightTrigger");
                    if (this.transform.position.x < 2.0f)
                    {
                        transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                    }
                    else
                    {
                        transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
                    }
                }
            }

            else if (xDist > 3.0f)
            {
                anim.SetTrigger("leftRightTrigger");
                if (this.transform.position.x < 2.0f)
                {
                    transform.DOMove(new Vector3(2, 0, 0), 3f).SetRelative();
                }
                else
                {
                    transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
                }
            }

            else
            {
                if (xOrz == 0)
                {
                    anim.SetTrigger("backTrigger");
                    transform.DOMove(new Vector3(0, 0, 2), 3f).SetRelative();
                }
                else
                {
                    anim.SetTrigger("swordTrigger");
                    Debug.Log("Short Attack!");
                }
            }
        }
    }
}
