using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Clicked : MonoBehaviour
{
    [SerializeField]
    private GameObject buttonManager;

    [SerializeField]
    private GameObject thisButton;

    [SerializeField]
    private GameObject movementButtons;

    // �Q�Ɛ��private�ł��ǂ����� (���������ł͖��Ȃ�)
    [SerializeField]
    private ButtonManager changeButtonTypes;

    // Start is called before the first frame update
    void Start()
    {
        // Button Manager�̃X�N���v�g�擾
        changeButtonTypes = buttonManager.GetComponent<ButtonManager>();
    }

    public void onClick()
    {
        // ���g�Ƃ��ĉ����ꂽ�{�^���̖��O�������Ƃ��ēn���A���̖��O�ɉ����ď������s
        changeButtonTypes.changeButtons(thisButton.name);
    }
}
