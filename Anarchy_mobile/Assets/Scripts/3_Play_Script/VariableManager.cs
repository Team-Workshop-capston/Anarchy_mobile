using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
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
    private static VariableManager  instance;
    public Society_Variable         society_Variable;
    public New_Wave_Variable        new_Wave_Variable;
    public Mafia_Variable           mafia_Variable;

    public int      war_hp;
    public int      war_off;
    public int      war_def;
    public int      war_act;
    public int      war_cost;
    public int      arc_hp;
    public int      arc_off;
    public int      arc_def;
    public int      arc_act;
    public int      arc_cost;
    public int      mag_hp;
    public int      mag_off;
    public int      mag_def;
    public int      mag_act;
    public int      mag_cost;
    public float    UnitCostBuffPrc = 0;
    public float    BuildingCostBuffPrc = 0;
    public int[]    unit_resultCost = new int[3];
    public Text     Unit1;
    public Text     Unit2;
    public Text     Unit3;
    public Queue<float> UnitEffects = new Queue<float>();
    public bool     isUnitCostEffect = false;
    public float    currentUnitBuff;
    public int[]    building_costs;
    public string[] building_names;
    public int[]    building_resultCost = new int[3];
    public Button   building1;
    public Button   building2;
    public Button   building3;
    public Text     building1_name;
    public Text     building2_name;
    public Text     building3_name;
    public Text     building1_cost;
    public Text     building2_cost;
    public Text     building3_cost;
    public bool     isBuildCostEffect = false;
    public Queue<float> buildEffects = new Queue<float>();
    public float    currentBuff;
    public int      occupationCost = 1;
    public float    war_Occupation = 1;
    public float    mag_Occupation = 1.5f;
    public float    OccupationCostBuffPrc = 0;

    bool            isMaster;

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
            UnitOffenceEffect(10,10,10);
            break;
            case 2:
            UnitOffenceEffect(-5,-5,-5);
            break;
            case 3:
            UnitCostEffect(-0.5f);
            break;
            case 4:
            UnitCostEffect(0.5f);
            break;
            case 5:
            BuildingCostEffect(-0.2f);
            break;
            case 6:
            BuildingCostEffect(0.2f);
            break;
            case 7:
            UnitActiveCostEffect(0,0,1);
            break;
            case 8:
            UnitActiveCostEffect(0,0,-1);
            break;
            case 9:
            GoodsProductionEffect(25);
            break;
            case 10:
            GoodsProductionEffect(-10);
            break;
            case 11:
            OccupationCostEffect(0.5f);
            break;
            case 12:
            OccupationCostEffect(-0.5f);
            break;
            case 13:
            UnitDefensiveEffect(5,5,5);
            break;
            case 14:
            UnitDefensiveEffect(-10,-10,-10);
            break;
            case 15:
            break;
        }
    }

    public void BuildingBuffSelect(int num)
    {
        switch(num)
        {
            case 1:
            if(isMaster)
            {
                CentralProcessor.Instance.P1_core_Tile.money = 150;
            }
            else
            {
                CentralProcessor.Instance.P2_core_Tile.money = 150;
            }
            break;
            case 2:
            foreach(Tile t in CentralProcessor.Instance.tiles)
            {
                t.money = 50;
            }
            if(isMaster)
            {
                CentralProcessor.Instance.P1_core_Tile.money = 150;
            }
            else
            {
                CentralProcessor.Instance.P2_core_Tile.money = 150;
            }
            break;
            case 3:
            foreach(Tile t in CentralProcessor.Instance.tiles)
            {
                t.money += 50;
            }
            break;
            case 4:
            UnitDefensiveEffect(5,0,0);
            break;
            case 5:
            UnitOffenceEffect(0,10,0);
            break;
            case 6:
            UnitActiveCostEffect(1,1,0);
            break;
            case 7:
            BuildingBuff_unitCost(-0.1f);
            break;
            case 8:
            BuildingBuff_buildingCost();
            break;
            case 9:
            BuildingBuff_unitCost(-0.3f);
            break;
        }
    }
    public void UnitOffenceEffect(int war, int arc, int mag)
    {
        war_off += war;
        arc_off += arc;
        mag_off += mag;
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
        if(isUnitCostEffect)
        {
            UnitEffects.Enqueue(prc);
            return;
        }
        else
        {
            currentUnitBuff = prc;
            isUnitCostEffect = true;
            unit_resultCost[0] = Mathf.RoundToInt(war_cost * (1 + (UnitCostBuffPrc + prc)));
            unit_resultCost[1] = Mathf.RoundToInt(arc_cost * (1 + (UnitCostBuffPrc + prc)));
            unit_resultCost[2] = Mathf.RoundToInt(mag_cost * (1 + (UnitCostBuffPrc + prc)));
        }
        UnitCostBuffPrc += prc;
        UnitCostSetting();
    }

    public void UnitCostSetting()
    {
        Unit1.text = unit_resultCost[0].ToString();
        Unit2.text = unit_resultCost[1].ToString();
        Unit3.text = unit_resultCost[2].ToString();
    }

    public void BuildingCostEffect(float prc)
    {
        if(isBuildCostEffect)
        {
            buildEffects.Enqueue(prc);
            return;
        }
        else if(!isBuildCostEffect)
        {
            currentBuff = prc;
            isBuildCostEffect = true;
            for(int i = 0; i < 3; i++)
            {
                building_resultCost[i] = Mathf.RoundToInt(building_costs[i] * (1 + (BuildingCostBuffPrc + prc)));
            }
            BuildingCostBuffPrc += prc;
        }
        BuildingCostSetting();
    }

    public void BuildingCostSetting()
    {
        if(building1.GetComponent<CreateBuilding>().level < 3)
        {
            building1_cost.text = building_resultCost[building1.GetComponent<CreateBuilding>().level].ToString();
        }
        if(building2.GetComponent<CreateBuilding>().level < 3)
        {
            building2_cost.text = building_resultCost[building2.GetComponent<CreateBuilding>().level].ToString();
        }
        if(building3.GetComponent<CreateBuilding>().level < 3)
        {
            building3_cost.text = building_resultCost[building3.GetComponent<CreateBuilding>().level].ToString();
        }
    }

    public void UnitActiveCostEffect(int war, int arc, int mag)
    {
        war_act += war;
        arc_act += arc;
        mag_act += mag;
    }

    public void GoodsProductionEffect(int value)
    {
        foreach(Tile t in CentralProcessor.Instance.tiles)
        {
            t.money += value;
        }
    }

    public void OccupationCostEffect(float prc)
    {
        war_Occupation += prc;
        mag_Occupation += prc;
        //result_Occupation = occupationCost * (1 + (OccupationCostBuffPrc + prc));
        //OccupationCostBuffPrc += prc;
    }

    public void UnitDefensiveEffect(int war, int arc, int mag)
    {
        war_def += war;
        arc_def += arc;
        mag_def += mag;
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitDefenceEffect(7, war_def, arc_def, mag_def);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitDefenceEffect(8, war_def, arc_def, mag_def);
        }
    }

    public void BuildingBuff_unitCost(float prc)
    {
        unit_resultCost[0] = Mathf.RoundToInt(war_cost * (1 + (UnitCostBuffPrc + prc)));
        unit_resultCost[1] = Mathf.RoundToInt(arc_cost * (1 + (UnitCostBuffPrc + prc)));
        unit_resultCost[2] = Mathf.RoundToInt(mag_cost * (1 + (UnitCostBuffPrc + prc)));
        UnitCostBuffPrc += prc;
        UnitCostSetting();
    }

    public void BuildingBuff_buildingCost()
    {
        for(int i = 0; i < 3; i++)
        {
            building_resultCost[i] -= 100;
        }
        BuildingCostSetting();
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