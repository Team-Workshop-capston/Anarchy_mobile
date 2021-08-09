using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateUnit : MonoBehaviourPun
{
    GameObject unit;
    public GameObject[] p1_units = new GameObject[3];
    public GameObject[] p2_units = new GameObject[3];
    public Transform[] p1_unit_area = new Transform[3];
    public Transform[] p2_unit_area = new Transform[3];
    bool isMaster;
    bool[] isUnit_area = new bool[3];
    Transform[] unit_area = new Transform[3];
    IEnumerator enumerator;
    string s;
    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
        if(isMaster)
        {
            switch(GameManager.instance.playerData.forceNumber)
            {
                case 1:
                unit = p1_units[0];
                break;
                case 2:
                unit = p1_units[1];
                break;
                case 3:
                unit = p1_units[2];
                break;
            }
            unit_area = CentralProcessor.Instance.P1_core_Tile.P1_unitArea;
            isUnit_area = CentralProcessor.Instance.P1_core_Tile.isP1_unitArea;
        }
        else
        {
            switch(GameManager.instance.playerData.forceNumber)
            {
                case 1:
                unit = p2_units[0];
                break;
                case 2:
                unit = p2_units[1];
                break;
                case 3:
                unit = p2_units[2];
                break;
            }
            unit_area = CentralProcessor.Instance.P2_core_Tile.P2_unitArea;
            isUnit_area = CentralProcessor.Instance.P2_core_Tile.isP2_unitArea;
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
        for(int i = 0; i < 3; i++)
        {
            if(!isUnit_area[i])
            {
                GameObject u;
                u = PhotonNetwork.Instantiate(unit.name, unit_area[i].position, Quaternion.Euler(0,180,0)) as GameObject;
                CentralProcessor.Instance.CreatedUnitAreaCheck(isMaster, true, i);
                return;
            }
        }
        CentralProcessor.Instance.uIManager.StopCoroutine("fadeoutErrorMessage");
        s = "공간이 부족합니다";
        CentralProcessor.Instance.uIManager.PrintErrorMessage(s);
        CentralProcessor.Instance.uIManager.StartCoroutine("fadeoutErrorMessage");
    }

    public bool CheckCost()
    {
        bool b = true;
        if(unit.gameObject.GetComponent<MyUnit>().cost > int.Parse(CentralProcessor.Instance.currentMoney.text))
        {
            return b;
        }
        else
        {
            return !b;
        }
    }
}
