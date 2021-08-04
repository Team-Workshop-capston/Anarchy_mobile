using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayManager : MonoBehaviourPun
{
    public Text whoseTurn;
    bool isMaster;

    private void Awake()
    {
        if(PhotonNetwork.IsMasterClient)
        {
            isMaster = true;
        }
        else
        {
            isMaster = false;
        }
    }
    private void Start()
    {
        GameManager.instance.audioManager.StartGameSceneBGM();
    }

    private void Update()
    {
        if((isMaster && CentralProcessor.Instance.turn_Number % 2 == 0) || (!isMaster && CentralProcessor.Instance.turn_Number % 2 == 1))
        {
            whoseTurn.text = "Your Turn!";
        }
        else if((isMaster && CentralProcessor.Instance.turn_Number % 2 == 1) || (!isMaster && CentralProcessor.Instance.turn_Number % 2 == 0))
        {
            whoseTurn.text = "Other Turn!";
        }
    }
}
