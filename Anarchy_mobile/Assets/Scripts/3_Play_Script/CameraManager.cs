using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    public Transform    P1_start_point;
    public Transform    P2_start_point;
    bool                isMaster;
    public Camera       camera;
    public float        orthoZoomSpeed = 0.05f;


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

    private void Update()
    {
        if(CentralProcessor.Instance.uIManager.state == UIManager.State.Idle)
        {
            if(Input.touchCount == 2)
            {
                Touch touchZero = Input.GetTouch(0);
                Touch touchOne = Input.GetTouch(1);

                Vector2 touchZeroPrevPos = touchZero.position - touchZero.deltaPosition;
                Vector2 touchOnePrevPos = touchOne.position - touchOne.deltaPosition;

                float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
                float touchDeltaMag = (touchZero.position - touchOne.position).magnitude; 

                float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

                if(camera.orthographic)
                {
                    camera.orthographicSize += deltaMagnitudeDiff * orthoZoomSpeed;

                    camera.orthographicSize = Mathf.Max(camera.orthographicSize, 0.1f);
                }

                if(camera.orthographicSize < 4)
                {
                    camera.orthographicSize = 4.1f;
                }
                else if(camera.orthographicSize > 10)
                {
                    camera.orthographicSize = 10;
                }
            }
        }
    }
}
