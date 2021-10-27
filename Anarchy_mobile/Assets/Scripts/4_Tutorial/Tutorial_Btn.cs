using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Tutorial_Btn : MonoBehaviour
{
    public TutorialMain tutorialMain;
    public Color panelColor;
    int turnnum = 0;

    public void UnitBtn()
    {
        if (tutorialMain.UButtonLimit)
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
                tutorialMain.UButtonLimit = false;
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
                tutorialMain.Money.text = "800";
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
            tutorialMain.Money.text = "550";
            tutorialMain.TutorialText.text = "이 유닛은 영웅 유닛입니다. 공방능력이 모두 좋은 유닛으로 가장 강력한 유닛입니다.";
            tutorialMain.ClickNum++;
        }
    }
    public void BuildBtn()
    {
        if (tutorialMain.BButtonLimit)
        {
            tutorialMain.TutorialText.text = "건물 생산창입니다. 첫번째 버튼을 클릭해보세요.";
            tutorialMain.UIs[9].transform.SetAsLastSibling();
            tutorialMain.UIs[11].transform.SetAsLastSibling();
            tutorialMain.UIs[11].SetActive(true);
            tutorialMain.UIs[13].SetActive(true);
            tutorialMain.UIs[13].transform.SetAsLastSibling();
            tutorialMain.UIs[10].transform.SetAsLastSibling();
            tutorialMain.ClickNum++;
            tutorialMain.BButtonLimit = false;
        }

    }
    public void Build1Btn()
    {
        if (tutorialMain.ButtonLimit)
        {
            tutorialMain.TutorialText.text = "이렇게 건물을 건설할 수 있습니다.";
            tutorialMain.Money.text = "250";
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
            if (tutorialMain.UnitSecond)
            {
                tutorialMain.TutorialText.text = "공격 버튼을 클릭해보세요.";
                tutorialMain.UIs[14].SetActive(true);
                tutorialMain.UIs[15].SetActive(true);
                tutorialMain.UnitLimit = false;
            }
            else
            {
                tutorialMain.TutorialText.text = "유닛 정보창입니다. 유닛의 성능과 현재 상태를 볼 수 있고, 유닛에게 이동, 전투 명령을 내릴 수 있습니다.\n건물도 마찬가지로 클릭하면 정보창이 나타납니다.";
                tutorialMain.UIs[14].SetActive(true);
                tutorialMain.UIs[15].SetActive(true);
                tutorialMain.ClickNum++;
            }
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
            tutorialMain.UnitLimit = false;
        }
    }
    public void LocateBtn()
    {
        tutorialMain.TutorialText.text = "이동할 곳이 선택되었습니다. 우측 하단의 결정 버튼을 눌러주세요.";
        panelColor = tutorialMain.UIs[17].GetComponent<Image>().color;
        tutorialMain.UIs[17].GetComponent<Image>().color = new Color(0, 0, 255, 255f);
        tutorialMain.BtnClicked = true;
        tutorialMain.UnitLimit = true;
    }
    public void MvokBtn()
    {
        if (tutorialMain.UnitLimit)
        {
            tutorialMain.TutorialText.text = "유닛이 이동되었습니다.\n튜토리얼 중에는 화면이 자동으로 이동하나 실제 게임에서는 구역을 클릭하여 이동하여야 합니다.";
            tutorialMain.CameraView.position = new Vector3(-3, 6, -12);
            tutorialMain.UIs[11].SetActive(false);
            tutorialMain.UIs[16].SetActive(false);
            tutorialMain.Units[0].SetActive(false);
            tutorialMain.Units[3].SetActive(true);
            tutorialMain.ButtonLimit = false;
            tutorialMain.ClickNum++;
        }
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
        {
            if (tutorialMain.TurnNext)
            {
                switch(turnnum)
                {
                    case 0:
                        tutorialMain.TutorialText.text = "1번 클릭하셨습니다. 한번 더 클릭하세요.";
                        tutorialMain.ClickNum++;
                        turnnum++;
                        break;
                    case 1:
                        tutorialMain.TutorialText.text = "2번 클릭하셨습니다. 한번 더 클릭하세요.";
                        turnnum++;
                        break;
                    case 2:
                        tutorialMain.TutorialText.text = "3번 클릭하셨습니다. 이제 이 구역은 점령되었습니다.";
                        tutorialMain.UIs[18].SetActive(true);
                        tutorialMain.UIs[19].SetActive(true);
                        tutorialMain.TurnNext = false;
                        tutorialMain.ClickNum++;
                        break;
                }
            }
        }
    }
    public void SettingBtn()
    {
        if (tutorialMain.ButtonLimit)
            tutorialMain.SettingBtn = true;
    }
    public void Eunit3DBtn()
    {
        if (tutorialMain.UnitSecond)
        {
            tutorialMain.TutorialText.text = "이렇게 전투를 진행할 수 있습니다.\n실제 게임에서는 체력이 모두 소진되면 유닛이 사라집니다.";
            tutorialMain.Units[4].SetActive(false);
            tutorialMain.UIs[14].SetActive(false);
            tutorialMain.UIs[15].SetActive(false);
            tutorialMain.ButtonLimit = false;
            tutorialMain.UnitSecond = false;
            tutorialMain.ClickNum++;
        }
     }
    public void AtkBtn()
    {
        if (tutorialMain.UnitSecond)
        {
            tutorialMain.TutorialText.text = "적 유닛을 클릭해보세요.";
        }
    }
    public void DisicionBtn()
    {
        if(tutorialMain.Dicision)
        {
            tutorialMain.TutorialText.text = "디시전 화면입니다.";
            tutorialMain.UIs[21].SetActive(true);
            tutorialMain.ClickNum++;
        }
    }
    public void DisicionSltBtn()
    {
        tutorialMain.TutorialText.text = "디시전을 선택하셨습니다. 이 화면은 선택한 디시전의 효과를 알려주는 화면입니다.\n\n클릭해서 계속하세요.";
        tutorialMain.UIs[21].SetActive(false);
        tutorialMain.UIs[11].SetActive(true);
        tutorialMain.UIs[22].SetActive(true);
        tutorialMain.UIs[9].SetActive(true);
        tutorialMain.UIs[9].transform.SetAsLastSibling();
        tutorialMain.UIs[10].transform.SetAsLastSibling();
        tutorialMain.ClickNum++;
    }

}
