using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveUnit : MonoBehaviour
{
    public Tile pairTile;
    public int cost;
    bool isMaster;
    Transform[] area;
    bool[] isEmpty;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    public void Move()
    {
        if(isMaster)
        {
            area = pairTile.P1_unitArea;
            isEmpty = pairTile.isP1_unitArea;
            CentralProcessor.Instance.currentUnit.currentTile.isP1_unitArea[CentralProcessor.Instance.currentUnit.myNum] = false;
        }
        else
        {
            area = pairTile.P2_unitArea;
            isEmpty = pairTile.isP2_unitArea;
            CentralProcessor.Instance.currentUnit.currentTile.isP2_unitArea[CentralProcessor.Instance.currentUnit.myNum] = false;
        }
        for(int i = 0; i < 3; i++)
        {
            if(isEmpty[i] == false)
            {
                isEmpty[i] = true;
                CentralProcessor.Instance.currentUnit.transform.position = area[i].position;
                CentralProcessor.Instance.currentUnit.currentTile = pairTile;
                CentralProcessor.Instance.currentUnit.activeCost -= cost;
                CentralProcessor.Instance.currentUnit = null;
                CentralProcessor.Instance.uIManager.SetIdleState();
                CentralProcessor.Instance.uIManager.UISetActiveTrue();
                return;
            }
        }
    }
}
