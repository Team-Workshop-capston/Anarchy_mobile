using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Tile : MonoBehaviourPun, IPointerClickHandler
{
    public bool isP1Tile = false;
    public bool isP2Tile = false;
    public bool isP1CoreTile = false;
    public bool isP2CoreTile = false;
    public int occupationCost = 0;
    public int row;
    public int col;
    public bool[]       isP1_unitArea = new bool[3];
    public bool[]       isP2_unitArea = new bool[3];
    public Transform[]  P1_unitArea = new Transform[3];
    public Transform[]  P2_unitArea = new Transform[3];
    public MyUnit[]     P1_units = new MyUnit[3];
    public MyUnit[]     P2_units = new MyUnit[3];
    bool isMaster;
    public Transform cameraPoint;
    public bool isDecision = true;
    public Image minimap_Tile;
    public GameObject decisionIcon;
    public int money;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        Debug.Log("돈수급!!");
        if(CentralProcessor.Instance.uIManager.state == UIManager.State.Idle)
        {
            if(this.gameObject != CentralProcessor.Instance.currentTile.gameObject)
            {
                MoveTile();
                CentralProcessor.Instance.uIManager.InfoWindowReset();
            }
        }
        else if(CentralProcessor.Instance.uIManager.state == UIManager.State.Next)
        {
            if(this.gameObject != CentralProcessor.Instance.currentTile.gameObject)
            {
                MoveTile();
            }
        }   
    }

    public void GiveMoney()
    {
        if(isMaster && isP1Tile)
        {
            int currentMoney = int.Parse(CentralProcessor.Instance.currentMoney.text);
            currentMoney += money + VariableManager.Instance.plusMoney;
            CentralProcessor.Instance.currentMoney.text = currentMoney.ToString();
        }
        else if(!isMaster && isP2Tile)
        {
            int currentMoney = int.Parse(CentralProcessor.Instance.currentMoney.text);
            currentMoney += money + VariableManager.Instance.plusMoney;
            CentralProcessor.Instance.currentMoney.text = currentMoney.ToString();
        }
    }

    public void MoveTile()
    {
        CentralProcessor.Instance.cameraManager.transform.position = cameraPoint.position;
        CentralProcessor.Instance.currentTile.minimap_Tile.color = Color.white;
        CentralProcessor.Instance.currentTile = this.gameObject.GetComponent<Tile>();
        if(isMaster)
        {
            this.minimap_Tile.color = Color.blue;
        }
        else
        {
            this.minimap_Tile.color = Color.red;
        }
    }
}
