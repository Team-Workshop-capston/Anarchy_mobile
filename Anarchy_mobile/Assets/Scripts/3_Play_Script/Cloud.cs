using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cloud : MonoBehaviour
{
    Animator animator;

    private void Start()
    {
        animator =this.gameObject.GetComponent<Animator>();
    }

    private void Update()
    {
        if(animator.GetCurrentAnimatorStateInfo(0).IsName("Base Layer.Idle"))
        {
            if(CentralProcessor.Instance.isMaster)
            {
                CentralProcessor.Instance.uIManager.SetIdleState();
            }
            else
            {
                CentralProcessor.Instance.uIManager.SetNextState();
            }
            this.gameObject.SetActive(false);
        }
    }
}
