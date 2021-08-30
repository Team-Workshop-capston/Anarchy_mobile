using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DecisionIcon : MonoBehaviour, IPointerClickHandler
{
    public bool isP1Decision = false;
    public bool isP2Decision = false;
    public Tile thisTile;

    public void OnPointerClick(PointerEventData eventData)
    {
        if(CentralProcessor.Instance.currentTile != thisTile)
        {
            return;
        }

        if(CentralProcessor.Instance.uIManager.state != UIManager.State.Idle)
        {
            return;
        }

        if((isP1Decision && !CentralProcessor.Instance.isMaster) || (isP2Decision && CentralProcessor.Instance.isMaster))
        {
            return;
        }

        VariableManager.Instance.GetComponent<Decision>().ArouseDecision();
        this.gameObject.SetActive(false);
    }
}
