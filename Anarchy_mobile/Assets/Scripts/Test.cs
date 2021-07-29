using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviourPunCallbacks
{
    public Text text;

    // Start is called before the first frame update
    void Start()
    {
        if(PhotonNetwork.IsMasterClient)
        {
            text.text = "Player 1";
        }
        else if(!PhotonNetwork.IsMasterClient)
        {
            text.text = "Player 2";
        }
        // if(photonView.IsMine)
        // {
        //     text.text = "1";
        // }
        // else
        // {
        //     text.text = "2";
        // }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
