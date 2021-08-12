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

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    public void Move()
    {
        if(isMaster)
        {
            area = pairTile.P1_unitArea;
            CentralProcessor.Instance.currentUnit.currentTile.isP1_unitArea[CentralProcessor.Instance.currentUnit.myNum] = false;
        }
        else
        {
            area = pairTile.P2_unitArea;
            CentralProcessor.Instance.currentUnit.currentTile.isP2_unitArea[CentralProcessor.Instance.currentUnit.myNum] = false;
        }
        CentralProcessor.Instance.currentUnit.transform.position = area[CentralProcessor.Instance.currentUnit.myNum].position;
    }
}
