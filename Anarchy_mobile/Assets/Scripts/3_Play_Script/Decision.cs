using System.Diagnostics.SymbolStore;
using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Decision : MonoBehaviourPun
{
    public Dictionary<int, Actions> actionMap;
    public bool isChecked = false;
    int n;
    string s;
    public DecisionClass decisionClass;
    public Queue<DecisionClass> que = new Queue<DecisionClass>();
    public string[] action = new string[5];
    private void Start()
    {
        actionMap = new Dictionary<int, Actions>();

        actionMap.Add(0, new Actions("투항한 적은 우리의 동료야! 받아들여준다. 밥도 주고, 재워도 주고... (소사이어티 불가)", 0));
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

    public class Actions
    {
        private string desc;
        private int buffNum;

        public Actions(string _desc, int _buffNum)
        {
            this.desc = _desc;
            this.buffNum = _buffNum;
        }
    }
}