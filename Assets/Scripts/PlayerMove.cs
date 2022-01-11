using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{
    private float positionY = 1.0f;

    private float posChange = 0.5f;

    // Start is called before the first frame update
    void Start()
    {
        this.transform.position = new Vector3(0, 1, 0);
    }

    public void PlayerMovement (string movementName)
    {
        switch (movementName)
        {
            case "TopMoveButton":
                if (this.transform.position.z < 5.0f)
                {
                    this.transform.position = new Vector3(this.transform.position.x, positionY, this.transform.position.z - posChange);
                }
                break;

            case "DownMoveButton":
                if (this.transform.position.z > 1.0f)
                {
                    this.transform.position = new Vector3(this.transform.position.x, positionY, this.transform.position.z + posChange);
                }
                break;

            case "LeftMoveButton":
                if (this.transform.position.x > 1.0f)
                {
                    this.transform.position = new Vector3(this.transform.position.x + posChange, positionY, this.transform.position.z);
                }
                break;

            case "RightMoveButton":
                if (this.transform.position.x < 5.0f)
                {
                    this.transform.position = new Vector3(this.transform.position.x - posChange, positionY, this.transform.position.z);
                }
                break;
        }

    }
}
