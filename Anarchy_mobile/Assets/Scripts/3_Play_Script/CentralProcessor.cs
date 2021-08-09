using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
    public CameraManager    cameraManager;
    public UIManager        uIManager;
    public Text             whoseTurn;
    public Text             currentTurn;
    public bool             isMaster;
    public int              turn_Number = 0;
    public Tile             currentTile;
    public Tile             P1_core_Tile;
    public Tile             P2_core_Tile;
    public Text             currentMoney;
    public Color            color;

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
        if(isMaster)
        {
            currentTile = P1_core_Tile;
        }
        else
        {
            currentTile = P2_core_Tile;
        }
        color = uIManager.errorMessage.color;
    }

    private void Update()
    {
        if((isMaster && turn_Number % 2 == 0) || (!isMaster && turn_Number % 2 == 1))
        {
            whoseTurn.text = "Your Turn!";
        }
        else if((isMaster && turn_Number % 2 == 1) || (!isMaster && turn_Number % 2 == 0))
        {
            whoseTurn.text = "Other Turn!";
        }
    }

#region // call RPC function
    public void AddTurnNumber()
    {
        photonView.RPC("AddTurnNumberRPC", RpcTarget.All);
        if(turn_Number % 2 == 0)
        {
            photonView.RPC("NextTurnRPC", RpcTarget.All);
        }
    }

    public void CreatedUnitAreaCheck(bool master, bool check, int area)
    {
        photonView.RPC("CreatedUnitAreaCheckRPC", RpcTarget.All, master, check, area);
    }
#endregion

#region // RPC functions
    [PunRPC]
    private void AddTurnNumberRPC()
    {
        turn_Number += 1;
    }

    [PunRPC]
    private void NextTurnRPC()
    {
        currentTurn.text = ((turn_Number / 2) + 1).ToString() + " Turn";
    }

    [PunRPC]
    private void CreatedUnitAreaCheckRPC(bool master, bool check, int area)
    {
        if(master)
        {
            P1_core_Tile.isP1_unitArea[area] = check;
        }
        else
        {
            P2_core_Tile.isP2_unitArea[area] = check;
        }
    }
#endregion
}
