using System.Diagnostics.SymbolStore;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Decision : MonoBehaviourPun
{
    public bool isChecked = false;
    int n;
    string s;
    public DecisionClass decisionClass;
    public Queue<DecisionClass> que = new Queue<DecisionClass>();

    private void Start()
    {
        decisionClass.num = 3;
        decisionClass.desc = "yeah";

        que.Enqueue(decisionClass);
    }

    public void Test()
    {
        if(que.Count == 0)
        {
            Debug.Log("NULL!!");
            return;
        }
        
        DecisionClass d = que.Dequeue();
        n = d.num;
        s = d.desc;
        Debug.Log(n);
        Debug.Log(s);
    }

    public void ArouseDecision()
    {

    }

    [Serializable]
    public class DecisionClass
    {
        public int num;
        public string desc;
    }
}