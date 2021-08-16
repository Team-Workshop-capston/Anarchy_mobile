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
    public Button       close_window;
    public GameObject   build_window;
    public GameObject   exit_window;
    public GameObject   setting_window;
    public GameObject   movemap_window;
    public GameObject   unit_window;
    public Button[]     buttons;
    public Image        s_map; // 작은 지도
    public Image        b_map; // 이동버튼 눌렀을 때 나오는 큰 지도
    public Button   unit_moveBtn; // 유닛 마우스(1)클릭하면 나오는 이동 버튼
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
    public Button[] mapButtons;
    public Button   move_nextButton;
    public Image    tile_unitPanel;

    public enum State { Ready, End, Idle, Active };
    public State state = State.Idle;

    private void Update()
    {
        if(SceneManager.GetActiveScene().name == "3_Play")
        {
            if(Application.platform == RuntimePlatform.Android)
            {
                if(state == State.Idle && Input.GetKey(KeyCode.Escape))
                {
                    state = State.Active;
                    close_window.gameObject.SetActive(true);
                    exit_window.gameObject.SetActive(true);
                }
                else if(state == State.Active && Input.GetKey(KeyCode.Escape))
                {
                    SetIdleState();
                    UISetActiveTrue();
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

    // public void GoLobby()
    // {
    //     GameManager.instance.audioManager.ButtonClickSound();
    //     SceneManager.LoadScene(2);
    // }

    // public void SelectMap_1()
    // {
    //     GameManager.instance.playerData.mapNumber = 1;
    //     GameManager.instance.SaveDataToJson();
    //     GoLobby();
    // }

    public void SettingButtonClick()
    {
        state = State.Active;
        close_window.gameObject.SetActive(true);
        setting_window.gameObject.SetActive(true);
        UISetActiveFalse();
    }

    public void UnitButtonClick()
    {
        state = State.Active;
        close_window.gameObject.SetActive(true);
        unit_window.gameObject.SetActive(true);
        UISetActiveFalse();
    }

    public void BuildButtonClick()
    {
        state = State.Active;
        close_window.gameObject.SetActive(true);
        build_window.gameObject.SetActive(true);
        UISetActiveFalse();
    }

    public void MoveButtonClick()
    {
        state = State.Active;
        close_window.gameObject.SetActive(true);
        movemap_window.gameObject.SetActive(true);
        unitInfo_panel.gameObject.SetActive(false);
        foreach(Button b in buttons)
        {
            b.gameObject.SetActive(false);
        }
        CentralProcessor.Instance.currentUnit.isClicked = false;
        CloseUnitInfo();
        SearchWay();
    }

    public void SetIdleState()
    {
        state = State.Idle;
        window = GameObject.FindGameObjectsWithTag("window");
        foreach(GameObject w in window)
        {
            w.gameObject.SetActive(false);
        }
    }

    public void UISetActiveFalse()
    {
        foreach(Button b in buttons)
        {
            b.gameObject.SetActive(false);
        }
        if(CentralProcessor.Instance.currentUnit != null)
        {
            CentralProcessor.Instance.currentUnit.OffReady();
        }
    }

    public void UISetActiveTrue()
    {
        foreach(Button b in buttons)
        {
            b.gameObject.SetActive(true);
        }
    }

    public void PrintErrorMessage(string s)
    {
        errorMessage.gameObject.SetActive(true);
        errorMessage.text = s;
    }

    public void ShowUnitInfo(float m_hp, float c_hp, Sprite illust, string name, int cost)
    {
        unitInfo_panel.gameObject.SetActive(true);
        unit_name.text = name;
        unit_activeCost.text = "COST    " + cost.ToString();
        unit_illust.sprite = illust;
        unit_hp.rectTransform.localScale = new Vector3(c_hp/m_hp,1f,1f);
    }

    public void SearchWay()
    {
        foreach(Button b in mapButtons)
        {
            b.gameObject.GetComponent<Button>().interactable = true;
            int dis = CalculateDistance(CentralProcessor.Instance.currentTile, b.gameObject.GetComponent<MoveUnit>().pairTile);
            b.gameObject.GetComponent<MoveUnit>().cost = dis;
            if(dis == 0 || dis > CentralProcessor.Instance.currentUnit.activeCost)
            {
                b.gameObject.GetComponent<Button>().interactable = false;
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

        CentralProcessor.Instance.CheckUnitArea(CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID,false,CentralProcessor.Instance.currentUnit.myNum,CentralProcessor.Instance.isMaster);
        CentralProcessor.Instance.CheckTileUnits(CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.gameObject.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.myNum, CentralProcessor.Instance.isMaster, false);

        for(int i = 0; i < 3; i++)
        {
            if(isEmpty[i] == false)
            {
                CentralProcessor.Instance.CheckUnitArea(CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID,true,i,CentralProcessor.Instance.isMaster);
                CentralProcessor.Instance.CheckTileUnits(CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, i, CentralProcessor.Instance.isMaster, true);
                CentralProcessor.Instance.currentUnit.transform.position = area[i].position;
                CentralProcessor.Instance.currentUnit.currentTile = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile;
                CentralProcessor.Instance.currentUnit.activeCost -= CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().cost;
                CentralProcessor.Instance.currentUnit = null;
                CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().ChangeColor(Color.white);
                CentralProcessor.Instance.current_moveButton = null;
                CentralProcessor.Instance.uIManager.SetIdleState();
                CentralProcessor.Instance.uIManager.UISetActiveTrue();
                return;
            }
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
