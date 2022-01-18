using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class EnemyMove : MonoBehaviour
{
    [SerializeField]
    private GameObject player;

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
        distance = Vector3.Distance(player.transform.position, transform.position);
        int xOrz = Random.Range(0, 2);
        Debug.Log(xOrz);

        if (distance >= 4.0f)
        {
            if (xOrz == 0)
            {
                transform.DOMove(new Vector3(0, 0, -2), 3f).SetRelative();
            }
            else
            {
                transform.DOMove(new Vector3(-2, 0, 0), 3f).SetRelative();
            }
        }
    }
}
