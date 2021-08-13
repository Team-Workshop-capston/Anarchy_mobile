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
    public MyUnit           currentUnit;
    public Tile             P1_core_Tile;
    public Tile             P2_core_Tile;
    public Text             currentMoney;
    public Color            color;
    public Button           current_moveButton;
    public GameObject[]     tiles;

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
        tiles = GameObject.FindGameObjectsWithTag("Tile");
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
        if(master)
        {
            photonView.RPC("CreatedUnitP1AreaCheckRPC", RpcTarget.All, check, area);
        }
        else
        {
            photonView.RPC("CreatedUnitP2AreaCheckRPC", RpcTarget.All, check, area);
        }
    }

    public void CheckUnitArea(int id, bool check, int num, bool isMaster)
    {
        photonView.RPC("CheckUnitAreaRPC", RpcTarget.All, id, check, num, isMaster);
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
    private void CreatedUnitP1AreaCheckRPC(bool check, int area)
    {
        P1_core_Tile.isP1_unitArea[area] = check;
    }

    [PunRPC]
    private void CreatedUnitP2AreaCheckRPC(bool check, int area)
    {
        P2_core_Tile.isP2_unitArea[area] = check;
    }

    [PunRPC]
    private void CheckUnitAreaRPC(int id, bool check, int num, bool isMaster)
    {
        foreach(GameObject t in tiles)
        {
            if(t.GetComponent<PhotonView>().ViewID == id)
            {
                if(isMaster)
                {
                    t.GetComponent<Tile>().isP1_unitArea[num] = check;
                }
                else
                {
                    t.GetComponent<Tile>().isP2_unitArea[num] = check;
                }
                return;
            }
        }
    }
#endregion
}
