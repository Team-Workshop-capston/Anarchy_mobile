using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    bool isMaster;
    public Transform P1_start_point;
    public Transform P2_start_point;

    private void Awake()
    {
        isMaster = CentralProcessor.Instance.isMaster;
    }

    private void Start()
    {
        if(isMaster)
        {
            this.gameObject.transform.position = P1_start_point.position;
        }
        else
        {
            this.gameObject.transform.position = P2_start_point.position;
        }
    }
}
