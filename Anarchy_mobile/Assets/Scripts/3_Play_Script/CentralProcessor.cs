using System.Dynamic;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

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
    public EffectSoundManager   effectSoundManager;
    public Text             whoseTurn;
    public Text             currentTurn;
    public bool             isMaster;
    public int              turn_Number = 0;
    public Tile             currentTile;
    public MyUnit           currentUnit;
    public MyUnit           currentEnemy;
    public MyBuilding       currentBuilding;
    public Tile             P1_core_Tile;
    public Tile             P2_core_Tile;
    public Text             currentMoney;
    public Color            color;
    public Button           current_moveButton;
    public Tile[]           tiles;
    public MyBuilding[]     currentBuildings = new MyBuilding[3];
    public int              createUnitNumber = 3;
    public int              createBuildingNumber = 1;
    public Image            waitingPanel;
    public Text             waitingText;
    public Queue            que = new Queue();
    public Cloud            cloud;
    public Button           decisionButton;
    public bool             firstDecision = false;
    public Text             timer;
    public float            time = 10;
    private float           selectCount;
    public IEnumerator      t;
    public bool             isIgnoreCheck = true;
    public Text             turnEndText;

    public int              P1_score = 0;
    public int              P2_score = 0;
    public int              P1_totalUnit = 0;
    public int              P2_totalUnit = 0;
    public int              P1_totalKill = 0;
    public int              P2_totalKill = 0;
    public int              P1_totalMoney = 0;
    public int              P2_totalMoney = 0;
    public int              P1_totalOccupation = 0;
    public int              P2_totalOccupation = 0;
    
    public Text             p1_score;
    public Text             p2_score;
    public Text             p1_unit;
    public Text             p2_unit;
    public Text             p1_kill;
    public Text             p2_kill;
    public Text             p1_money;
    public Text             p2_money;
    public Text             p1_occupation;
    public Text             p2_occupation;
    public Text             GameResult;



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
            foreach(GameObject c in currentTile.occBlue)
            {
                c.gameObject.SetActive(true);
            }
        }
        else
        {
            currentTile = P2_core_Tile;
            currentTile.GetComponent<Tile>().minimap_Tile.color = Color.red;
            foreach(GameObject c in currentTile.occRed)
            {
                c.gameObject.SetActive(true);
            }
        }
        color = uIManager.errorMessage.color;
        //tiles = GameObject.FindGameObjectsWithTag("Tile");
        StartCoroutine(Waiting());
        t = Timer();
    }

    private void Update()
    {
        // if((isMaster && turn_Number % 2 == 0) || (!isMaster && turn_Number % 2 == 1))
        // {
        //     whoseTurn.text = "Your Turn!";
        // }
        // else if((isMaster && turn_Number % 2 == 1) || (!isMaster && turn_Number % 2 == 0))
        // {
        //     whoseTurn.text = "Other Turn!";
        // }
    }

    public void CurrentUnitNull()
    {
        if(currentUnit != null)
        {
            currentUnit.particleSystem.Clear();
            currentUnit.particleSystem.gameObject.SetActive(false);
            currentUnit = null;
        }
    }

    public void Exit()
    {
        photonView.RPC("ExitRPC", RpcTarget.Others);
        PhotonNetwork.LeaveRoom();
        SceneManager.LoadScene(0);
    }

    public void StartTimer()
    {
        t = Timer();
        timer.gameObject.SetActive(true);
        StartCoroutine(t);
    }

    public void StopTimer()
    {
        StopCoroutine(t);
        timer.gameObject.SetActive(false);
    }

    IEnumerator Waiting()
    {
        while(true)
        {
            if(PhotonNetwork.PlayerList.Length > 1)
            {
                waitingText.text = "Success Matching!";
                yield return new WaitForSeconds(2);
                uIManager.state = UIManager.State.Idle;
                waitingPanel.gameObject.SetActive(false);
                cloud.gameObject.SetActive(true);
                break;
            }
            yield return null;
        }
    }

    IEnumerator Timer()
    {
        selectCount = time;
        while(true)
        {
            if(Mathf.Floor(selectCount) <= 0) 
            {
                break;
            } 
            else 
            {
                selectCount -= Time.deltaTime;
                timer.text = Mathf.Floor(selectCount).ToString();
            }
            yield return null;
        }
        AddTurnNumber();
    }

    public void UnitReset()
    {
        CurrentUnitNull();
        currentEnemy = null;
        //uIManager.unitInfo_panel.gameObject.SetActive(false);
        uIManager.CloseUnitInfo();
        uIManager.unitButtonPanel.gameObject.SetActive(false);
    }

    public void BuildingReset()
    {
        currentBuilding = null;
        foreach(Image i in uIManager.buildingLevels)
        {
            i.gameObject.SetActive(false);
        }
        foreach(Text t in uIManager.buildingEffects)
        {
            t.gameObject.SetActive(false);
        }
        uIManager.buildingInfo_panel.gameObject.SetActive(false);
    }
    
    public void GameWin()
    {

    }

    public void GameLose()
    {

    }

    public bool CheckActiveCost()
    {
        bool isCheck = false;
        if(isMaster)
        {
            MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
            foreach(MyUnit u in units)
            {
                if(u.gameObject.layer == 7 && u.activeCost > 0)
                {
                    isCheck = true;
                    return isCheck;
                }
            }
        }
        else
        {
            MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
            foreach(MyUnit u in units)
            {
                if(u.gameObject.layer == 8 && u.activeCost > 0)
                {
                    isCheck = true;
                    return isCheck;
                }
            }
        }
        return isCheck;
    }

    public bool CheckDecision()
    {
        bool isCheck = false;
        if(isMaster)
        {
            DecisionIcon[] decision = GameObject.FindObjectsOfType<DecisionIcon>();
            foreach(DecisionIcon d in decision)
            {
                if(d.gameObject.activeSelf && d.isP1Decision)
                {
                    isCheck = true;
                    return isCheck;
                }
            }
        }
        else
        {
            DecisionIcon[] decision = GameObject.FindObjectsOfType<DecisionIcon>();
            foreach(DecisionIcon d in decision)
            {
                if(d.gameObject.activeSelf && d.isP2Decision)
                {
                    isCheck = true;
                    return isCheck;
                }
            }
        }
        return isCheck;
    }

