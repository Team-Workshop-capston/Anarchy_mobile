using System.Net.NetworkInformation;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MyUnit : MonoBehaviourPun, IPointerClickHandler
{
    public int type;
    public int cost;
    public float current_hp;
    public float max_hp;
    public Sprite illust;
    public int activeCost;
    public string unit_name;
    public int myNum;
    public int defensive;
    public int offensive;
    public Tile currentTile;
    public bool isAttackready = false;
    bool isMaster;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if(currentTile != CentralProcessor.Instance.currentTile)
        {
            return;
        }

        if(CentralProcessor.Instance.uIManager.state == UIManager.State.Idle)
        {
            Debug.Log("111");
            if((isMaster && this.gameObject.layer == 8) || (!isMaster && this.gameObject.layer == 7))
            {
                Debug.Log("222");
                if(CentralProcessor.Instance.currentEnemy != this.gameObject.GetComponent<MyUnit>())
                {
                    Debug.Log("333");
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                    Debug.Log("444");
                    CentralProcessor.Instance.currentEnemy = this.gameObject.GetComponent<MyUnit>();
                    Debug.Log("555");
                    ShowInfo();
                    Debug.Log("777");
                }
                else
                {
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                }
            }   
            else
            {
                if(CentralProcessor.Instance.currentUnit != this.gameObject.GetComponent<MyUnit>())
                {
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                    OnReady();
                }
                else
                {
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                }
            }
        }
        else if(CentralProcessor.Instance.uIManager.state == UIManager.State.Attack)
        {
            if((isMaster && this.gameObject.layer == 8) || (!isMaster && this.gameObject.layer == 7))
            {
                if(CentralProcessor.Instance.uIManager.state == UIManager.State.Attack)
                {
                    CentralProcessor.Instance.Attact(CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, this.gameObject.GetComponent<PhotonView>().ViewID);
                    if(CentralProcessor.Instance.currentUnit == null)
                    {
                        return;
                    }
                    CentralProcessor.Instance.uIManager.OffReadyAttack();
                }
            }
        }
        else if(CentralProcessor.Instance.uIManager.state == UIManager.State.Next)
        {
            if((isMaster && this.gameObject.layer == 8) || (!isMaster && this.gameObject.layer == 7))
            {
                if(CentralProcessor.Instance.currentEnemy != this.gameObject.GetComponent<MyUnit>())
                {
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                    CentralProcessor.Instance.currentEnemy = this.gameObject.GetComponent<MyUnit>();
                    ShowInfo();
                }
                else
                {
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                }
            }   
            else
            {
                if(CentralProcessor.Instance.currentUnit != this.gameObject.GetComponent<MyUnit>())
                {
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                    CentralProcessor.Instance.currentUnit = this.gameObject.GetComponent<MyUnit>();
                    ShowInfo();
                }
                else
                {
                    CentralProcessor.Instance.uIManager.InfoWindowReset();
                }
            }
        }
    }

    public void OnReady()
    {
        CentralProcessor.Instance.currentUnit = this.gameObject.GetComponent<MyUnit>();
        ShowInfo();
        CentralProcessor.Instance.uIManager.unitButtonPanel.gameObject.SetActive(true);
    }

    public void ShowInfo()
    {
        Debug.Log("666");
        CentralProcessor.Instance.uIManager.ShowUnitInfo(max_hp, current_hp, illust, unit_name, activeCost, offensive, defensive);
    }

    public void ActiveCostUpdate()
    {
        switch(type)
        {
            case 1:
            activeCost =  VariableManager.Instance.war_act;
            break;
            case 2:
            activeCost = VariableManager.Instance.arc_act;
            break;
            case 3:
            activeCost = VariableManager.Instance.mag_act;
            break;
        }
    }
}