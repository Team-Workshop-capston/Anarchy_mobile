using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CreateBuilding : MonoBehaviourPun
{
    GameObject building;
    public int type;
    int level = 0;
    public GameObject[] buildings = new GameObject[3];
    public Transform[] P1_buildingArea = new Transform[3];
    public Transform[] P2_buildingArea = new Transform[3];
    bool isMaster;
    string s;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
        building = buildings[0];
    }

    public void CreateButtonClick()
    {
        if(level == 3)
        {
            CentralProcessor.Instance.uIManager.StopCoroutine("fadeoutErrorMessage");
            s = "최대 레벨입니다";
            CentralProcessor.Instance.uIManager.PrintErrorMessage(s);
            CentralProcessor.Instance.uIManager.StartCoroutine("fadeoutErrorMessage");
            return;
        }

        if(CheckCost())
        {
            CentralProcessor.Instance.uIManager.StopCoroutine("fadeoutErrorMessage");
            s = "돈이 부족합니다";
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
                CalculateCost(VariableManager.Instance.buildingcost[0]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
            }
            else
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P2_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.buildingcost[0]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
            }
            level++;
        }
        else
        {
            building = buildings[level];
            CentralProcessor.Instance.BuildingUpgrade(CentralProcessor.Instance.currentBuildings[type].GetComponent<PhotonView>().ViewID);
            if(isMaster)
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P1_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.buildingcost[level]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
            }
            else
            {
                GameObject b;
                b = PhotonNetwork.Instantiate(building.name, P2_buildingArea[type].position, Quaternion.Euler(0,0,0)) as GameObject;
                CalculateCost(VariableManager.Instance.buildingcost[level]);
                CentralProcessor.Instance.currentBuildings[type] = b.GetComponent<MyBuilding>();
            }
            level++;
        }
    }

    public bool CheckCost()
    {
        bool b = true;
        if(VariableManager.Instance.buildingcost[level] > int.Parse(CentralProcessor.Instance.currentMoney.text))
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
