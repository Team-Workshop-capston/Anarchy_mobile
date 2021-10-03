using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.EventSystems;

public class TextManager : MonoBehaviour
{
    public Text TutorialText;
    public int ClickNum = 0;
    int emphasis_int = 0;
    GameObject Symbol;
    GameObject Unit_button;
    public GameObject cube;
    
    void Start()
    {
        TutorialText = GetComponent<Text>();
        Symbol = GameObject.Find("Team_symbol");
        Unit_button = GameObject.Find("Unit_button");
        TutorialText.text = "안녕하세요 더 아나키에 오신걸 환영합니다.\n 이 곳을 클릭해주세요.";
    }

    void Update()
    {
        SetText();
        Debug.Log(emphasis_int);
    }

    void SetText()
    {
        if(Input.GetMouseButtonDown(0))
        {
            ClickNum += 1;
            switch (ClickNum)
            {
                case 1:
                    TutorialText.text = "여러분은 여러분의 세력을 이끌어 계속되는 암투에서 승리해야 합니다.";
                    break;
                case 2:
                    TutorialText.text = "이제부터 인터페이스에 대해 설명해 드리겠습니다.";
                    break;
                case 3:
                    emphasis_int = Symbol.transform.GetSiblingIndex();
                    Symbol.transform.SetAsLastSibling();
                    TutorialText.text = "먼저 세력 마크입니다.이는 여러분의 세력이 무엇인지를 표시합니다.";
                    break;
                case 4:
                    Symbol.transform.SetSiblingIndex(emphasis_int);
                    emphasis_int = Unit_button.transform.GetSiblingIndex();
                    Unit_button.transform.SetAsLastSibling();
                    TutorialText.text = "유닛 생산 버튼입니다. 여러분은 이 버튼을 눌러 새로운 유닛을 만들 수 있습니다.";
                    break;
                case 5:
                    Unit_button.transform.SetSiblingIndex(emphasis_int);
                    cube.SetActive(true);
                    TutorialText.text = "복귀 확인";
                    break;
                case 6:
                    cube.SetActive(false);
                    TutorialText.text = "마지막 체크";
                    break;
            }
        }
    }
}