using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CreateBuilding : MonoBehaviourPun
{
    public GameObject   building;
    public int          type;
    public int          level = 0;
    public GameObject[] buildings = new GameObject[9];
    public Transform[]  P1_buildingArea = new Transform[3];
    public Transform[]  P2_buildingArea = new Transform[3];
    public bool         isMaster;
    string              s;
    public Image        maxImg;
    public Image        illust;
    public Text         levelText;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
        //building = buildings[0];
        illust.sprite = buildings[0].GetComponent<MyBuilding>().illust;
        switch(GameManager.instance.playerData.forceNumber)
        {
            case 1:
            building = buildings[0];
            break;
            case 2:
            building = buildings[1];
            break;
            case 3:
            building = buildings[2];
            break;
        }
    }

    public void CreateButtonClick()
    {
        if(CheckCost())
        {
            CentralProcessor.Instance.uIManager.StopCoroutine("fadeoutErrorMessage");
            s = "돈이 부족합니다";
            CentralProcessor.Instance.uIManager.PrintErrorMessage(s);
            CentralProcessor.Instance.uIManager.StartCoroutine("fadeoutErrorMessage");
            return;
        }

        if(CentralProcessor.Instance.createBuildingNumber == 0)
        {
            CentralProcessor.Instance.uIManager.StopCoroutine("fadeoutErrorMessage");
            s = "건설 횟수 초과";
            CentralProcessor.Instance.uIManager.PrintErrorMessage(s);
            CentralProcessor.Instance.uIManager.StartCoroutine("fadeoutErrorMessage");
            return;
        }

        if(level == 0)
        {
            if(isMaster)
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P1_buildingArea[type].position, Quaternion.Euler(0,180,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[0]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
                CentralProcessor.Instance.SumScore(5,0);
            }
            else
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P2_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[0]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
                CentralProcessor.Instance.SumScore(0,5);
            }
            CentralProcessor.Instance.effectSoundManager.PlayButtonClickSound();
            illust.sprite = buildings[3].GetComponent<MyBuilding>().illust;
            levelText.text = "X 2";
            level++;
            VariableManager.Instance.BuildingBuffSelect((type * 3) + 1);
            VariableManager.Instance.BuildingCostSetting();
        }
        else
        {
            //building = buildings[level];
            switch(GameManager.instance.playerData.forceNumber)
            {
                case 1:
                if(level == 1)
                {
                    building = buildings[3];
                }
                else
                {
                    building = buildings[6];
                }
                break;
                case 2:
                if(level == 1)
                {
                    building = buildings[4];
                }
                else
                {
                    building = buildings[7];
                }
                break;
                case 3:
                if(level == 1)
                {
                    building = buildings[5];
                }
                else
                {
                    building = buildings[8];
                }
                break;
            }
            CentralProcessor.Instance.BuildingUpgrade(CentralProcessor.Instance.currentBuildings[type].GetComponent<PhotonView>().ViewID);
            if(isMaster)
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P1_buildingArea[type].position, Quaternion.Euler(0,180,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[level]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
                CentralProcessor.Instance.SumScore(5,0);
            }
            else
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P2_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[level]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
                CentralProcessor.Instance.SumScore(0,5);
            }
            CentralProcessor.Instance.effectSoundManager.PlayButtonClickSound();
            illust.sprite = buildings[6].GetComponent<MyBuilding>().illust;
            levelText.text = "X 3";
            level++;
            VariableManager.Instance.BuildingBuffSelect((type * 3) + level);
            VariableManager.Instance.BuildingCostSetting();
            if(level == 3)
            {
                maxImg.gameObject.SetActive(true);
                this.gameObject.SetActive(false);
                return;
            }
        }

        if(VariableManager.Instance.isBuildCostEffect && VariableManager.Instance.buildEffects.Count == 0)
        {
            VariableManager.Instance.isBuildCostEffect = false;
            VariableManager.Instance.BuildingCostEffect(-VariableManager.Instance.currentBuff);
            VariableManager.Instance.isBuildCostEffect = false;
        }
        else if(VariableManager.Instance.isBuildCostEffect && VariableManager.Instance.buildEffects.Count > 0)
        {
            VariableManager.Instance.isBuildCostEffect = false;
            VariableManager.Instance.BuildingCostEffect(-VariableManager.Instance.currentBuff);
            VariableManager.Instance.isBuildCostEffect = false;
            var n = VariableManager.Instance.buildEffects.Dequeue();
            VariableManager.Instance.BuildingCostEffect(n);
        }
    }

    public bool CheckCost()
    {
        bool b = true;
        if(VariableManager.Instance.building_resultCost[level] > int.Parse(CentralProcessor.Instance.currentMoney.text))
        {
            return b;
        }
        else
        {
            return !b;
        }
    }

    public void CalculateCost(int cost)
    {
        CentralProcessor.Instance.currentMoney.text = (int.Parse(CentralProcessor.Instance.currentMoney.text) - cost).ToString();
    }
}
