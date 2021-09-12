using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MyBuilding : MonoBehaviour, IPointerClickHandler
{
    public int type;
    public bool isP1Building;
    public bool isP2Building;
    bool isMaster;
    [TextArea]
    public string desc;
    public string buldingName;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if((isMaster && isP2Building) || (!isMaster && isP1Building))
        {
            return;
        }

        if(CentralProcessor.Instance.uIManager.state == UIManager.State.Idle || CentralProcessor.Instance.uIManager.state == UIManager.State.Next)
        {
            CentralProcessor.Instance.uIManager.InfoWindowReset();
            if(CentralProcessor.Instance.currentBuilding != this.gameObject.GetComponent<MyBuilding>())
            {
                CentralProcessor.Instance.currentBuilding = this.gameObject.GetComponent<MyBuilding>();
                CentralProcessor.Instance.uIManager.ShowBuildingInfo();
            }
        }
    }
}
