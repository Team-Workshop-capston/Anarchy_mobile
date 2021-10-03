using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial_Btn : MonoBehaviour
{
    public TutorialMain tutorialMain;

    public void UnitBtn()
    {
        if (tutorialMain.ButtonLimit)
        {
            if (tutorialMain.Unit2nd)
            {
                tutorialMain.TutorialText.text = "이번에는 세번째 버튼을 클릭해보세요.";
                tutorialMain.UIs[9].transform.SetAsLastSibling();
                tutorialMain.UIs[11].transform.SetAsLastSibling();
                tutorialMain.UIs[11].SetActive(true);
                tutorialMain.UIs[12].SetActive(true);
                tutorialMain.UIs[12].transform.SetAsLastSibling();
                tutorialMain.UIs[10].transform.SetAsLastSibling();
                tutorialMain.ClickNum++;
            }
            else
            {
                tutorialMain.TutorialText.text = "유닛 생산창입니다. 두번째 버튼을 클릭해보세요.";
                tutorialMain.UIs[9].transform.SetAsLastSibling();
                tutorialMain.UIs[11].transform.SetAsLastSibling();
                tutorialMain.UIs[11].SetActive(true);
                tutorialMain.UIs[12].SetActive(true);
                tutorialMain.UIs[12].transform.SetAsLastSibling();
                tutorialMain.UIs[10].transform.SetAsLastSibling();
                tutorialMain.ClickNum++;
            }
        }
        
    }
    public void Unit2Btn()
    {
        if (tutorialMain.ButtonLimit)
        {
                tutorialMain.UIs[11].SetActive(false);
                tutorialMain.UIs[12].SetActive(false);
                tutorialMain.Units[1].SetActive(true);
                tutorialMain.ClickNum++;
                tutorialMain.TutorialText.text = "이 유닛은 원거리 유닛입니다. 공격에 특화된 유닛으로 공격력이 높습니다.";
        }
    }
    public void Unit3Btn()
    {
        if (tutorialMain.ButtonLimit)
        {
            tutorialMain.UIs[11].SetActive(false);
            tutorialMain.UIs[12].SetActive(false);
            tutorialMain.Units[2].SetActive(true);
            tutorialMain.TutorialText.text = "이 유닛은 영웅 유닛입니다. 공방능력이 모두 좋은 유닛으로 가장 강력한 유닛입니다.";
            tutorialMain.ClickNum++;
        }
    }
    public void BuildBtn()
    {
        if (tutorialMain.ButtonLimit)
        {
            tutorialMain.TutorialText.text = "건물 생산창입니다. 첫번째 버튼을 클릭해보세요.";
            tutorialMain.UIs[9].transform.SetAsLastSibling();
            tutorialMain.UIs[11].transform.SetAsLastSibling();
            tutorialMain.UIs[11].SetActive(true);
            tutorialMain.UIs[13].SetActive(true);
            tutorialMain.UIs[13].transform.SetAsLastSibling();
            tutorialMain.UIs[10].transform.SetAsLastSibling();
            tutorialMain.ClickNum++;
        }
            tutorialMain.BuildBtn = true;
    }
    public void Build1Btn()
    {
        if (tutorialMain.ButtonLimit)
        {
            tutorialMain.TutorialText.text = "이렇게 건물을 건설할 수 있습니다.";
            tutorialMain.Building.SetActive(true);
            tutorialMain.UIs[11].SetActive(false);
            tutorialMain.UIs[13].SetActive(false);
            tutorialMain.ClickNum++;
        }
    }
    public void Unit3DBtn()
    {
        if (tutorialMain.ButtonLimit)
        {
            Debug.Log(tutorialMain.ClickNum);
            tutorialMain.TutorialText.text = "유닛 정보창입니다. 유닛의 성능과 현재 상태를 볼 수 있고, 유닛에게 이동, 전투 명령을 내릴 수 있습니다.";
            tutorialMain.UIs[14].SetActive(true);
            tutorialMain.UIs[15].SetActive(true);
            tutorialMain.ClickNum++;
        }
    }
    public void MvBtn()
    {
        if (tutorialMain.UnitLimit)
        {
            tutorialMain.TutorialText.text = "유닛 이동 미니맵입니다. 유닛의 이동할 곳을 정할 수 있습니다. 표시된 부분을 클릭해보세요.";
            tutorialMain.UIs[14].SetActive(false);
            tutorialMain.UIs[15].SetActive(false);
            tutorialMain.UIs[11].SetActive(true);
            tutorialMain.UIs[16].SetActive(true);
        }
    }
    /*
    public void LocateBtn()
    {
        tutorialMain.TutorialText.text = "이동할 곳이 선택되었습니다. 우측 하단의 결정 버튼을 눌러주세요.";
        tutorialMain.BtnClicked = true;
    }
    */
    public void MvokBtn()
    {
        tutorialMain.ClickNum++;
    }
    public void MinimapBtn()
    {
        if (tutorialMain.ButtonLimit)
            tutorialMain.MinimapBtn = true;
    }
    public void Minimap2Btn()
    {
        if (tutorialMain.ButtonLimit)
            tutorialMain.Minimap2Btn = true;
    }
    public void Minimap3Btn()
    {
        if (tutorialMain.ButtonLimit)
            tutorialMain.Minimap3Btn = true;
    }
    public void TurnNextBtn()
    {
        if (tutorialMain.ButtonLimit)
            tutorialMain.TurnNextBtn = true;
    }
    public void SettingBtn()
    {
        if (tutorialMain.ButtonLimit)
            tutorialMain.SettingBtn = true;
    }
    public void AtkBtn()
    {

    }

}
