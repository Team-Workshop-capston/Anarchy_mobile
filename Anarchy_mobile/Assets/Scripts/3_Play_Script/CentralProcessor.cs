using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CentralProcessor : MonoBehaviourPunCallbacks
{
    public static CentralProcessor Instance
    {
        get
        {
            if(instance == null) instance = FindObjectOfType<CentralProcessor>();

            return instance;
        }
    }

    private static CentralProcessor instance;
    public int turn_Number = 0;

#region // call RPC function
    public void AddTurnNumber()
    {
        photonView.RPC("AddTurnNumberRPC", RpcTarget.All);
    }
#endregion

#region // RPC functions
    [PunRPC]
    private void AddTurnNumberRPC()
    {
        turn_Number += 1;
    }
#endregion
}
