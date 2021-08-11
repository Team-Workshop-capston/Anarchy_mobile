using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
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
    IEnumerator     enumerator;
    public Image    unitInfo_panel;
    public Image    unit_illust;
    public Image    unit_hp;
    public Text      unit_activeCost;
    public Text     unit_name;

    enum State { Ready, End, Idle, Active };
    State state = State.Ready;

    private void Update()
    {
        if(Application.platform == RuntimePlatform.Android)
        {
            if(state == State.Idle && Input.GetKey(KeyCode.Escape))
            {
                state = State.Active;
                exit_window.gameObject.SetActive(true);
            }
            else if(state == State.Active && Input.GetKey(KeyCode.Escape))
            {
                SetIdleState();
                UISetActiveTrue();
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
        ChooseforcePanel.gameObject.SetActive(false);
        ChoosemapPanel.gameObject.SetActive(true);
    }

    public void GoLobby()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        SceneManager.LoadScene(2);
    }

    public void SelectMap_1()
    {
        GameManager.instance.playerData.mapNumber = 1;
        GameManager.instance.SaveDataToJson();
    }

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
        //unit_window.gameObject.SetActive(true);
        //unit_window_close.gameObject.SetActive(true);
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
        UISetActiveFalse();
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

    public void CloseUnitInfo()
    {
        unitInfo_panel.gameObject.SetActive(false);
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

    public void Test()
    {
        Debug.Log("yeah");
    }
}
