using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MyBuilding : MonoBehaviour, IPointerClickHandler
{
    public int type;
    public int level;
    public bool isP1Building;
    public bool isP2Building;
    bool isMaster;
    [TextArea]
    public string desc;
    public string buildingName;
    public Sprite illust;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if(CentralProcessor.Instance.uIManager.state == UIManager.State.Idle || CentralProcessor.Instance.uIManager.state == UIManager.State.Next)
        {
            if(CentralProcessor.Instance.currentBuilding != this.gameObject.GetComponent<MyBuilding>())
            {
                CentralProcessor.Instance.BuildingReset();
                CentralProcessor.Instance.currentBuilding = this.gameObject.GetComponent<MyBuilding>();
                CentralProcessor.Instance.uIManager.ShowBuildingInfo(buildingName, illust, level, type);
            }
            else
            {
                CentralProcessor.Instance.uIManager.InfoWindowReset();
            }
        }
    }
}
