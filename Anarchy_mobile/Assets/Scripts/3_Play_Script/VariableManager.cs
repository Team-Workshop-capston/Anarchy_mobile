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

    public int UnitCostBuffPrc = 0;
    public int BuildingCostBuffPrc = 0;
    public int UnitOffenceBuffPrc = 0;
    public int UnitDefenceBuffPrc = 0;

    public int War_offBuffPrc = 0;
    public int Arc_offBuffPrc = 0;
    public int Mag_offBuffPrc = 0;
    public int War_DefBuffPrc = 0;
    public int Arc_DefBuffPrc = 0;
    public int Mag_DefBuffPrc = 0;

    public int[] buildingcost;

    public int money;
    public int MoneyBuffPrc = 0;

    bool isMaster;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;

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

    public void BuffSelect(int num)
    {
        switch(num)
        {
            case 1:
            UnitOffenceEffect(0.2f);
            break;
            case 2:
            UnitOffenceEffect(-0.2f);
            break;
            case 3:
            UnitCostEffect(-0.2f);
            break;
            case 4:
            UnitCostEffect(0.2f);
            break;
            case 5:
            BuildingCostEffect(-0.2f);
            break;
            case 6:
            BuildingCostEffect(0.2f);
            break;
            case 7:
            UnitActiveCostEffect(1);
            break;
            case 8:
            UnitActiveCostEffect(-1);
            break;
            case 9:
            GoodsProductionEffect(0.2f);
            break;
            case 10:
            GoodsProductionEffect(-0.2f);
            break;
            case 11:
            break;
            case 12:
            break;
            case 13:
            UnitDefensiveEffect(0.2f);
            break;
            case 14:
            UnitDefensiveEffect(-0.2f);
            break;
            case 15:
            break;
        }
    }
    public void UnitOffenceEffect(float prc)
    {
        war_off = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
        arc_off = Mathf.RoundToInt(arc_off * (1 + (UnitOffenceBuffPrc + prc)));
        mag_off = Mathf.RoundToInt(mag_off * (1 + (UnitOffenceBuffPrc + prc)));
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(7, war_off, arc_off, mag_off);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(8, war_off, arc_off, mag_off);
        }
    }

    public void UnitCostEffect(float prc)
    {
        war_cost = Mathf.RoundToInt(war_cost * (1 + (UnitCostBuffPrc + prc)));
        arc_cost = Mathf.RoundToInt(arc_cost * (1 + (UnitCostBuffPrc + prc)));
        mag_cost = Mathf.RoundToInt(mag_cost * (1 + (UnitCostBuffPrc + prc)));
        CentralProcessor.Instance.uIManager.UnitCostUpdate();
    }

    public void BuildingCostEffect(float prc)
    {
        for(int i = 0; i < 3; i++)
        {
            buildingcost[i] = Mathf.RoundToInt(buildingcost[i] * (1 + (BuildingCostBuffPrc + prc)));
        }
    }

    public void UnitActiveCostEffect(int number)
    {
        war_act += number;
        arc_act += number;
        mag_act += number;
    }

    public void GoodsProductionEffect(float prc)
    {
        money = Mathf.RoundToInt(money * (1 + (MoneyBuffPrc + prc)));
    }

    public void OccupationCostEffect()
    {

    }

    public void UnitDefensiveEffect(float prc)
    {
        war_def = Mathf.RoundToInt(war_def * (1 + (UnitDefenceBuffPrc + prc)));
        arc_def = Mathf.RoundToInt(arc_def * (1 + (UnitDefenceBuffPrc + prc)));
        mag_def = Mathf.RoundToInt(mag_def * (1 + (UnitDefenceBuffPrc + prc)));
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitDefenceEffect(7, war_def, arc_def, mag_def);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitDefenceEffect(8, war_def, arc_def, mag_def);
        }
    }

    public void UnitStatisticsInit(int type)
    {
        switch(type)
        {
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
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