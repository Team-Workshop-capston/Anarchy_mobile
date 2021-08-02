using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    public Image    ChooseforcePanel;
    public Image    ChoosemapPanel;
    public Button   close_window;
    public Image    unit_window;
    public Image    build_window;
    public Image    exit_window;
    public Image    setting_window;
    public Button[] buttons;
    public Image    s_map; // 작은 지도
    public Image    b_map; // 이동버튼 눌렀을 때 나오는 큰 지도
    public Button   unit_moveBtn; // 유닛 마우스(1)클릭하면 나오는 이동 버튼
    public Text     money;
    public Text     errorMessage; // 유닛이나 건물을 생산할 때 재화,자리가 부족하면 나오는 에러메세지
    float           time;
    float           start = 1f;
    float           end = 0f;
    public float    FadeTime = 1f;
    GameObject[] window;

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

    public void SelectSociety()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        GameManager.instance.playerData.forceNumber = 1;
        GameManager.instance.SaveDataToJson();
        ChooseforcePanel.gameObject.SetActive(false);
        ChoosemapPanel.gameObject.SetActive(true);
    }

    public void SelectNewWave()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        GameManager.instance.playerData.forceNumber = 2;
        GameManager.instance.SaveDataToJson();
        ChooseforcePanel.gameObject.SetActive(false);
        ChoosemapPanel.gameObject.SetActive(true);
    }

    public void SelectMafia()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        GameManager.instance.playerData.forceNumber = 3;
        GameManager.instance.SaveDataToJson();
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
}
