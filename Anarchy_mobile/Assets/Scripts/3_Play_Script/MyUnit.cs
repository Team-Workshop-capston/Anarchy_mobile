using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MyUnit : MonoBehaviourPun, IPointerClickHandler
{
    public int cost;
    public float current_hp;
    public float max_hp;
    public Sprite illust;
    public int activeCost;
    public string unit_name;
    public int myNum;
    public Tile prevTile;
    public Tile currentTile;
    public bool isClicked = false;

    public void OnPointerClick(PointerEventData eventData)
    {
        if(currentTile != CentralProcessor.Instance.currentTile)
        {
            return;
        }

        if(!isClicked)
        {
            OnReady();
        }
        else
        {
            OffReady();
        }
    }

    public void OnReady()
    {
        isClicked = true;
        CentralProcessor.Instance.currentUnit = this.gameObject.GetComponent<MyUnit>();
        CentralProcessor.Instance.uIManager.ShowUnitInfo(max_hp, current_hp, illust, unit_name, activeCost);
    }

    public void OffReady()
    {
        isClicked = false;
        CentralProcessor.Instance.currentUnit = null;
        CentralProcessor.Instance.uIManager.CloseUnitInfo();
    }
}
