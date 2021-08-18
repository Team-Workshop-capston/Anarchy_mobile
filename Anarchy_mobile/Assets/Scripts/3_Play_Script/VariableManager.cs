using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class VariableManager : MonoBehaviour
{
    public static VariableManager Instance
    {
        get
        {
            if(instance == null) instance = FindObjectOfType<VariableManager>();

            return instance;
        }
    }
    private static VariableManager instance;
    public Society_Variable society_Variable;
    public New_Wave_Variable new_Wave_Variable;
    public Mafia_Variable mafia_Variable;
    public int war_hp;
    public int war_off;
    public int war_def;
    public int war_act;
    public int war_cost;
    public int arc_hp;
    public int arc_off;
    public int arc_def;
    public int arc_act;
    public int arc_cost;
    public int mag_hp;
    public int mag_off;
    public int mag_def;
    public int mag_act;
    public int mag_cost;

    private void Start()
    {
        if(GameManager.instance.playerData.forceNumber == 1)
        {
            war_hp = society_Variable.war_hp;
            war_off = society_Variable.war_off;
            war_def = society_Variable.war_def;
            war_act = society_Variable.war_act;
            war_cost = society_Variable.war_cost;
            arc_hp = society_Variable.arc_hp;
            arc_off = society_Variable.arc_off;
            arc_def = society_Variable.arc_def;
            arc_act = society_Variable.arc_act;
            arc_cost = society_Variable.arc_cost;
            mag_hp = society_Variable.mag_hp;
            mag_off = society_Variable.mag_off;
            mag_def = society_Variable.mag_def;
            mag_act = society_Variable.mag_act;
            mag_cost = society_Variable.mag_cost;
        }
        else if(GameManager.instance.playerData.forceNumber == 2)
        {
            war_hp = new_Wave_Variable.war_hp;
            war_off = new_Wave_Variable.war_off;
            war_def = new_Wave_Variable.war_def;
            war_act = new_Wave_Variable.war_act;
            war_cost = new_Wave_Variable.war_cost;
            arc_hp = new_Wave_Variable.arc_hp;
            arc_off = new_Wave_Variable.arc_off;
            arc_def = new_Wave_Variable.arc_def;
            arc_act = new_Wave_Variable.arc_act;
            arc_cost = new_Wave_Variable.arc_cost;
            mag_hp = new_Wave_Variable.mag_hp;
            mag_off = new_Wave_Variable.mag_off;
            mag_def = new_Wave_Variable.mag_def;
            mag_act = new_Wave_Variable.mag_act;
            mag_cost = new_Wave_Variable.mag_cost;
        }
        else if(GameManager.instance.playerData.forceNumber == 3)
        {
            war_hp = mafia_Variable.war_hp;
            war_off = mafia_Variable.war_off;
            war_def = mafia_Variable.war_def;
            war_act = mafia_Variable.war_act;
            war_cost = mafia_Variable.war_cost;
            arc_hp = mafia_Variable.arc_hp;
            arc_off = mafia_Variable.arc_off;
            arc_def = mafia_Variable.arc_def;
            arc_act = mafia_Variable.arc_act;
            arc_cost = mafia_Variable.arc_cost;
            mag_hp = mafia_Variable.mag_hp;
            mag_off = mafia_Variable.mag_off;
            mag_def = mafia_Variable.mag_def;
            mag_act = mafia_Variable.mag_act;
            mag_cost = mafia_Variable.mag_cost;
        }
    }


    [Serializable]
    public class Society_Variable
    {
        public int war_hp;
        public int war_off;
        public int war_def;
        public int war_act;
        public int war_cost;
        public int arc_hp;
        public int arc_off;
        public int arc_def;
        public int arc_act;
        public int arc_cost;
        public int mag_hp;
        public int mag_off;
        public int mag_def;
        public int mag_act;
        public int mag_cost;
    }

    [Serializable]
    public class New_Wave_Variable
    {
        public int war_hp;
        public int war_off;
        public int war_def;
        public int war_act;
        public int war_cost;
        public int arc_hp;
        public int arc_off;
        public int arc_def;
        public int arc_act;
        public int arc_cost;
        public int mag_hp;
        public int mag_off;
        public int mag_def;
        public int mag_act;
        public int mag_cost;
    }

    [Serializable]
    public class Mafia_Variable
    {
        public int war_hp;
        public int war_off;
        public int war_def;
        public int war_act;
        public int war_cost;
        public int arc_hp;
        public int arc_off;
        public int arc_def;
        public int arc_act;
        public int arc_cost;
        public int mag_hp;
        public int mag_off;
        public int mag_def;
        public int mag_act;
        public int mag_cost;
    }
}