#region // call RPC function
    public void AddTurnNumber()
    {
        if(isIgnoreCheck)
        {
            if(CheckDecision())
            {
                string s = "남아있는 디시전이 있습니다.^^";
                uIManager.ShowCheckWindow(s);
                return;
            }
            else if(CheckActiveCost())
            {
                string s = "행동력이 남은 유닛이 있습니다.^^";
                uIManager.ShowCheckWindow(s);
                return;
            }
            else
            {
                AddTurn();
                return;
            }
        }
        AddTurn();
    }

    public void AddTurn()
    {
        if(uIManager.checkWindow.gameObject.activeSelf)
        {
            uIManager.checkWindow.gameObject.SetActive(false);
        }
        photonView.RPC("AddTurnNumberRPC", RpcTarget.All);
        if(turn_Number % 2 == 0)
        {
            photonView.RPC("NextTurnRPC", RpcTarget.All);
            photonView.RPC("UnitUpdateRPC", RpcTarget.All);
            photonView.RPC("TileUpdateRPC", RpcTarget.All);
        }
    }

    public void IgnoreActiveCostCheck()
    {
        isIgnoreCheck = !isIgnoreCheck;
        if(!isIgnoreCheck)
        {
            turnEndText.text = "OFF";
        }
        else
        {
            turnEndText.text = "ON";
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

    public void CheckUnitArea(int layer, int id, bool check, int num)
    {
        photonView.RPC("CheckUnitAreaRPC", RpcTarget.All, layer, id, check, num);
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

    public void ApplyUnitOffenceEffect(int layer, int war_off, int arc_off, int mag_off)
    {
        photonView.RPC("ApplyUnitOffenceEffectRPC", RpcTarget.All, layer, war_off, arc_off, mag_off);
    }

    public void ApplyUnitDefenceEffect(int layer, int war_def, int arc_def, int mag_def)
    {
        photonView.RPC("ApplyUnitDefenceEffectRPC", RpcTarget.All, layer, war_def, arc_def, mag_def);
    }

    public void ApplyUnitCurrentTile(int unitId, int tileId)
    {
        photonView.RPC("ApplyUnitCurrentTileRPC", RpcTarget.All, unitId, tileId);
    }

    public void ApplyUnitActiveCost(int id, int cost)
    {
        photonView.RPC("ApplyUnitActiveCostRPC", RpcTarget.All, id, cost);
    }

    public void SumScore(int p1, int p2)
    {
        photonView.RPC("SumScoreRPC", RpcTarget.All, p1, p2);
    }

    public void SumUnit(int p1, int p2)
    {
        photonView.RPC("SumUnitRPC", RpcTarget.All, p1, p2);
    }

    public void SumKill(int p1, int p2)
    {
        photonView.RPC("SumKillRPC", RpcTarget.All, p1, p2);
    }

    public void SumMoney(int p1, int p2)
    {
        photonView.RPC("SumMoneyRPC", RpcTarget.All, p1, p2);
    }

    public void SumOccupation(int p1, int p2)
    {
        photonView.RPC("SumOccupationRPC", RpcTarget.All, p1, p2);
    }
#endregion

#region // RPC functions
    [PunRPC]
    private void AddTurnNumberRPC()
    {
        turn_Number += 1;
        if(turn_Number >= 100)
        {
            photonView.RPC("EndGameRPC", RpcTarget.All);
            return;
        }

        if((turn_Number % 2 == 1) && isMaster)
        {
            uIManager.state = UIManager.State.Next;
            uIManager.SetNextState();
            StopTimer();
        }
        else if((turn_Number % 2 == 0) && !isMaster)
        {
            uIManager.state = UIManager.State.Next;
            uIManager.SetNextState();
            StopTimer();
        }
        else if((turn_Number % 2 == 0) && isMaster)
        {
            uIManager.state = UIManager.State.Idle;
            uIManager.SetIdleState();
            StartTimer();

        }
        else if((turn_Number % 2 == 1) && !isMaster)
        {
            uIManager.state = UIManager.State.Idle;
            uIManager.SetIdleState();
            StartTimer();
        }
    }

    [PunRPC]
    private void NextTurnRPC()
    {
        currentTurn.text = ((turn_Number / 2) + 1).ToString() + "   TURN";
        createBuildingNumber = 1;
        effectSoundManager.PlayGoldSound();
    }

    [PunRPC]
    private void TileUpdateRPC()
    {
        foreach(Tile t in tiles)
        {
            t.GiveMoney();
            if((t.occupationCost >= 3 && t.isP1Tile) || (t.occupationCost <= -3 && t.isP2Tile))
            {
                if(t.isP1Tile)
                {
                    t.occupationCost = 3;
                }
                else if(t.isP2Tile)
                {
                    t.occupationCost = -3;
                }
            }
            else if(t.occupationCost >= 3 && !t.isP1Tile)
            {
                if(t.isP2CoreTile)
                {
                    photonView.RPC("EndGameRPC", RpcTarget.All);
                    return;
                }
                t.occupationCost = 3;
                t.isP1Tile = true;
                t.gameObject.transform.Find("flag_Blue").gameObject.SetActive(true);
                if(!t.GetComponent<Tile>().isDecision)
                {
                    t.GetComponent<Tile>().isDecision = true;
                    t.decisionIcon.GetComponent<DecisionIcon>().isP1Decision = true;
                    if(isMaster)
                    {
                        t.decisionIcon.GetComponent<DecisionIcon>().gameObject.SetActive(true);
                        if(!firstDecision)
                        {
                            firstDecision = true;
                            decisionButton.gameObject.SetActive(true);
                        }
                    }
                }
            }
            else if(t.occupationCost <= -3 && !t.isP2Tile)
            {
                if(t.isP1CoreTile)
                {
                    photonView.RPC("EndGameRPC", RpcTarget.All);
                    return;
                }
                t.occupationCost = -3;
                t.isP2Tile = true;
                t.gameObject.transform.Find("flag_Red").gameObject.SetActive(true);
                if(!t.GetComponent<Tile>().isDecision)
                {
                    t.GetComponent<Tile>().isDecision = true;
                    t.decisionIcon.GetComponent<DecisionIcon>().isP2Decision = true;
                    if(!isMaster)
                    {
                        if(!firstDecision)
                        {
                            firstDecision = true;
                            decisionButton.gameObject.SetActive(true);
                        }
                        t.decisionIcon.GetComponent<DecisionIcon>().gameObject.SetActive(true);
                    }
                }
            }
            else if(t.occupationCost < 3 && t.occupationCost > -3)
            {
                t.isP1Tile = false;
                t.isP2Tile = false;
                t.gameObject.transform.Find("flag_Blue").gameObject.SetActive(false);
                t.gameObject.transform.Find("flag_Red").gameObject.SetActive(false);
            }
        }
        currentTile.DisappearOcc();
        currentTile.ShowOcc();
    }

    [PunRPC]
    private void UnitUpdateRPC()
    {
        createUnitNumber = 3;
        MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
        foreach(MyUnit u in units)
        {
            u.ActiveCostUpdate();
            if(u.gameObject.layer == 7)
            {
                if(!u.currentTile.GetComponent<Tile>().isP1Tile)
                {
                    if(u.type == 1 || u.type == 2)
                    {
                        u.currentTile.occupationCost += VariableManager.Instance.war_Occupation;
                    }
                    else
                    {
                        u.currentTile.occupationCost += VariableManager.Instance.mag_Occupation;
                    }
                }
            }
            else if(u.gameObject.layer == 8)
            {
                if(!u.currentTile.GetComponent<Tile>().isP2Tile)
                {
                    if(u.type == 1 || u.type == 2)
                    {
                        u.currentTile.occupationCost -= VariableManager.Instance.war_Occupation;
                    }
                    else
                    {
                        u.currentTile.occupationCost -= VariableManager.Instance.mag_Occupation;
                    }
                }
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
    private void CheckUnitAreaRPC(int layer, int id, bool check, int num)
    {
        foreach(Tile t in tiles)
        {
            if(t.GetComponent<PhotonView>().ViewID == id)
            {
                if(layer == 7)
                {
                    t.isP1_unitArea[num] = check;
                }
                else
                {
                    t.isP2_unitArea[num] = check;
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
                unit.GetComponent<MyUnit>().myNum = num;
                if(isMaster)
                {
                    P1_core_Tile.GetComponent<Tile>().P1_units[num] = unit.GetComponent<MyUnit>();
                    P1_core_Tile.MoveMapButton.GetComponent<MoveUnit>().p1unit[num].gameObject.SetActive(true);
                    unit.GetComponent<MyUnit>().currentTile = P1_core_Tile;
                }
                else
                {
                    P2_core_Tile.GetComponent<Tile>().P2_units[num] = unit.GetComponent<MyUnit>();
                    P2_core_Tile.MoveMapButton.GetComponent<MoveUnit>().p2unit[num].gameObject.SetActive(true);
                    unit.GetComponent<MyUnit>().currentTile = P2_core_Tile;
                }
                return;
            }
        }
    }

    [PunRPC]
    private void CheckTileUnitsRPC(int tileId, int unitId, int num, bool isMaster, bool check)
    {
        foreach(Tile t in tiles)
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
                                t.P1_units[num] = null;
                                t.MoveMapButton.GetComponent<MoveUnit>().p1unit[num].gameObject.SetActive(false);
                            }
                            else
                            {
                                unit.GetComponent<MyUnit>().myNum = num;
                                t.P1_units[num] = unit.GetComponent<MyUnit>();
                                t.MoveMapButton.GetComponent<MoveUnit>().p1unit[num].gameObject.SetActive(true);
                            }
                        }
                        else
                        {
                            if(!check)
                            {
                                t.P2_units[num] = null;
                                t.MoveMapButton.GetComponent<MoveUnit>().p2unit[num].gameObject.SetActive(false);
                            }
                            else
                            {
                                unit.GetComponent<MyUnit>().myNum = num;
                                t.P2_units[num] = unit.GetComponent<MyUnit>();
                                t.MoveMapButton.GetComponent<MoveUnit>().p2unit[num].gameObject.SetActive(true);
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
                unit.GetComponent<MyUnit>().hp = hp;
                unit.GetComponent<MyUnit>().offensive = off;
                unit.GetComponent<MyUnit>().defensive = def;
                unit.GetComponent<MyUnit>().activeCost = act;
                return;
            }
        }
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
                        if(myUnit.GetComponent<MyUnit>().offensive >= enemy.GetComponent<MyUnit>().defensive)
                        {
                            enemy.GetComponent<MyUnit>().hp -= 1;
                            enemy.GetComponent<MyUnit>().attackParticle.Play();
                            enemy.GetComponent<MyUnit>().accDamage = 0;
                        }
                        else
                        {
                            enemy.GetComponent<MyUnit>().accDamage += myUnit.GetComponent<MyUnit>().offensive;
                            if(enemy.GetComponent<MyUnit>().accDamage >= enemy.GetComponent<MyUnit>().defensive)
                            {
                                enemy.GetComponent<MyUnit>().hp -= 1;
                                enemy.GetComponent<MyUnit>().attackParticle.Play();
                                enemy.GetComponent<MyUnit>().accDamage = 0;
                            }
                        }
                        myUnit.GetComponent<MyUnit>().activeCost = 0;
                        
                        // if(myUnit.GetComponent<MyUnit>().offensive > enemy.GetComponent<MyUnit>().defensive)
                        // {
                        //     switch(myUnit.GetComponent<MyUnit>().type)
                        //     {
                        //         case 1:
                        //         myUnit.GetComponent<MyUnit>().current_hp -= 15;
                        //         break;
                        //         case 2:
                        //         break;
                        //         case 3:
                        //         myUnit.GetComponent<MyUnit>().current_hp -= 5;
                        //         break;
                        //     }

                        //     switch(enemy.GetComponent<MyUnit>().type)
                        //     {
                        //         case 1:
                        //         enemy.GetComponent<MyUnit>().current_hp -= 10 + (myUnit.GetComponent<MyUnit>().offensive - enemy.GetComponent<MyUnit>().defensive);
                        //         break;
                        //         case 2:
                        //         enemy.GetComponent<MyUnit>().current_hp -= 15 + (myUnit.GetComponent<MyUnit>().offensive - enemy.GetComponent<MyUnit>().defensive);
                        //         break;
                        //         case 3:
                        //         enemy.GetComponent<MyUnit>().current_hp -= 10 + (myUnit.GetComponent<MyUnit>().offensive - Mathf.RoundToInt(enemy.GetComponent<MyUnit>().defensive * 1.2f));
                        //         break;
                        //     }
                        // }
                        // else
                        // {
                        //     switch(myUnit.GetComponent<MyUnit>().type)
                        //     {
                        //         case 1:
                        //         myUnit.GetComponent<MyUnit>().current_hp -= 10 + (enemy.GetComponent<MyUnit>().defensive - myUnit.GetComponent<MyUnit>().offensive);
                        //         break;
                        //         case 2:
                        //         break;
                        //         case 3:
                        //         myUnit.GetComponent<MyUnit>().current_hp -= 5 + Mathf.RoundToInt((enemy.GetComponent<MyUnit>().defensive - myUnit.GetComponent<MyUnit>().offensive) * 0.8f);
                        //         break;
                        //     }

                        //     switch(enemy.GetComponent<MyUnit>().type)
                        //     {
                        //         case 1:
                        //         enemy.GetComponent<MyUnit>().current_hp -= 5;
                        //         break;
                        //         case 2:
                        //         enemy.GetComponent<MyUnit>().current_hp -= 10;
                        //         break;
                        //         case 3:
                        //         enemy.GetComponent<MyUnit>().current_hp -= 5;
                        //         break;
                        //     }
                        // }

                        // myUnit.GetComponent<MyUnit>().activeCost = 0;

                        // if(myUnit.GetComponent<MyUnit>().hp <= 0)
                        // {
                        //     if(myUnit.gameObject.layer == 7)
                        //     {
                        //         P2_score += 50;
                        //         p2_score.text = P2_score.ToString();
                        //         P2_totalKill += 1;
                        //         p2_kill.text = P2_totalKill.ToString();
                        //         myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP1_unitArea[myUnit.GetComponent<MyUnit>().myNum] = false;
                        //         myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P1_units[myUnit.GetComponent<MyUnit>().myNum] = null;
                        //         myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().MoveMapButton.GetComponent<MoveUnit>().p1unit[myUnit.GetComponent<MyUnit>().myNum].gameObject.SetActive(false);
                        //     }
                        //     else if(myUnit.gameObject.layer == 8)
                        //     {
                        //         P1_score += 50;
                        //         p1_score.text = P2_score.ToString();
                        //         P1_totalKill += 1;
                        //         p1_kill.text = P1_totalKill.ToString();
                        //         myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP2_unitArea[myUnit.GetComponent<MyUnit>().myNum] = false;
                        //         myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P2_units[myUnit.GetComponent<MyUnit>().myNum] = null;
                        //         myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().MoveMapButton.GetComponent<MoveUnit>().p2unit[myUnit.GetComponent<MyUnit>().myNum].gameObject.SetActive(false);
                        //     }
                        //     Destroy(myUnit.gameObject);
                        // }

                        if(enemy.GetComponent<MyUnit>().hp <= 0)
                        {
                            if(enemy.gameObject.layer == 7)
                            {
                                P2_score += 50;
                                p2_score.text = P2_score.ToString();
                                P2_totalKill += 1;
                                p2_kill.text = P2_totalKill.ToString();
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP1_unitArea[enemy.GetComponent<MyUnit>().myNum] = false;
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P1_units[enemy.GetComponent<MyUnit>().myNum] = null;
                                myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().MoveMapButton.GetComponent<MoveUnit>().p1unit[myUnit.GetComponent<MyUnit>().myNum].gameObject.SetActive(false);
                            }
                            else if(enemy.gameObject.layer == 8)
                            {
                                P1_score += 50;
                                p1_score.text = P1_score.ToString();
                                P1_totalKill += 1;
                                p1_kill.text = P1_totalKill.ToString();
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().isP2_unitArea[enemy.GetComponent<MyUnit>().myNum] = false;
                                enemy.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().P2_units[enemy.GetComponent<MyUnit>().myNum] = null;
                                myUnit.GetComponent<MyUnit>().currentTile.GetComponent<Tile>().MoveMapButton.GetComponent<MoveUnit>().p2unit[myUnit.GetComponent<MyUnit>().myNum].gameObject.SetActive(false);
                            }
                            Destroy(enemy.gameObject);
                            effectSoundManager.PlayDestroySound();
                        }

                        uIManager.OffReadyAttack();
                    }
                }
            }
        }
        //uIManager.InfoWindowReset();
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

    [PunRPC]
    private void ApplyUnitOffenceEffectRPC(int layer, int war_off, int arc_off, int mag_off)
    {
        MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
        foreach(MyUnit unit in units)
        {
            if(unit.gameObject.layer == layer)
            {
                switch(unit.type)
                {
                    case 1:
                    unit.offensive = war_off;
                    break;
                    case 2:
                    unit.offensive = arc_off;
                    break;
                    case 3:
                    unit.offensive = mag_off;
                    break;
                }
            }
        }
    }

    [PunRPC]
    private void ApplyUnitDefenceEffectRPC(int layer, int war_def, int arc_def, int mag_def)
    {
        MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
        foreach(MyUnit unit in units)
        {
            if(unit.gameObject.layer == layer)
            {
                switch(unit.type)
                {
                    case 1:
                    unit.defensive = war_def;
                    break;
                    case 2:
                    unit.defensive = arc_def;
                    break;
                    case 3:
                    unit.defensive = mag_def;
                    break;
                }
            }
        }
    }

    [PunRPC]
    private void ExitRPC()
    {
        uIManager.SetEndState();
        PhotonNetwork.LeaveRoom();
    }

    [PunRPC]
    private void ApplyUnitCurrentTileRPC(int unitId, int tileId)
    {
        MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
        foreach(MyUnit unit in units)
        {
            if(unit.GetComponent<PhotonView>().ViewID == unitId)
            {
                foreach(Tile t in tiles)
                {
                    if(t.GetComponent<PhotonView>().ViewID == tileId)
                    {
                        unit.currentTile = t;
                        return;
                    }
                }
            }
        }
    }

    [PunRPC]
    private void ApplyUnitActiveCostRPC(int id, int cost)
    {
        MyUnit[] units = GameObject.FindObjectsOfType<MyUnit>();
        foreach(MyUnit unit in units)
        {
            if(unit.GetComponent<PhotonView>().ViewID == id)
            {
                unit.activeCost += cost;
                return;
            }
        }
    }

    [PunRPC]
    private void EndGameRPC()
    {
        uIManager.SetEndState();
        if(P1_score > P2_score)
        {
            if(isMaster)
            {
                GameResult.text = "V I C T O R Y";
            }
            else
            {
                GameResult.text = "L O S E";
            }
        }
        else if(P1_score == P2_score)
        {
            GameResult.text = "T I E";
        }
        else
        {
            if(isMaster)
            {
                GameResult.text = "L O S E";
            }
            else
            {
                GameResult.text = "V I C T O R Y";
            }
        }
        p1_score.text = P1_score.ToString();
        p2_score.text = P2_score.ToString();
        p1_unit.text = P1_totalUnit.ToString();
        p2_unit.text = P2_totalUnit.ToString();
        p1_kill.text = P1_totalKill.ToString();
        p2_kill.text = P2_totalUnit.ToString();
        p1_money.text = P1_totalMoney.ToString();
        p2_money.text = P2_totalMoney.ToString();
        p1_occupation.text = P1_totalOccupation.ToString();
        p2_occupation.text = P2_totalOccupation.ToString();
    }

    [PunRPC]
    private void SumScoreRPC(int p1, int p2)
    {
        P1_score += p1;
        P2_score += p2;
        p1_score.text = P1_score.ToString();
        p2_score.text = P2_score.ToString();
    }

    [PunRPC]
    private void SumUnitRPC(int p1, int p2)
    {
        P1_totalUnit += p1;
        P2_totalUnit += p2;
        p1_unit.text = P1_totalUnit.ToString();
        p2_unit.text = P2_totalUnit.ToString();
    }

    [PunRPC]
    private void SumKillRPC(int p1, int p2)
    {
        P1_totalKill += p1;
        P2_totalKill += p2;
        p1_kill.text = P1_totalKill.ToString();
        p2_kill.text = P2_totalKill.ToString();
    }

    [PunRPC]
    private void SumMoneyRPC(int p1, int p2)
    {
        P1_totalMoney += p1;
        P2_totalMoney += p2;
        p1_money.text = P1_totalMoney.ToString();
        p2_money.text = P2_totalMoney.ToString();
    }

    [PunRPC]
    private void SumOccupationRPC(int p1, int p2)
    {
        P1_totalOccupation += p1;
        P2_totalOccupation += p2;
        p1_occupation.text = P1_totalOccupation.ToString();
        p2_occupation.text = P2_totalOccupation.ToString();
    }
#endregion
}