using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class TutorialMain : MonoBehaviour
{
    public Text TutorialText;
    public Text Money;
    public int ClickNum = -3;
    public GameObject[] Units;
    public GameObject[] UIs;
    public GameObject Building;
    public Transform CameraView;
    string BtnName;
    public bool UnitBtn, Unit2Btn, Unit3Btn, BuildBtn, Build1Btn, MinimapBtn, Minimap2Btn, Minimap3Btn, TurnNextBtn, SettingBtn, Unit3DBtn, MvBtn, AtkBtn, MvokBtn, LocateBtn, Eunit3DBtn = false;
    public bool ButtonLimit = false;
    public bool UButtonLimit = false;
    public bool BButtonLimit = false;
    public Color panelColor;
    public bool Unit2nd = false;
    public bool UnitLimit = false;
    public bool BtnClicked = false;
    public bool UnitSecond = false;
    public bool TurnNext = false;
    public bool Dicision = false;


    void Start()
    {
        TutorialText = GetComponent<Text>();
        TutorialText.text = "안녕하세요 더 아나키에 오신걸 환영합니다.\n 이 곳을 클릭해주세요.";
    }

    void Update()
    {
        SetText();
    }
    void SetText()
    {
        if (Input.GetMouseButtonDown(0))
        {
            if (ClickNum == -3)
            {
                ClickNum += 1;
            }
            switch (ClickNum)
            {
                case -2:
                    TutorialText.text = "여러분은 여러분의 세력을 이끌어 계속되는 암투에서 승리해야 합니다.\n\n진행하려면 클릭하세요.";
                    ClickNum += 1;
                    break;
                case -1:
                    TutorialText.text = "이제부터 인터페이스에 대해 설명해 드리겠습니다.";
                    ClickNum += 1;
                    break;
                case 0:
                    UIs[0].transform.SetAsLastSibling();
                    TutorialText.text = "먼저 세력 마크와 현재 턴 표시, 턴 타이머입니다. 이는 여러분의 세력이 무엇인지를, 현재 턴 수가 얼마인지, 턴이 얼마나 남았는지를 표시합니다.";
                    ClickNum += 1;
                    break;
                case 1:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[1].transform.SetAsLastSibling();
                    TutorialText.text = "잔액창입니다. 여러분의 돈이 얼마나 남았는지 표시합니다.";
                    ClickNum += 2;
                    break;
                case 2:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[2].transform.SetAsLastSibling();
                    TutorialText.text = "턴타이머입니다. 여러분의 턴이 얼마나 남았는지 표시합니다. 턴의 제한시간은 3분입니다.";
                    ClickNum += 1;
                    break;
                case 3:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[3].transform.SetAsLastSibling();
                    TutorialText.text = "유닛 생산 버튼입니다. 여러분은 이 버튼을 눌러 새로운 유닛을 만들 수 있습니다.";
                    ClickNum += 1;
                    break;
                case 4:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[4].transform.SetAsLastSibling();
                    TutorialText.text = "건물 건설 버튼입니다. 여러분은 이 버튼을 눌러 새로운 건물을 만들 수 있습니다.";
                    ClickNum += 1;
                    break;
                case 5:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[5].transform.SetAsLastSibling();
                    TutorialText.text = "미니맵입니다. 여러분은 이 미니맵을 통해 화면을 이동하고 유닛의 위치를 알 수 있습니다.";
                    ClickNum += 1;
                    break;
                case 6:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[6].transform.SetAsLastSibling();
                    TutorialText.text = "턴 종료입니다. 여러분은 이 버튼을 눌러 상대에게 턴을 넘길 수 있습니다.";
                    ClickNum += 1;
                    break;
                case 7:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[7].transform.SetAsLastSibling();
                    TutorialText.text = "설정 버튼입니다. 여러분은 이 버튼을 눌러 설정을 조절할 수 있습니다.";
                    ClickNum += 1;
                    break;
                case 8:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[8].transform.SetAsLastSibling();
                    TutorialText.text = "게임 종료 버튼입니다. 여러분은 이 버튼을 눌러 게임을 종료할 수 있습니다.";
                    ClickNum += 1;
                    break;
                case 9:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    panelColor = UIs[9].GetComponent<Image>().color;
                    UIs[9].GetComponent<Image>().color = new Color(panelColor.r, panelColor.g, panelColor.b, 0f);
                    Units[0].SetActive(true);
                    TutorialText.text = "이것이 여러분이 조종할 유닛입니다. 여러분은 이 유닛들을 통해 구역을 점령하고 상대와 전투를 벌여야 합니다.";
                    ClickNum += 1;
                    break;
                case 10:
                    TutorialText.text = "유닛에는 3가지 종류가 있습니다. 이 유닛은 근접 유닛입니다. 방어에 특화된 유닛으로 방어력이 높고, 공격할 때 자신의 전투력이 더 낮다면 피해를 입습니다.";
                    ClickNum += 1;
                    break;
                case 11:
                    ButtonLimit = true;
                    UButtonLimit = true;
                    TutorialText.text = "유닛 생산 버튼을 클릭하세요.";
                    UIs[3].transform.SetAsLastSibling();
                    break;
                case 13:
                    UButtonLimit = true;
                    TutorialText.text = "다시 한번 유닛 생산 버튼을 클릭하세요.";
                    UIs[3].transform.SetAsLastSibling();
                    Unit2nd = true;
                    break;
                case 15:
                    TutorialText.text = "현재 유닛이 있는 맵의 공간을 구역이라고 합니다. 구역에는 핵심구역, 중립구역, 점령 구역이 있습니다. 현재 유닛이 있는 구역은 핵심 구역입니다.";
                    ClickNum++;
                    break;
                case 16:
                    TutorialText.text = "핵심 구역은 턴당 40의 돈을 제공하며, 핵심 구역이 점령당했을 경우, 게임에서 패배하게 됩니다.";
                    ClickNum++;
                    break;
                case 17:
                    BButtonLimit = true;
                    Debug.Log(BButtonLimit);
                    TutorialText.text = "이제 빌드 버튼을 눌러보세요";
                    UIs[4].transform.SetAsLastSibling();
                    ClickNum++;
                    break;
                case 20:
                    TutorialText.text = "건물은 세력에게 버프를 주는 요소로, 한 턴에 얻는 재화 증가, 각 유닛의 전투력 증가, 유닛과 건물을 만드는데 드는 비용 감소, 총 3가지의 건물이 있습니다.";
                    ClickNum++;
                    break;
                case 21:
                    TutorialText.text = "이제 첫번째 유닛을 클릭해보세요.";
                    UnitLimit = true;
                    UIs[9].SetActive(false);
                    ClickNum++;
                    break;
                case 23:
                    TutorialText.text = "이제 윗쪽 버튼인 이동 버튼을 눌러보세요.";
                    ClickNum++;
                    break;
                case 24:
                    ClickNum++;
                    break;
                case 26:
                    TutorialText.text = "이제 전투 방식을 알려드리겠습니다.";
                    Units[4].SetActive(true);
                    ClickNum++;
                    break;
                case 27:
                    TutorialText.text = "자신의 유닛을 클릭하고 공격 버튼을 클릭하고 적 유닛을 클릭해보세요.";
                    UnitSecond = true;
                    ButtonLimit = true;
                    ClickNum++;
                    break;
                case 29:
                    TutorialText.text = "이번에는 구역 점령과 디시전에 대해서 알려드리겠습니다.";
                    ClickNum++;
                    break;
                case 30:
                    TutorialText.text = "턴 종료 버튼을 눌러보세요.";
                    ButtonLimit = true;
                    TurnNext = true;
                    break;
                case 32:
                    TutorialText.text = "가운데 나타난 디시전 버튼을 클릭해보세요.";
                    Dicision = true;
                    ClickNum++;
                    break;
                case 34:
                    TutorialText.text = "초록색 버튼 중 하나를 골라 선택하세요. 빨간색 버튼은 선택할 수 없는 항목입니다.";
                    ClickNum++;
                    break;
                case 36:
                    TutorialText.text = "이것으로 튜토리얼을 마치겠습니다. 무운을 빕니다.";
                    UIs[11].SetActive(false);
                    UIs[22].SetActive(false);
                    break;
            }
        }
    }
}
