using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Tile : MonoBehaviourPun, IPointerClickHandler
{
    public bool isP1Tile = false;
    public bool isP2Tile = false;
    public int x;
    public int y;
    public bool[]       isP1_unitArea = new bool[3];
    public bool[]       isP2_unitArea = new bool[3];
    bool isMaster;
    public Transform cameraPoint;
    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if(this.gameObject != CentralProcessor.Instance.currentTile.gameObject)
        {
            CentralProcessor.Instance.cameraManager.transform.position = cameraPoint.position;
            CentralProcessor.Instance.currentTile = this.gameObject.GetComponent<Tile>();
        }
    }

    public void GiveMoney()
    {
        if(isMaster && isP1Tile)
        {
            int currentMoney = int.Parse(CentralProcessor.Instance.whoseTurn.text);
            currentMoney += 200;
            CentralProcessor.Instance.whoseTurn.text = currentMoney.ToString();
        }
        else if(!isMaster && isP2Tile)
        {
            int currentMoney = int.Parse(CentralProcessor.Instance.whoseTurn.text);
            currentMoney += 200;
            CentralProcessor.Instance.whoseTurn.text = currentMoney.ToString();
        }
    }
}
