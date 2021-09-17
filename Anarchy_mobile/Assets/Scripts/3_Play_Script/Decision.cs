using System.Diagnostics.SymbolStore;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Decision : MonoBehaviourPun
{
    public Dictionary<int, Actions> actionMap;
    public DecisionSituation decisionSituation;
    public Image DecisionPanel;
    public Text DecisionName;
    public Image SituationImage;
    public Text DecisionDesc;
    public Text decisionBtn_1;
    public Text decisionBtn_2;
    public Text decisionBtn_3;
    public int[] num;
    public int situationNum;
    string buff_desc;
    public Sprite[] decision_IllustSprite;
    public GameObject decision_list;
    public GameObject decision_Illust;

    private void Start()
    {
        actionMap = new Dictionary<int, Actions>();

        actionMap.Add(0, new Actions("투항한 적은 우리의 동료야! 받아들여준다. 밥도 주고, 재워도 주고... (소사이어티 불가)", "군식구가 늘어났습니다.", 10));
        actionMap.Add(1, new Actions("미심쩍은 놈은 필요 없다. 죽여버린다. (뉴웨이브 불가)", "세력간의 결속이 다져지는 계기가 되었습니다.", 1));
        actionMap.Add(2, new Actions("딱 봐도 어려보인다. 어린이는 좀 더 커서 오세요, 돌아가! (마피아 불가)", "마음이 훈훈해졌습니다.", 13));
        actionMap.Add(3, new Actions("마침 화장실 청소당번이 도망갔지 뭐야. 무급 노동자는 언제나 환영이야!", "살림살이가 좀 나아졌습니다.", 9));
        actionMap.Add(4, new Actions("탈주한 사람은 강하다... 강자를 받아들여 세력을 키운다.", "강한 힘에는 대가가 따르기 마련입니다.", 4));
        actionMap.Add(5, new Actions("어린이는 우리의 고려 대상이 아니다. 약탈한다.  (뉴웨이브 불가)", "약탈의 결과, 달콤한 간식거리가 가득 생겼습니다.", 7));
        actionMap.Add(6, new Actions("어린이는 나라의 새싹이다. 코묻은 식량 털어봤자 별거 없을거야. 그냥 지나간다.", "고아원 앞을 지나가다 아이들에게 공격당했습니다.", 8));
        actionMap.Add(7, new Actions("먹을것 앞에 자존심 없다, 식량을 나눠달라 한다.", "아이들은 호락호락하지 않습니다. 빈손으로 돌아가는 길은 무기력합니다.", 15));
        actionMap.Add(8, new Actions("인생의 기본은 거래다. 돈을 주고 식량을 사오자!", "약간의 식량을 얻었습니다. 아이들은 지속적인 거래를 원합니다.", 15));
        actionMap.Add(9, new Actions("놀이터에서 놀고있는 애들과 친해진다. 사탕 한 입 정도는 나눠주겠지.", "사탕 한 입을 얻어먹었습니다. 왜인지 슬퍼집니다.", 14));
        actionMap.Add(10, new Actions("내가 받았으니 내 것이다. 소포는 뜯는건 언제나 즐거워! 뜯어본다.", "현금 다발이 들어있습니다. 아직 세상은 아름답습니다.", 5));
        actionMap.Add(11, new Actions("혼란스러운 세상, 누구도 믿을 수 없어. 불태운다.", "불타들어가는 소포 사이로 익숙한 지폐의 색이 언뜻 보입니다. 마음이 아파옵니다.", 2));
        actionMap.Add(12, new Actions("적의 계략인가..? 반품하자. 적 세력에 보낸다.", "적 세력의 구역에 호화스러운 건물이 생겼습니다. 저것이 내 것이었던것 같은 기분이 듭니다.", 6));
        actionMap.Add(13, new Actions("난 받을거 없는데? 반송이요!", "어딘가의 누군가가 벼락부자가 되었다는 소식이 들립니다. 동료들이 부러워합니다.", 4));
        actionMap.Add(14, new Actions("궁금하지만 위험한건 싫다. 부하를 시켜 열어본다.", "현금 다발이 들어있습니다. 목격자는 제거하였습니다.", 3));
        actionMap.Add(15, new Actions("목격자가 없으면 암살이다. 죽인다.", "암살에 실패했습니다. 적이 원군을 불러 곤란한 상황에 처했습니다.", 15));
        actionMap.Add(16, new Actions("이런 이득이! 생포하여 불게 만든다.", "앗 이런, 사람을 잘못보았습니다. 아무것도 모르는 민간인을 생포했습니다. 그는 정신적 피해보상을 요구합니다.", 10));
        actionMap.Add(17, new Actions("동료는 많을수록 좋다. 회유하여 우리편으로 끌어온다.", "바보같은 생각이었습니다. 불필요한 싸움으로 번져 정찰에 필요한 시간이 낭비되었습니다.", 8));
        actionMap.Add(18, new Actions("쓸데없는 마찰을 일으킬 필요는 없다. 모른척하고 지나간다.", "용건만 간단히! 정찰의 기본 지침입니다.", 7));
        actionMap.Add(19, new Actions("어...? 너..! 어릴적 친구다. 반갑게 인사한다.", "오랜만에 만난 친구와 근황을 나누느라 시간 가는줄 몰랐습니다. 그래도 쓸만한 정보를 건져서 다행입니다.", 5));
        actionMap.Add(20, new Actions("마침 주머니에 동전이 있다. 뽑아본다.", "아무래도 1등 상품에 당첨된 것 같습니다. 기분이 좋아집니다.", 1));
        actionMap.Add(21, new Actions("저런건 다 사기다. 무시한다.", "빠른 결정과 통찰은 언제나 바른 결과를 불러옵니다.", 7));
        actionMap.Add(22, new Actions("두드리면 나올거다, 자판기를 부순다.", "이거 방탄 자판기야..!라고 누군가 소리치는것 같습니다. 손이 아픕니다.", 8));
        actionMap.Add(23, new Actions("내돈으로 하기는 아깝다. 남는 동전 없나? 자판기 밑을 뒤져본다.", "동전은 찾았지만 왜인지 씁쓸함을 느낍니다. 더 이상 자판기의 내용물이 궁금하지 않습니다.", 2));
        actionMap.Add(24, new Actions("내용물이 궁금하다. 동료를 부추겨본다.", "동료가 뽑은 박스의 안에는 작고 귀여운 100원짜리가 들어있었습니다. 이것이 진정한 랜덤입니다.", 15));
        actionMap.Add(25, new Actions("뭐지? 이유를 묻는다. (마피아 불가)", "이번주 복권에 당첨될 사람이 바로 당신이라고 합니다. 예언을 들었으니 복채를 챙겨달라합니다.", 10));
        actionMap.Add(26, new Actions("웃음소리가 기분나쁘다, 죽인다. (뉴웨이브 불가)", "이 후, 이상하게 되는 일이 없습니다. 뭔가 찜찜한 기분이 듭니다.", 14));
        actionMap.Add(27, new Actions("웃으면 복이 온다. 같이 웃는다. (소사이어티 불가)", "기분이 좋으니 좋은 정보를 준다고 합니다. 알짜 부동산 정보를 얻었습니다.", 5));
        actionMap.Add(28, new Actions("이상한 사람이다. 무시한다.", "돌이켜 생각해보니 괜히 손해본 기분이 듭니다. 왜일까요.", 8));
        actionMap.Add(29, new Actions("좋을대로 해석한다. 내가 왕이될 상인가!", "노인은 호탕하게 웃으며 정답이라고 말합니다. 빈말이라도 기분이 좋습니다.", 3));
        actionMap.Add(30, new Actions("불처럼 매운 닭 볶음면", "맵다.", 15));
        actionMap.Add(31, new Actions("살아움직이는 싱싱한 산낙지", "맛있다.", 15));
        actionMap.Add(32, new Actions("간장과 밥", "살짝 부족하다.", 15));
        actionMap.Add(33, new Actions("방탄 효과가 있을것 같은 햄버거 세트", "맛있다. 배부르다.", 15));
        actionMap.Add(34, new Actions("굶는다", "식비를 아끼는 알찬 하루였다. 배고프다.", 9));
        actionMap.Add(35, new Actions("적의 함정일 것이다. 거절한다.", "현명한 선택일지도 모를 수도 있다고 느끼는것 같습니다.", 15));
        actionMap.Add(36, new Actions("메세지를 전달한 사람을 적진으로 돌려보내지 않는다. 영원히.", "우리는 적과 타협할 만큼 약하지 않습니다. 이것은 의지를 보이는 행동입니다.", 1));
        actionMap.Add(37, new Actions("마침 좋은 제안이다. 병력을 끌고 회담에 나간다.", "상대도 역시 병력을 이끌고 왔습니다. 각자의 병력에 손실을 입었습니다.", 3));
        actionMap.Add(38, new Actions("승낙한다. 날짜는 4/31일로 전달한다.", "적이 모욕을 당했다며 세력을 끌고 왔습니다. 전면전입니다.", 15));
        actionMap.Add(39, new Actions("승낙한다. 최소한의 인원만을 데리고 회남에 나간다.", "서로에게 매우 유익한 시간이었습니다. 두 세력은 이제 영원한 앙숙입니다.", 1));
        actionMap.Add(40, new Actions("당장 산다(소사이어티, 마법사 불가)", "성분을 알 수 없는 시리얼을 먹다가 배탈이 났습니다.", 8));
        actionMap.Add(41, new Actions("저런건 다 사기다. 무시한다.", "무시는 종종 명쾌한 정답이 됩니다.", 15));
        actionMap.Add(42, new Actions("약장수다. 약탈한다.", "약탈한 시리얼을 먹었더니 기분이 이상해집니다. 점점 힘이 빠집니다.", 2));
        actionMap.Add(43, new Actions("사고싶다. 그러나 잠시 고민해보기로 한다.", "당신의 우유부단함에 장사꾼도 포기하고 자리를 떠납니다.", 15));
        actionMap.Add(44, new Actions("궁금하지만 사고싶지는 않다. 샘플을 달라고 한다.", "매몰차게 거절당했습니다. 동료들에게 이 모습을 들켜 심히 민망합니다.", 4));
        actionMap.Add(45, new Actions("지금이 기회다. 적을 급습한다. (뉴웨이브, 마피아 불가)", "공격에 성공했습니다. 적에게 큰 피해를 입혔습니다.", 15));
        actionMap.Add(46, new Actions("누구야? 동료들과 사건을 조사한다.", "증거를 찾지 못해 사건은 미궁에 빠졌습니다. 아까운 인력만 낭비한 꼴입니다.", 14));
        actionMap.Add(47, new Actions("정전인가? 금방 복구되겠지. 무시한다.", "인간은 어느덧 전자기기의 노예가 되어있었습니다. 생각보다 불편합니다.", 10));
        actionMap.Add(48, new Actions("지나치게 불편하다. 일단 바깥으로 나가본다.", "범인처럼 보이는 수상한 사람과 마주쳤습니다. 즐거운 해명시간입니다.", 7));
        actionMap.Add(49, new Actions("적의 습격이다! 공격 개시!", "공상과학만화를 너무 많이 보았나봅니다. 별 일 없이 금새 정상으로 돌아왔습니다.", 2));
        actionMap.Add(50, new Actions("전력 손실이다. 인원을 충원할 공고를 낸다.", "혼란한 시대에서 창출된 귀중한 일자리입니다 .지원자가 몰렸습니다.", 3));
        actionMap.Add(51, new Actions("조용히 장례를 치뤄준다.", "세력 전체가 슬픔에 잠겼습니다.", 4));
        actionMap.Add(52, new Actions("슬프지만 알려져서 좋을건 없다. 은폐한다.", "아직은 때가 아닙니다. 아무 일도 없이 평범한 하루가 지나갔습니다.", 15));
        actionMap.Add(53, new Actions("성대한 장례를 치뤄준다.", "복수심은 곧 세력의 투지가 됩니다. 세력이 적을 향한 적개심으로 불탑니다.", 1));
        actionMap.Add(54, new Actions("들짐승의 밥으로 활용한다.", "이렇게라도 쓸모가 있어진다면, 그도 기뻐할 것입니다.", 9));
        actionMap.Add(55, new Actions("중요한 전략에서 활용할 수 있는 아이템같다. 보관한다.", "생각 이상으로 값이 나가는 물건이었습니다. 팔아서 살림에 보탭니다.", 9));
        actionMap.Add(56, new Actions("일단 사용해본다. 이게 되겠어?", "이게 되네..? 중요한 아이템이 날아갔습니다.", 7));
        actionMap.Add(57, new Actions("전투에 즉각 활용해봅니다.", "투명인간은 정말 최고입니다. 적의 영토를 손쉽게 점령하였습니다.", 15));
        actionMap.Add(58, new Actions("늘 한 번쯤은 꿈꿔왔던 것이다. 사용한다.", "예상치 못한 순간 투명화가 풀렸습니다. 당신은 방범대에게 붙잡혔습니다.", 4));
        actionMap.Add(59, new Actions("적의 보스를 암살 하는데 사용하는 것이 적절 할 것 같다. 세력내 암살조직에게 맡긴다.", "배신당했습니다. 주문서도 암살조직도 모두 잃었습니다.", 2));
        actionMap.Add(60, new Actions("현재 모든 인원이 재택근무중이다. 와봤자 아무도 없다. (소사이어티, 마피아 불가)", "기습 온 적 세력은 아무도 없자 괜한 화풀이를 하고갔습니다. 기지가 엉망진창이 되었습니다.", 6));
        actionMap.Add(61, new Actions("좋은 정보다. 확실히 대비한다.", "대비는 충분하지 못했습니다. 전력에 큰 손실을 입었습니다.", 2));
        actionMap.Add(62, new Actions("기습에 전면으로 맞설 필요는 없습니다. 물자창고만을 중점적으로 지킵니다.", "적들은 기습을 핑계로한 약탈을 목적으로 왔던 것이었습니다. 성공적으로 막아내었습니다.", 13));
        actionMap.Add(63, new Actions("기지를 비우고 우리도 기습을 가자!", "정보가 잘못되었나봅니다. 적은 오지 않았고, 우리의 기습은 실패하였습니다.", 15));
        actionMap.Add(64, new Actions("우왕좌왕 어떻게 할지 고민하다가 기습 예정일이 되었다.", "잘못된 정보였던 것 같습니다. 아무일도 일어나지 않았습니다.", 15));
        actionMap.Add(65, new Actions("", "", 0));
        actionMap.Add(66, new Actions("", "", 0));
        actionMap.Add(67, new Actions("", "", 0));
        actionMap.Add(68, new Actions("", "", 0));
        actionMap.Add(69, new Actions("", "", 0));
        actionMap.Add(70, new Actions("", "", 0));
        actionMap.Add(71, new Actions("", "", 0));
        actionMap.Add(72, new Actions("", "", 0));
        actionMap.Add(73, new Actions("", "", 0));
        actionMap.Add(74, new Actions("", "", 0));
        actionMap.Add(75, new Actions("", "", 0));
        actionMap.Add(76, new Actions("", "", 0));
        actionMap.Add(77, new Actions("", "", 0));
        actionMap.Add(78, new Actions("", "", 0));
        actionMap.Add(79, new Actions("", "", 0));

    }

    public void ArouseDecision()
    {
        situationNum = UnityEngine.Random.Range(0, 12);
        num = RandomNumber(0,5);
        DecisionPanel.gameObject.SetActive(true);
        DecisionDesc.text = decisionSituation.name[situationNum];
        Actions action1 = actionMap[(situationNum * 5) + num[0]];
        decisionBtn_1.text = action1.ReturnDesc();
        Actions action2 = actionMap[(situationNum * 5) + num[1]];
        decisionBtn_2.text = action2.ReturnDesc();
        Actions action3 = actionMap[(situationNum * 5) + num[2]];
        decisionBtn_3.text = action3.ReturnDesc();
        CentralProcessor.Instance.uIManager.SetActiveState();
        CentralProcessor.Instance.score += 10;
    }

    public int[] RandomNumber(int min, int max)
    {
        int[] num = new int[3];
        bool isSame;

        for(int i = 0; i < 3; i++)
        {
            while(true)
            {
                num[i] = UnityEngine.Random.Range(min, max);
                isSame = false;

                for(int j = 0; j < i; j++)
                {
                    if(num[j] == num[i])
                    {
                        isSame = true;
                        break;
                    }
                }
                if(!isSame)
                {
                    break;
                }
            }
        }
        return num;
    }

    public void Decision_1()
    {
        Actions action = actionMap[(situationNum * 5) + num[0]];
        VariableManager.Instance.BuffSelect(action.ReturnBuffNum());
        DecisionPanel.gameObject.SetActive(false);
        CentralProcessor.Instance.uIManager.UISetActiveTrue();
        CentralProcessor.Instance.uIManager.state = UIManager.State.Idle;
        CentralProcessor.Instance.uIManager.ShowDecisionEffect();
        CentralProcessor.Instance.uIManager.decision_story.text = action.ReturnEffect();
        CentralProcessor.Instance.uIManager.decision_effect.text = ReturnBuffStory(num[0]);
        if(action.ReturnBuffNum() == 15)
        {
            return;
        }
        else
        {
            AddDecisionIllust(action.ReturnBuffNum());
        }
    }

    public void Decision_2()
    {
        Actions action = actionMap[(situationNum * 5) + num[1]];
        VariableManager.Instance.BuffSelect(action.ReturnBuffNum());
        DecisionPanel.gameObject.SetActive(false);
        CentralProcessor.Instance.uIManager.UISetActiveTrue();
        CentralProcessor.Instance.uIManager.state = UIManager.State.Idle;
        CentralProcessor.Instance.uIManager.ShowDecisionEffect();
        CentralProcessor.Instance.uIManager.decision_story.text = action.ReturnEffect();
        CentralProcessor.Instance.uIManager.decision_effect.text = ReturnBuffStory(num[1]);
        AddDecisionIllust(action.ReturnBuffNum());
        if(action.ReturnBuffNum() == 15)
        {
            return;
        }
        else
        {
            AddDecisionIllust(action.ReturnBuffNum());
        }
    }

    public void Decision_3()
    {
        Actions action = actionMap[(situationNum * 5) + num[2]];
        VariableManager.Instance.BuffSelect(action.ReturnBuffNum());
        DecisionPanel.gameObject.SetActive(false);
        CentralProcessor.Instance.uIManager.UISetActiveTrue();
        CentralProcessor.Instance.uIManager.state = UIManager.State.Idle;
        CentralProcessor.Instance.uIManager.ShowDecisionEffect();
        CentralProcessor.Instance.uIManager.decision_story.text = action.ReturnEffect();
        CentralProcessor.Instance.uIManager.decision_effect.text = ReturnBuffStory(num[2]);
        AddDecisionIllust(action.ReturnBuffNum());
        if(action.ReturnBuffNum() == 15)
        {
            return;
        }
        else
        {
            AddDecisionIllust(action.ReturnBuffNum());
        }
    }

    public string ReturnBuffStory(int n)
    {
        
        Actions action = actionMap[(situationNum * 5) + n];
        switch(action.ReturnBuffNum())
        {
            case 1:
            buff_desc = "유닛 공격력 버프";
            break;
            case 2:
            buff_desc = "유닛 공격력 너프";
            break;
            case 3:
            buff_desc = "유닛 가격 할인";
            break;
            case 4:
            buff_desc = "유닛 가격 할증";
            break;
            case 5:
            buff_desc = "건물 가격 할인";
            break;
            case 6:
            buff_desc = "건물 가격 할증";
            break;
            case 7:
            buff_desc = "유닛 행동력 버프";
            break;
            case 8:
            buff_desc = "유닛 행동력 너프";
            break;
            case 9:
            buff_desc = "골드 생산량 증가";
            break;
            case 10:
            buff_desc = "골드 생산량 감소";
            break;
            case 11:
            buff_desc = "점령점수 증가";
            break;
            case 12:
            buff_desc = "점령점수 감소";
            break;
            case 13:
            buff_desc = "유닛 방어력 버프";
            break;
            case 14:
            buff_desc = "유닛 방어력 너프";
            break;
            case 15:
            buff_desc = "효과 없음";
            break;
        }
        return buff_desc;
    }

    public void AddDecisionIllust(int num)
    {
        GameObject img = Instantiate(decision_Illust);
        img.GetComponent<Image>().sprite = decision_IllustSprite[num - 1];
        img.transform.parent = decision_list.transform;
    }

    public class Actions
    {
        private string desc;
        private string effect;
        private int buffNum;

        public Actions(string _desc, string _effect, int _buffNum)
        {
            this.desc = _desc;
            this.effect = _effect;
            this.buffNum = _buffNum;
        }

        public string ReturnDesc()
        {
            return this.desc;
        }

        public string ReturnEffect()
        {
            return this.effect;
        }

        public int ReturnBuffNum()
        {
            return this.buffNum;
        }

        public void Show()
        {
            Debug.Log(desc);
            Debug.Log(effect);
            Debug.Log(buffNum);
        }
    }

    [Serializable]
    public class DecisionSituation
    {
        public string[] name;
    }
}