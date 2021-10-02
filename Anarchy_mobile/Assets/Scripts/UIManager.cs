using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviourPun
{
    public Image        ChooseforcePanel;
    public Image        ChoosemapPanel;
    public Button       nextButton;
    public Button       close_window;
    public GameObject   build_window;
    public GameObject   exit_window;
    public GameObject   setting_window;
    public GameObject   movemap_window;
    public GameObject   movecameramp_window;
    public GameObject   unit_window;
    public GameObject   decision_window;
    public GameObject   gameover;
    public GameObject[] ui;
    public Image        s_map; // 작은 지도
    public Image        b_map; // 이동버튼 눌렀을 때 나오는 큰 지도
    public Text     money;
    public Text     errorMessage; // 유닛이나 건물을 생산할 때 재화,자리가 부족하면 나오는 에러메세지
    float           time;
    float           start = 1f;
    float           end = 0f;
    public float    FadeTime = 1f;
    GameObject[]    window;
    public Image    unitInfo_panel;
    public Image    unit_illust;
    public Image    unit_hp;
    public Text     unit_activeCost;
    public Text     unit_name;
    public Text     HP;
    public Text     unit_ATK;
    public Text     unit_DEF;
    public Image    unitButtonPanel;
    public Image    buildingInfo_panel;
    public Text     buildingName;
    public Image    buildingIllust;
    public Image[]  buildingLevels;
    public Text[]   buildingEffects;
    public Button[] mapButtons;
    public Button   move_nextButton;
    public Image    tile_unitPanel;
    public Button   offAttackButton;
    public Image    decision_img;
    public Text     decision_story;
    public Text     decision_effect;
    public Button   exitButton;
    public Button   settingButton;    
    public Image    checkWindow;
    public Text     checkWindowtext;

    public enum State { Ready, Next, Idle, Active, Attack, End };
    public State state = State.Idle;

    private void Start()
    {
        if(SceneManager.GetActiveScene().name == "1_Select")
        {
            nextButton.GetComponent<Button>().interactable = false;
        }
        if(SceneManager.GetActiveScene().name == "3_Play")
        {
            SetReadyState();
            settingButton.gameObject.SetActive(false);
            exitButton.gameObject.SetActive(false);
        }
    }

    private void Update()
    {
        if(Input.GetKey(KeyCode.Escape))
        {
            if(SceneManager.GetActiveScene().name == "0_Title")
            {
                Application.Quit();
            }
            else if(SceneManager.GetActiveScene().name == "1_Select")
            {
                if(ChooseforcePanel.gameObject.activeSelf)
                {
                    SceneManager.LoadScene(0);
                }
                else
                {
                    ChooseforcePanel.gameObject.SetActive(true);
                    ChoosemapPanel.gameObject.SetActive(false);  
                }
            }
            else if(SceneManager.GetActiveScene().name == "3_Play")
            {
                if(state == State.Idle)
                {
                    ExitButtonClick();
                }
                else if(state == State.Active)
                {
                    SetIdleState();
                }
                else if(state == State.Attack)
                {
                    OffReadyAttack();
                }
            }
        }
    }

    public void NewgameBtnClick()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        SceneManager.LoadScene(1);
    }

    public void ExitGame()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        Application.Quit();
    }

    public void GoTitle()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        if(GameManager.instance.audioManager.backmusic.clip == GameManager.instance.audioManager.title.clip)
        {
            GameManager.instance.audioManager.StartTitleBGM();
        }
        SceneManager.LoadScene(0);
    }

    public void ShowForcePage()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        ChooseforcePanel.gameObject.SetActive(true);
        ChoosemapPanel.gameObject.SetActive(false);            
    }

    public void SelectForce()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        ChooseforcePanel.gameObject.SetActive(false);
        ChoosemapPanel.gameObject.SetActive(true);
    }

    public void SettingButtonClick()
    {
        SetActiveState();
        close_window.gameObject.SetActive(true);
        setting_window.gameObject.SetActive(true);
    }

    public void ExitButtonClick()
    {
        SetActiveState();
        close_window.gameObject.SetActive(true);
        exit_window.gameObject.SetActive(true);
    }

    public void UnitButtonClick()
    {
        SetActiveState();
        close_window.gameObject.SetActive(true);
        unit_window.gameObject.SetActive(true);
    }

    public void BuildButtonClick()
    {
        SetActiveState();
        close_window.gameObject.SetActive(true);
        build_window.gameObject.SetActive(true);
    }

    public void MinimapButtonClick()
    {
        SetActiveState();
        close_window.gameObject.SetActive(true);
        movecameramp_window.gameObject.SetActive(true);
    }

    public void ShowDecisionEffect()
    {
        close_window.gameObject.SetActive(true);
        decision_window.gameObject.SetActive(true);
    }

    public void MoveButtonClick()
    {
        state = State.Active;
        close_window.gameObject.SetActive(true);
        movemap_window.gameObject.SetActive(true);
        unitInfo_panel.gameObject.SetActive(false);
        unitButtonPanel.gameObject.SetActive(false);
        UISetActiveFalse();
        SearchWay();
    }

    public void SetReadyState()
    {
        state = State.Ready;
        UISetActiveFalse();
    }

    public void SetIdleState()
    {
        state = State.Idle;
        SetActiveFalseWindow();
        UISetActiveTrue();
    }

    public void SetActiveState()
    {
        state = State.Active;
        UISetActiveFalse();
        InfoWindowReset();
    }

    public void SetAttackState()
    {
        state = State.Attack;
        UISetActiveFalse();
    }

    public void SetEndState()
    {
        state = State.End;
        UISetActiveFalse();
        gameover.gameObject.SetActive(true);
    }

    public void SetNextState()
    {
        state = State.Next;
        UISetActiveFalse();
        InfoWindowReset();
    }

    public void SetActiveFalseWindow()
    {
        window = GameObject.FindGameObjectsWithTag("window");
        foreach(GameObject w in window)
        {
            w.gameObject.SetActive(false);
        }
    }

    public void UISetActiveFalse()
    {
        foreach(GameObject u in ui)
        {
            u.gameObject.SetActive(false);
        }
    }

    public void UISetActiveTrue()
    {
        foreach(GameObject u in ui)
        {
            u.gameObject.SetActive(true);
        }
    }

    public void InfoWindowReset()
    {
        if(unitInfo_panel.gameObject.activeSelf)
        {
            CentralProcessor.Instance.UnitReset();
        }
        if(buildingInfo_panel.gameObject.activeSelf)
        {
            CentralProcessor.Instance.BuildingReset();
        }
        if(VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.activeSelf)
        {
            VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.SetActive(false);
        }
    }

    public void OffMapButtonsCheck()
    {
        CentralProcessor.Instance.currentUnit = null;
        foreach(Button b in mapButtons)
        {
            b.GetComponent<MoveUnit>().OffCheck();
        }
    }

    public void PrintErrorMessage(string s)
    {
        errorMessage.gameObject.SetActive(true);
        errorMessage.text = s;
    }

    public void ShowUnitInfo(float m_hp, float c_hp, Sprite illust, string name, int cost, int offence, int defence)
    {
        unitInfo_panel.gameObject.SetActive(true);
        unit_name.text = name;
        unit_activeCost.text = cost.ToString();
        unit_illust.sprite = illust;
        //unit_hp.rectTransform.localScale = new Vector3(c_hp/m_hp,1f,1f);
        unit_hp.fillAmount = c_hp / m_hp;
        HP.text = Mathf.RoundToInt(c_hp).ToString();
        unit_ATK.text = offence.ToString();
        unit_DEF.text = defence.ToString();
    }

    public void ShowBuildingInfo(string name, Sprite illust, int level, int type)
    {
        buildingInfo_panel.gameObject.SetActive(true);
        buildingName.text = name;
        buildingIllust.sprite = illust;
        for(int i = 0; i < level; i++)
        {
            buildingLevels[i].gameObject.SetActive(true);
        }
        switch(type)
        {
            case 1:
            for(int i = 0; i < level; i++)
            {
                buildingEffects[i].gameObject.SetActive(true);
            }
            break;
            case 2:
            for(int i = 3; i < (level + 3); i++)
            {
                buildingEffects[i].gameObject.SetActive(true);
            }
            break;
            case 3:
            for(int i = 6; i < (level + 6); i++)
            {
                buildingEffects[i].gameObject.SetActive(true);
            }
            break;
        }
    }

    public void SearchWay()
    {
        foreach(Button b in mapButtons)
        {
            b.gameObject.GetComponent<MoveUnit>().isChecked = false;
            b.gameObject.GetComponent<MoveUnit>().checkPoint.gameObject.SetActive(true);
            b.gameObject.GetComponent<MoveUnit>().isMove = true;
            int dis = CalculateDistance(CentralProcessor.Instance.currentTile, b.gameObject.GetComponent<MoveUnit>().pairTile);
            b.gameObject.GetComponent<MoveUnit>().cost = dis;
            if(dis == 0 || dis > CentralProcessor.Instance.currentUnit.activeCost)
            {
                b.gameObject.GetComponent<MoveUnit>().checkPoint.gameObject.SetActive(false);
                b.gameObject.GetComponent<MoveUnit>().isMove = false;
            }
        }
    }

    public int CalculateDistance(Tile current, Tile obj)
    {
        int dis = 0;
        int x = Mathf.Abs(current.row - obj.row);
        int y = Mathf.Abs(current.col - obj.col);
        dis = x + y;
        return dis;
    }

    public void CloseUnitInfo()
    {
        unitInfo_panel.gameObject.SetActive(false);
    }

    public void MoveUnit()
    {
        if(CentralProcessor.Instance.current_moveButton == null)
        {
            return;
        }

        Transform[] area;
        bool[] isEmpty;

        if(CentralProcessor.Instance.isMaster)
        {
            area = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.P1_unitArea;
            isEmpty = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.isP1_unitArea;
        }
        else
        {
            area = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.P2_unitArea;
            isEmpty = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.isP2_unitArea;
        }

        if(isEmpty[0] && isEmpty[1] && isEmpty[2])
        {
            return;
        }
        if(CentralProcessor.Instance.isMaster)
        {
            CentralProcessor.Instance.CheckUnitArea(7, CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID,false,CentralProcessor.Instance.currentUnit.myNum);
        }
        else
        {
            CentralProcessor.Instance.CheckUnitArea(8, CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID,false,CentralProcessor.Instance.currentUnit.myNum);
        }
        //CentralProcessor.Instance.CheckUnitArea(CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID,false,CentralProcessor.Instance.currentUnit.myNum,CentralProcessor.Instance.isMaster);
        CentralProcessor.Instance.CheckTileUnits(CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.gameObject.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.myNum, CentralProcessor.Instance.isMaster, false);

        for(int i = 0; i < 3; i++)
        {
            if(isEmpty[i] == false)
            {
                if(CentralProcessor.Instance.isMaster)
                {
                    CentralProcessor.Instance.CheckUnitArea(7, CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID,true,CentralProcessor.Instance.currentUnit.myNum);
                }
                else
                {
                    CentralProcessor.Instance.CheckUnitArea(8, CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID,true,CentralProcessor.Instance.currentUnit.myNum);
                }
                //CentralProcessor.Instance.CheckUnitArea(CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID,true,i,CentralProcessor.Instance.isMaster);
                CentralProcessor.Instance.CheckTileUnits(CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, i, CentralProcessor.Instance.isMaster, true);
                CentralProcessor.Instance.currentUnit.transform.position = area[i].position;
                //CentralProcessor.Instance.currentUnit.currentTile = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile;
                CentralProcessor.Instance.ApplyUnitCurrentTile(CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID);
                //CentralProcessor.Instance.currentUnit.activeCost -= CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().cost;
                CentralProcessor.Instance.ApplyUnitActiveCost(CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, -CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().cost);
                CentralProcessor.Instance.currentUnit = null;
                CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().ChangeColor(Color.white);
                CentralProcessor.Instance.current_moveButton = null;
                CentralProcessor.Instance.uIManager.SetIdleState();
                CentralProcessor.Instance.uIManager.UISetActiveTrue();
                return;
            }
        }
    }

    public void ReadyAttack()
    {
        if(CentralProcessor.Instance.currentUnit.activeCost  == 0)
        {
            return;
        }
        SetAttackState();
        unitInfo_panel.gameObject.SetActive(false);
        unitButtonPanel.gameObject.SetActive(false);
        CentralProcessor.Instance.currentUnit.isAttackready = true;
        offAttackButton.gameObject.SetActive(true);
    }

    public void OffReadyAttack()
    {
        SetIdleState();
        CentralProcessor.Instance.currentUnit.isAttackready = false;
        CentralProcessor.Instance.currentUnit = null;
        offAttackButton.gameObject.SetActive(false);
        InfoWindowReset();
    }

    public void DecisionButtonClick()
    {
        if(VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.activeSelf == true)
        {
            VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.SetActive(false);
        }
        else
        {
            VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.SetActive(true);
        }
    }

    public void BGMOnOff()
    {
        if(GameManager.instance.audioManager.GetComponent<AudioSource>().volume == 1)
        {
            GameManager.instance.audioManager.GetComponent<AudioSource>().volume = 0;
        }
        else
        {
            GameManager.instance.audioManager.GetComponent<AudioSource>().volume = 1;
        }
    }

    public void ShowCheckWindow(string s)
    {
        if(checkWindow.gameObject.activeSelf)
        {
            SetIdleState();
            checkWindow.gameObject.SetActive(false);
        }
        else
        {
            SetActiveState();
            checkWindow.gameObject.SetActive(true);
            checkWindowtext.text = s;
        }
    }

    IEnumerator fadeoutErrorMessage()
    {
        Color fadecolor = CentralProcessor.Instance.color;
        time = 0f;
        fadecolor.a = Mathf.Lerp(start, end, time);
        while (fadecolor.a > 0f)
        {
            time += Time.deltaTime / FadeTime;
            fadecolor.a = Mathf.Lerp(start, end, time);
            errorMessage.color = fadecolor;
            yield return null;
        }
        errorMessage.gameObject.SetActive(false);
        StopCoroutine(fadeoutErrorMessage());
    }
}
