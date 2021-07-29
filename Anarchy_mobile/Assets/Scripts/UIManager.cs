using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{
    public Image    ChooseforcePanel;
    public Image    ChoosemapPanel;
    public Image    SkillPanel;
    public Image    UnitPanel;
    public Image    BuildPanel;
    public Image    ExitPop;
    public Image    s_map; // 작은 지도
    public Image    b_map; // 이동버튼 눌렀을 때 나오는 큰 지도
    public Button   unit_moveBtn; // 유닛 마우스(1)클릭하면 나오는 이동 버튼
    public Text     money;
    public Text     errorMessage; // 유닛이나 건물을 생산할 때 재화,자리가 부족하면 나오는 에러메세지
    float           time;
    float           start = 1f;
    float           end = 0f;
    public float    FadeTime = 1f;

    public void NewgameBtnClick()
    {
        SceneManager.LoadScene(1);
        //GameManager.instance.audioManager.ButtonClickSound();
    }

    public void ExitGame()
    {
        //GameManager.instance.audioManager.ButtonClickSound();
        Application.Quit();
    }
}
