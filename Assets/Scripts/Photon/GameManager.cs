using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviourPunCallbacks
{
    [SerializeField]
    private GameObject playerPrefab;

    public static GameManager instance;

    private void Awake()
    {
        if (instance != null)
        {
            Destroy(this.gameObject);
        }
        else
        {
            instance = this;
        }
    }


    // Start is called before the first frame update
    void Start()
    {
        if (playerPrefab != null)
        {
            Vector3 spawnPoint = new Vector3(0, 0, 0);
            Quaternion rotation = new Quaternion(0, 0, 0, 0);
            bool isMaster = true;

            if (!PhotonNetwork.IsMasterClient)
            {
                spawnPoint = new Vector3(6, 0, 6);
                rotation = new Quaternion(0, 180, 0, 0);
                isMaster = false;
            }

            PhotonNetwork.Instantiate(playerPrefab.name, spawnPoint, rotation);

            // playerPrefabだと全体に送る？ バグが出たらFindWithTag方式に変更
            playerPrefab.GetComponent<PlayerMove>().IsMaster(isMaster);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public override void OnJoinedRoom()
    {
        Debug.Log(PhotonNetwork.NickName + " joined to " + PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        Debug.Log(newPlayer.NickName + " joined to " + PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnLeftRoom()
    {
        SceneManager.LoadScene("Opening");
    }

    public void LeaveRoom()
    {
        PhotonNetwork.LeaveRoom();
    }
}
