using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateUnit : MonoBehaviourPun
{
    GameObject p1_unit;
    GameObject p2_unit;
    public GameObject[] p1_units = new GameObject[3];
    public GameObject[] p2_units = new GameObject[3];
    public Transform[] p1_unit_area = new Transform[3];
    public Transform[] p2_unit_area = new Transform[3];
    bool isMaster;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;
        if(isMaster)
        {
            switch(GameManager.instance.playerData.forceNumber)
            {
                case 1:
                p1_unit = p1_units[0];
                break;
                case 2:
                p1_unit = p1_units[1];
                break;
                case 3:
                p1_unit = p1_units[2];
                break;
            }
        }
        else
        {
            switch(GameManager.instance.playerData.forceNumber)
            {
                case 1:
                p2_unit = p1_units[0];
                break;
                case 2:
                p2_unit = p1_units[1];
                break;
                case 3:
                p2_unit = p1_units[2];
                break;
            }
        }
    }

    public void CreateButtonClick()
    {
        GameObject u;
        u = PhotonNetwork.Instantiate(p1_unit.name,p1_unit_area[0].position,Quaternion.Euler(0,180,0)) as GameObject;
    }
}
