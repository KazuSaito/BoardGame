using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class slashParticle : MonoBehaviour
{
    [SerializeField] private GameObject kunaiParticle;

    // Start is called before the first frame update
    void Start()
    {
        kunaiParticle.SetActive(false);
    }

    public void ParticleOn()
    {
        kunaiParticle.SetActive(true);
        StartCoroutine("ParticleOff");
    }

    private IEnumerator ParticleOff()
    {
        yield return new WaitForSeconds(1.5f);
        kunaiParticle.SetActive(false);
    }

}
