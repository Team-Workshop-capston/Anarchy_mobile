using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

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
    public Button goMain;

    void Start()
    {
        TutorialText = GetComponent<Text>();
        TutorialText.text = "�ȳ��ϼ��� �� �Ƴ�Ű�� ���Ű� ȯ���մϴ�.\n �� ���� Ŭ�����ּ���.";
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
                    TutorialText.text = "�������� �������� ������ �̲��� ��ӵǴ� �������� �¸��ؾ� �մϴ�.\n\n�����Ϸ��� Ŭ���ϼ���.";
                    ClickNum += 1;
                    break;
                case -1:
                    TutorialText.text = "�������� �������̽��� ���� ������ �帮�ڽ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 0:
                    UIs[0].transform.SetAsLastSibling();
                    TutorialText.text = "���� ���� ��ũ�� ���� �� ǥ��, �� Ÿ�̸��Դϴ�. �̴� �������� ������ ����������, ���� �� ���� ������, ���� �󸶳� ���Ҵ����� ǥ���մϴ�.";
                    ClickNum += 1;
                    break;
                case 1:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[1].transform.SetAsLastSibling();
                    TutorialText.text = "�ܾ�â�Դϴ�. �������� ���� �󸶳� ���Ҵ��� ǥ���մϴ�.";
                    ClickNum += 2;
                    break;
                case 2:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[2].transform.SetAsLastSibling();
                    TutorialText.text = "��Ÿ�̸��Դϴ�. �������� ���� �󸶳� ���Ҵ��� ǥ���մϴ�. ���� ���ѽð��� 3���Դϴ�.";
                    ClickNum += 1;
                    break;
                case 3:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[3].transform.SetAsLastSibling();
                    TutorialText.text = "���� ���� ��ư�Դϴ�. �������� �� ��ư�� ���� ���ο� ������ ���� �� �ֽ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 4:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[4].transform.SetAsLastSibling();
                    TutorialText.text = "�ǹ� �Ǽ� ��ư�Դϴ�. �������� �� ��ư�� ���� ���ο� �ǹ��� ���� �� �ֽ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 5:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[5].transform.SetAsLastSibling();
                    TutorialText.text = "�̴ϸ��Դϴ�. �������� �� �̴ϸ��� ���� ȭ���� �̵��ϰ� ������ ��ġ�� �� �� �ֽ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 6:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[6].transform.SetAsLastSibling();
                    TutorialText.text = "�� �����Դϴ�. �������� �� ��ư�� ���� ��뿡�� ���� �ѱ� �� �ֽ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 7:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[7].transform.SetAsLastSibling();
                    TutorialText.text = "���� ��ư�Դϴ�. �������� �� ��ư�� ���� ������ ������ �� �ֽ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 8:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    UIs[8].transform.SetAsLastSibling();
                    TutorialText.text = "���� ���� ��ư�Դϴ�. �������� �� ��ư�� ���� ������ ������ �� �ֽ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 9:
                    UIs[9].transform.SetAsLastSibling();
                    UIs[10].transform.SetAsLastSibling();
                    panelColor = UIs[9].GetComponent<Image>().color;
                    UIs[9].GetComponent<Image>().color = new Color(panelColor.r, panelColor.g, panelColor.b, 0f);
                    Units[0].SetActive(true);
                    TutorialText.text = "�̰��� �������� ������ �����Դϴ�. �������� �� ���ֵ��� ���� ������ �����ϰ� ���� ������ ������ �մϴ�.";
                    ClickNum += 1;
                    break;
                case 10:
                    TutorialText.text = "���ֿ��� 3���� ������ �ֽ��ϴ�. �� ������ ���� �����Դϴ�. �� Ưȭ�� �������� ������ ����, ������ �� �ڽ��� �������� �� ���ٸ� ���ظ� �Խ��ϴ�.";
                    ClickNum += 1;
                    break;
                case 11:
                    ButtonLimit = true;
                    UButtonLimit = true;
                    TutorialText.text = "���� ���� ��ư�� Ŭ���ϼ���.";
                    UIs[3].transform.SetAsLastSibling();
                    break;
                case 13:
                    UButtonLimit = true;
                    TutorialText.text = "�ٽ� �ѹ� ���� ���� ��ư�� Ŭ���ϼ���.";
                    UIs[3].transform.SetAsLastSibling();
                    Unit2nd = true;
                    break;
                case 15:
                    TutorialText.text = "���� ������ �ִ� ���� ������ �����̶�� �մϴ�. �������� �ٽɱ���, �߸�����, ���� ������ �ֽ��ϴ�. ���� ������ �ִ� ������ �ٽ� �����Դϴ�.";
                    ClickNum++;
                    break;
                case 16:
                    TutorialText.text = "�ٽ� ������ �ϴ� 40�� ���� �����ϸ�, �ٽ� ������ ���ɴ����� ���, ���ӿ��� �й��ϰ� �˴ϴ�.";
                    ClickNum++;
                    break;
                case 17:
                    BButtonLimit = true;
                    Debug.Log(BButtonLimit);
                    TutorialText.text = "���� ���� ��ư�� ����������";
                    UIs[4].transform.SetAsLastSibling();
                    ClickNum++;
                    break;
                case 20:
                    TutorialText.text = "�ǹ��� ���¿��� ������ �ִ� ��ҷ�, �� �Ͽ� ��� ��ȭ ����, �� ������ ������ ����, ���ְ� �ǹ��� ����µ� ��� ��� ����, �� 3������ �ǹ��� �ֽ��ϴ�.";
                    ClickNum++;
                    break;
                case 21:
                    TutorialText.text = "���� ù��° ������ Ŭ���غ�����.";
                    UnitLimit = true;
                    UIs[9].SetActive(false);
                    ClickNum++;
                    break;
                case 23:
                    TutorialText.text = "���� ���� ��ư�� �̵� ��ư�� ����������.";
                    ClickNum++;
                    break;
                case 24:
                    ClickNum++;
                    break;
                case 26:
                    TutorialText.text = "���� ���� ����� �˷��帮�ڽ��ϴ�.";
                    Units[4].SetActive(true);
                    ClickNum++;
                    break;
                case 27:
                    TutorialText.text = "�ڽ��� ������ Ŭ���ϰ� ���� ��ư�� Ŭ���ϰ� �� ������ Ŭ���غ�����.";
                    UnitSecond = true;
                    ButtonLimit = true;
                    ClickNum++;
                    break;
                case 29:
                    TutorialText.text = "�̹����� ���� ���ɰ� ������� ���ؼ� �˷��帮�ڽ��ϴ�.";
                    ClickNum++;
                    break;
                case 30:
                    TutorialText.text = "�� ���� ��ư�� ����������.";
                    ButtonLimit = true;
                    TurnNext = true;
                    break;
                case 32:
                    TutorialText.text = "��� ��Ÿ�� ����� ��ư�� Ŭ���غ�����.";
                    Dicision = true;
                    ClickNum++;
                    break;
                case 34:
                    TutorialText.text = "�ʷϻ� ��ư �� �ϳ��� ��� �����ϼ���. ������ ��ư�� ������ �� ���� �׸��Դϴ�.";
                    ClickNum++;
                    break;
                case 36:
                    TutorialText.text = "�̰����� Ʃ�丮���� ��ġ�ڽ��ϴ�. ������ ���ϴ�.";
                    UIs[11].SetActive(false);
                    UIs[22].SetActive(false);
                    goMain.gameObject.SetActive(true);
                    break;
            }
        }
    }

    public void GoMain()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        SceneManager.LoadScene(0);
    }
}
