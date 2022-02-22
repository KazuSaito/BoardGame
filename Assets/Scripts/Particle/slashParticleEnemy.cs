using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class slashParticleEnemy : MonoBehaviour
{
    [SerializeField] private GameObject enemyKunaiParticle;

    // Start is called before the first frame update
    void Start()
    {
        enemyKunaiParticle.SetActive(false);
    }

    public void EnemyKunaiParticleOn()
    {
        enemyKunaiParticle.SetActive(true);
        StartCoroutine("ParticleOff");
    }

    private IEnumerator ParticleOff()
    {
        yield return new WaitForSeconds(1.4f);
        enemyKunaiParticle.SetActive(false);
    }

}
