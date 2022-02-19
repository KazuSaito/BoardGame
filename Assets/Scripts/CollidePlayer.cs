using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CollidePlayer : MonoBehaviour
{
    [SerializeField] private GameObject phaseManger;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Enemy"))
        {
            phaseManger.GetComponent<PhaseManager>().CollideTrigger();
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }
}
