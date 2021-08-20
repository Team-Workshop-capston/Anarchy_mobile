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
    public MyBuilding[]     currentBuildings = new MyBuilding[3];
    public int              createNumber = 3;
    public Image            waitingPanel;
    public Text             waitingText;
    public Queue            que = new Queue();

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
        uIManager.state = UIManager.State.Ready;
        if(isMaster)
        {
            currentTile = P1_core_Tile;
            currentTile.GetComponent<Tile>().minimap_Tile.color = Color.blue;
        }
        else
        {
            currentTile = P2_core_Tile;
            currentTile.GetComponent<Tile>().minimap_Tile.color = Color.red;
        }
        color = uIManager.errorMessage.color;
        tiles = GameObject.FindGameObjectsWithTag("Tile");
        if(!isMaster)
        {
            uIManager.TurnOff();
        }
        StartCoroutine(Waiting());
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

    IEnumerator Waiting()
    {
        while(true)
        {
            if(PhotonNetwork.PlayerList.Length > 1)
            {
                waitingText.text = "매칭완료";
                yield return new WaitForSeconds(2);
                uIManager.state = UIManager.State.Idle;
                waitingPanel.gameObject.SetActive(false);
                break;
            }
            yield return null;
        }
        
    }

#region // call RPC function
    public void AddTurnNumber()
    {
        photonView.RPC("AddTurnNumberRPC", RpcTarget.All);
        if(turn_Number % 2 == 0)
        {
            photonView.RPC("NextTurnRPC", RpcTarget.All);
            photonView.RPC("UnitUpdateRPC", RpcTarget.All);
            photonView.RPC("TileUpdateRPC", RpcTarget.All);
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

    public void CheckCoreTileUnits(int unitId, int num, bool isMaster)
    {
        photonView.RPC("CheckCoreTileUnitsRPC", RpcTarget.All, unitId, num, isMaster);
    }

    public void CheckTileUnits(int tileId, int unitId, int num, bool isMaster, bool check)
    {
        photonView.RPC("CheckTileUnitsRPC", RpcTarget.All, tileId, unitId, num, isMaster, check);
    }

    public void ApplyCreateUnitVariable(int id, int type)
    {
        switch(type)
        {
            case 1:
            photonView.RPC("ApplyCreateUnitVariableRPC", RpcTarget.All, id, VariableManager.Instance.war_hp, VariableManager.Instance.war_off, VariableManager.Instance.war_def, VariableManager.Instance.war_act);
            break;
            case 2:
            photonView.RPC("ApplyCreateUnitVariableRPC", RpcTarget.All, id, VariableManager.Instance.arc_hp, VariableManager.Instance.arc_off, VariableManager.Instance.arc_def, VariableManager.Instance.arc_act);
            break;
            case 3:
            photonView.RPC("ApplyCreateUnitVariableRPC", RpcTarget.All, id, VariableManager.Instance.mag_hp, VariableManager.Instance.mag_off, VariableManager.Instance.mag_def, VariableManager.Instance.mag_act);
            break;
        }
    }

    public void Attact(int myId, int enemyId)
    {
        photonView.RPC("AttackRPC", RpcTarget.All, myId, enemyId);
    }

    public void BuildingUpgrade(int buildingId)
    {
        photonView.RPC("BuildingUpgradeRPC", RpcTarget.All, buildingId);
    }
#endregion

#region // RPC functions
    [PunRPC]
    private void AddTurnNumberRPC()
    {
        turn_Number += 1;
        if((turn_Number % 2 == 1) && isMaster)
        {
            uIManager.state = UIManager.State.Next;
            uIManager.TurnOff();
        }
        else if((turn_Number % 2 == 0) && !isMaster)
        {
            uIManager.state = UIManager.State.Next;
            uIManager.TurnOff();
        }
        else if((turn_Number % 2 == 0) && isMaster)
        {
            uIManager.state = UIManager.State.Idle;
            uIManager.TurnOn();
        }
        else if((turn_Number % 2 == 1) && !isMaster)
        {
            uIManager.state = UIManager.State.Idle;
            uIManager.TurnOn();
        }
    }

    [PunRPC]
    private void NextTurnRPC()
    {
        currentTurn.text = ((turn_Number / 2) + 1).ToString() + " Turn";
    }

    [PunRPC]
    private void TileUpdateRPC()
    {
        Tile[] tiles = GameObject.FindObjectsOfType<Tile>();
        foreach(Tile t in tiles)
        {
            t.GiveMoney();
            if(t.occupationCost >= 3)
            {
                if(!t.GetComponent<Decision>().isChecked)
                {
                    if(isMaster)
                    {

                    }
                }
                t.occupationCost = 3;
                t.isP1Tile = true;
            }
            else if(t.occupationCost <= -3)
            {
                if(!t.GetComponent<Decision>().isChecked)
                {
                    if(!isMaster)
                    {

                    }
                }
                t.occupationCost = -3;
                t.isP2Tile = true;
            }
            else
            {
                t.isP1Tile = false;
                t.isP2Tile = false;
            }
        }
    }

    [PunRPC]
    private void UnitUpdateRPC()
    {
        createNumber = 3;
        MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
        foreach(MyUnit u in units)
        {
            u.ActiveCostUpdate();
            if(isMaster && u.gameObject.layer == 7)
            {
                u.currentTile.occupationCost += 1;
            }
            else if(!isMaster && u.gameObject.layer == 8)
            {
                u.currentTile.occupationCost -= 1;
            }
        }
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

    [PunRPC]
    private void CheckCoreTileUnitsRPC(int unitId, int num, bool isMaster)
    {
        GameObject[] units = GameObject.FindGameObjectsWithTag("Unit");
        foreach(GameObject unit in units)
        {
            if(unit.GetComponent<PhotonView>().ViewID == unitId)
            {
                if(isMaster)
                {
                    CentralProcessor.instance.P1_core_Tile.GetComponent<Tile>().P1_units[num] = unit.GetComponent<MyUnit>();
                }
                else
                {
                    CentralProcessor.instance.P2_core_Tile.GetComponent<Tile>().P2_units[num] = unit.GetComponent<MyUnit>();
                }
                        
                return;
            }
        }
    }

    [PunRPC]
    private void CheckTileUnitsRPC(int tileId, int unitId, int num, bool isMaster, bool check)
    {
        foreach(GameObject t in tiles)
        {
            if(t.GetComponent<PhotonView>().ViewID == tileId)
            {
                GameObject[] units = GameObject.FindGameObjectsWithTag("Unit");
                foreach(GameObject unit in units)
                {
                    if(unit.GetComponent<PhotonView>().ViewID == unitId)
                    {
                        if(isMaster)
                        {
                            if(!check)
                            {
                                t.GetComponent<Tile>().P1_units[num] = null;
                            }
                            else
                            {
                                t.GetComponent<Tile>().P1_units[num] = unit.GetComponent<MyUnit>();
                            }
                        }
                        else
                        {
                            if(!check)
                            {
                                t.GetComponent<Tile>().P2_units[num] = null;
                            }
                            else
                            {
                                t.GetComponent<Tile>().P2_units[num] = unit.GetComponent<MyUnit>();
                            }
                        }

                        return;
                    }
                }
            }
        }
    }

    [PunRPC]
    private void ApplyCreateUnitVariableRPC(int id, int hp, int off, int def, int act)
    {
        GameObject[] units = GameObject.FindGameObjectsWithTag("Unit");
        foreach(GameObject unit in units)
        {
            if(unit.GetComponent<PhotonView>().ViewID == id)
            {
                unit.GetComponent<MyUnit>().current_hp = hp;
                unit.GetComponent<MyUnit>().max_hp = hp;
                unit.GetComponent<MyUnit>().offensive = off;
                unit.GetComponent<MyUnit>().defensive = def;
                unit.GetComponent<MyUnit>().activeCost = act;
                return;
            }
        }
    }

    [PunRPC]
    private void ApplyFieldUnitVariableRPC()
    {

    }

    [PunRPC]
    private void AttackRPC(int myId, int enemyId)
    {
        GameObject[] units = GameObject.FindGameObjectsWithTag("Unit");
        foreach(GameObject myUnit in units)
        {
            if(myUnit.GetComponent<PhotonView>().ViewID == myId)
            {
                foreach(GameObject enemy in units)
                {
                    if(enemy.GetComponent<PhotonView>().ViewID == enemyId)
                    {
                        if(myUnit.GetComponent<MyUnit>().offensive > enemy.GetComponent<MyUnit>().defensive)
                        {
                            switch(myUnit.GetComponent<MyUnit>().type)
                            {
                                case 1:
                                myUnit.GetComponent<MyUnit>().current_hp -= 15;
                                break;
                                case 2:
                                break;
                                case 3:
                                myUnit.GetComponent<MyUnit>().current_hp -= 5;
                                break;
                            }

                            switch(enemy.GetComponent<MyUnit>().type)
                            {
                                case 1:
                                enemy.GetComponent<MyUnit>().current_hp -= 10 + (myUnit.GetComponent<MyUnit>().offensive - enemy.GetComponent<MyUnit>().defensive);
                                break;
                                case 2:
                                enemy.GetComponent<MyUnit>().current_hp -= 15 + (myUnit.GetComponent<MyUnit>().offensive - enemy.GetComponent<MyUnit>().defensive);
                                break;
                                case 3:
                                enemy.GetComponent<MyUnit>().current_hp -= 10 + (myUnit.GetComponent<MyUnit>().offensive - Mathf.RoundToInt(enemy.GetComponent<MyUnit>().defensive * 1.2f));
                                break;
                            }
                        }
                        else
                        {
                            switch(myUnit.GetComponent<MyUnit>().type)
                            {
                                case 1:
                                myUnit.GetComponent<MyUnit>().current_hp -= 10 + (enemy.GetComponent<MyUnit>().defensive - myUnit.GetComponent<MyUnit>().offensive);
                                break;
                                case 2:
                                break;
                                case 3:
                                myUnit.GetComponent<MyUnit>().current_hp -= 5 + Mathf.RoundToInt((enemy.GetComponent<MyUnit>().defensive - myUnit.GetComponent<MyUnit>().offensive) * 0.8f);
                                break;
                            }

                            switch(enemy.GetComponent<MyUnit>().type)
                            {
                                case 1:
                                enemy.GetComponent<MyUnit>().current_hp -= 5;
                                break;
                                case 2:
                                enemy.GetComponent<MyUnit>().current_hp -= 10;
                                break;
                                case 3:
                                enemy.GetComponent<MyUnit>().current_hp -= 5;
                                break;
                            }
                        }

                        if(myUnit.GetComponent<MyUnit>().current_hp <= 0)
                        {
                            if(myUnit.gameObject.layer == 7)
                            {
                                myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP1_unitArea[myUnit.GetComponent<MyUnit>().myNum] = false;
                                myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P1_unitArea[myUnit.GetComponent<MyUnit>().myNum] = null;
                            }
                            else if(myUnit.gameObject.layer == 8)
                            {
                                myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP2_unitArea[myUnit.GetComponent<MyUnit>().myNum] = false;
                                myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P2_unitArea[myUnit.GetComponent<MyUnit>().myNum] = null;
                            }
                            Destroy(myUnit.gameObject);
                        }

                        if(enemy.GetComponent<MyUnit>().current_hp <= 0)
                        {
                            if(enemy.gameObject.layer == 7)
                            {
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP1_unitArea[enemy.GetComponent<MyUnit>().myNum] = false;
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P1_unitArea[enemy.GetComponent<MyUnit>().myNum] = null;
                            }
                            else if(enemy.gameObject.layer == 8)
                            {
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP2_unitArea[enemy.GetComponent<MyUnit>().myNum] = false;
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P2_unitArea[enemy.GetComponent<MyUnit>().myNum] = null;
                            }
                            Destroy(enemy.gameObject);
                        }
                    }
                }
            }
        }
    }

    [PunRPC]
    private void BuildingUpgradeRPC(int buildingId)
    {
        MyBuilding[] buildings = GameObject.FindObjectsOfType<MyBuilding>();
        foreach(MyBuilding b in buildings)
        {
            if(b.GetComponent<PhotonView>().ViewID == buildingId)
            {
                Destroy(b.gameObject);
                return;
            }
        }
    }
#endregion
}
