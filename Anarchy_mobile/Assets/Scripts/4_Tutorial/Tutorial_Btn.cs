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
                tutorialMain.TutorialText.text = "�̹����� ����° ��ư�� Ŭ���غ�����.";
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
                tutorialMain.TutorialText.text = "���� ����â�Դϴ�. �ι�° ��ư�� Ŭ���غ�����.";
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
                tutorialMain.TutorialText.text = "�� ������ ���Ÿ� �����Դϴ�. ���ݿ� Ưȭ�� �������� ���ݷ��� �����ϴ�.";
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
            tutorialMain.TutorialText.text = "�� ������ ���� �����Դϴ�. ����ɷ��� ��� ���� �������� ���� ������ �����Դϴ�.";
            tutorialMain.ClickNum++;
        }
    }
    public void BuildBtn()
    {
        if (tutorialMain.BButtonLimit)
        {
            tutorialMain.TutorialText.text = "�ǹ� ����â�Դϴ�. ù��° ��ư�� Ŭ���غ�����.";
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
            tutorialMain.TutorialText.text = "�̷��� �ǹ��� �Ǽ��� �� �ֽ��ϴ�.";
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
                tutorialMain.TutorialText.text = "���� ��ư�� Ŭ���غ�����.";
                tutorialMain.UIs[14].SetActive(true);
                tutorialMain.UIs[15].SetActive(true);
                tutorialMain.UnitLimit = false;
            }
            else
            {
                tutorialMain.TutorialText.text = "���� ����â�Դϴ�. ������ ���ɰ� ���� ���¸� �� �� �ְ�, ���ֿ��� �̵�, ���� ����� ���� �� �ֽ��ϴ�.\n�ǹ��� ���������� Ŭ���ϸ� ����â�� ��Ÿ���ϴ�.";
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
            tutorialMain.TutorialText.text = "���� �̵� �̴ϸ��Դϴ�. ������ �̵��� ���� ���� �� �ֽ��ϴ�. ǥ�õ� �κ��� Ŭ���غ�����.";
            tutorialMain.UIs[14].SetActive(false);
            tutorialMain.UIs[15].SetActive(false);
            tutorialMain.UIs[11].SetActive(true);
            tutorialMain.UIs[16].SetActive(true);
            tutorialMain.UnitLimit = false;
        }
    }
    public void LocateBtn()
    {
        tutorialMain.TutorialText.text = "�̵��� ���� ���õǾ����ϴ�. ���� �ϴ��� ���� ��ư�� �����ּ���.";
        panelColor = tutorialMain.UIs[17].GetComponent<Image>().color;
        tutorialMain.UIs[17].GetComponent<Image>().color = new Color(0, 0, 255, 255f);
        tutorialMain.BtnClicked = true;
        tutorialMain.UnitLimit = true;
    }
    public void MvokBtn()
    {
        if (tutorialMain.UnitLimit)
        {
            tutorialMain.TutorialText.text = "������ �̵��Ǿ����ϴ�.\nƩ�丮�� �߿��� ȭ���� �ڵ����� �̵��ϳ� ���� ���ӿ����� ������ Ŭ���Ͽ� �̵��Ͽ��� �մϴ�.";
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
                        tutorialMain.TutorialText.text = "1�� Ŭ���ϼ̽��ϴ�. �ѹ� �� Ŭ���ϼ���.";
                        tutorialMain.ClickNum++;
                        turnnum++;
                        break;
                    case 1:
                        tutorialMain.TutorialText.text = "2�� Ŭ���ϼ̽��ϴ�. �ѹ� �� Ŭ���ϼ���.";
                        turnnum++;
                        break;
                    case 2:
                        tutorialMain.TutorialText.text = "3�� Ŭ���ϼ̽��ϴ�. ���� �� ������ ���ɵǾ����ϴ�.";
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
            tutorialMain.TutorialText.text = "�̷��� ������ ������ �� �ֽ��ϴ�.\n���� ���ӿ����� ü���� ��� �����Ǹ� ������ ������ϴ�.";
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
            tutorialMain.TutorialText.text = "�� ������ Ŭ���غ�����.";
        }
    }
    public void DisicionBtn()
    {
        if(tutorialMain.Dicision)
        {
            tutorialMain.TutorialText.text = "����� ȭ���Դϴ�.";
            tutorialMain.UIs[21].SetActive(true);
            tutorialMain.ClickNum++;
        }
    }
    public void DisicionSltBtn()
    {
        tutorialMain.TutorialText.text = "������� �����ϼ̽��ϴ�. �� ȭ���� ������ ������� ȿ���� �˷��ִ� ȭ���Դϴ�.\n\nŬ���ؼ� ����ϼ���.";
        tutorialMain.UIs[21].SetActive(false);
        tutorialMain.UIs[11].SetActive(true);
        tutorialMain.UIs[22].SetActive(true);
        tutorialMain.UIs[9].SetActive(true);
        tutorialMain.UIs[9].transform.SetAsLastSibling();
        tutorialMain.UIs[10].transform.SetAsLastSibling();
        tutorialMain.ClickNum++;
    }

}
