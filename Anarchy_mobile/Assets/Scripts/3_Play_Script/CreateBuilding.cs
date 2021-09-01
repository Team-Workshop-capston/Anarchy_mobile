using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CreateBuilding : MonoBehaviourPun
{
    GameObject building;
    public int type;
    public int level = 0;
    public GameObject[] buildings = new GameObject[3];
    public Transform[] P1_buildingArea = new Transform[3];
    public Transform[] P2_buildingArea = new Transform[3];
    bool isMaster;
    string s;
    public Image maxImg;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
        building = buildings[0];
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
                b = PhotonNetwork.Instantiate(building.name, P1_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[0]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
            }
            else
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P2_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[0]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
            }
            level++;
            VariableManager.Instance.BuildingBuffSelect((type * 3) + 1);
            VariableManager.Instance.BuildingCostSetting();
        }
        else
        {
            building = buildings[level];
            CentralProcessor.Instance.BuildingUpgrade(CentralProcessor.Instance.currentBuildings[type].GetComponent<PhotonView>().ViewID);
            if(isMaster)
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P1_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[level]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
            }
            else
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P2_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.building_resultCost[level]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
                CentralProcessor.Instance.createBuildingNumber -= 1;
            }
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
            VariableManager.Instance.BuildingCostSetting();
        }
        else if(VariableManager.Instance.isBuildCostEffect && VariableManager.Instance.buildEffects.Count > 0)
        {
            VariableManager.Instance.BuildingCostEffect(-VariableManager.Instance.currentBuff);
            var n = VariableManager.Instance.buildEffects.Dequeue();
            VariableManager.Instance.BuildingCostEffect(n);
            VariableManager.Instance.BuildingCostSetting();
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
