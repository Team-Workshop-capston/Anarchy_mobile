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

    public int[] result_UnitOffence = new int[3];
    public int[] result_UnitDefence = new int[3];
    public float UnitCostBuffPrc = 0;
    public float BuildingCostBuffPrc = 0;
    public float UnitOffenceBuffPrc = 0;
    public float UnitDefenceBuffPrc = 0;

    public int[] unit_resultCost = new int[3];
    public Text Unit1;
    public Text Unit2;
    public Text Unit3;
    public Queue<float> UnitEffects = new Queue<float>();
    public bool isUnitCostEffect = false;
    public float currentUnitBuff;

    public int War_offBuffPrc = 0;
    public int Arc_offBuffPrc = 0;
    public int Mag_offBuffPrc = 0;
    public int War_DefBuffPrc = 0;
    public int Arc_DefBuffPrc = 0;
    public int Mag_DefBuffPrc = 0;

    public int[] building_costs;
    public string[] building_names;
    public int[] building_resultCost = new int[3];
    public Button building1;
    public Button building2;
    public Button building3;
    public Text building1_name;
    public Text building2_name;
    public Text building3_name;
    public Text building1_cost;
    public Text building2_cost;
    public Text building3_cost;
    public bool isBuildCostEffect = false;
    public Queue<float> buildEffects = new Queue<float>();
    public float currentBuff;

    public float MoneyBuffPrc = 0;

    public int occupationCost = 1;
    public float result_Occupation = 1;
    public float OccupationCostBuffPrc = 0;

    bool isMaster;

    private void Start()
    {
        isMaster = CentralProcessor.Instance.isMaster;

        if(GameManager.instance.playerData.forceNumber == 1)
        {
            war_hp = society_Variable.war_hp;
            war_off = society_Variable.war_off;
            result_UnitOffence[0] = society_Variable.war_off;
            result_UnitDefence[0] = society_Variable.war_def;
            war_act = society_Variable.war_act;
            war_cost = society_Variable.war_cost;
            arc_hp = society_Variable.arc_hp;
            arc_off = society_Variable.arc_off;
            result_UnitOffence[1] = society_Variable.arc_off;
            result_UnitDefence[1] = society_Variable.arc_def;
            arc_act = society_Variable.arc_act;
            arc_cost = society_Variable.arc_cost;
            mag_hp = society_Variable.mag_hp;
            mag_off = society_Variable.mag_off;
            result_UnitOffence[2] = society_Variable.mag_off;
            result_UnitDefence[2] = society_Variable.mag_def;
            mag_act = society_Variable.mag_act;
            mag_cost = society_Variable.mag_cost;
        }
        else if(GameManager.instance.playerData.forceNumber == 2)
        {
            war_hp = new_Wave_Variable.war_hp;
            war_off = new_Wave_Variable.war_off;
            result_UnitOffence[0] = new_Wave_Variable.war_off;
            result_UnitDefence[0] = new_Wave_Variable.war_def;
            war_act = new_Wave_Variable.war_act;
            war_cost = new_Wave_Variable.war_cost;
            arc_hp = new_Wave_Variable.arc_hp;
            arc_off = new_Wave_Variable.arc_off;
            result_UnitOffence[1] = new_Wave_Variable.arc_off;
            result_UnitDefence[1] = new_Wave_Variable.arc_def;
            arc_act = new_Wave_Variable.arc_act;
            arc_cost = new_Wave_Variable.arc_cost;
            mag_hp = new_Wave_Variable.mag_hp;
            mag_off = new_Wave_Variable.mag_off;
            result_UnitOffence[2] = new_Wave_Variable.mag_off;
            result_UnitDefence[2] = new_Wave_Variable.mag_def;
            mag_act = new_Wave_Variable.mag_act;
            mag_cost = new_Wave_Variable.mag_cost;
        }
        else if(GameManager.instance.playerData.forceNumber == 3)
        {
            war_hp = mafia_Variable.war_hp;
            war_off = mafia_Variable.war_off;
            result_UnitOffence[0] = mafia_Variable.war_off;
            result_UnitDefence[0] = mafia_Variable.war_def;
            war_act = mafia_Variable.war_act;
            war_cost = mafia_Variable.war_cost;
            arc_hp = mafia_Variable.arc_hp;
            arc_off = mafia_Variable.arc_off;
            result_UnitOffence[1] = mafia_Variable.arc_off;
            result_UnitDefence[1] = mafia_Variable.arc_def;
            arc_act = mafia_Variable.arc_act;
            arc_cost = mafia_Variable.arc_cost;
            mag_hp = mafia_Variable.mag_hp;
            mag_off = mafia_Variable.mag_off;
            result_UnitOffence[2] = mafia_Variable.mag_off;
            result_UnitDefence[2] = mafia_Variable.mag_def;
            mag_act = mafia_Variable.mag_act;
            mag_cost = mafia_Variable.mag_cost;
        }
    }

    public void Test()
    {
        BuffSelect(3);
    }

    public void BuffSelect(int num)
    {
        switch(num)
        {
            case 1:
            UnitOffenceEffect(0.4f);
            break;
            case 2:
            UnitOffenceEffect(-0.2f);
            break;
            case 3:
            UnitCostEffect(-0.5f);
            break;
            case 4:
            UnitCostEffect(0.5f);
            break;
            case 5:
            BuildingCostEffect(-0.5f);
            break;
            case 6:
            BuildingCostEffect(0.5f);
            break;
            case 7:
            UnitActiveCostEffect(1);
            break;
            case 8:
            UnitActiveCostEffect(-1);
            break;
            case 9:
            GoodsProductionEffect(0.4f);
            break;
            case 10:
            GoodsProductionEffect(-0.2f);
            break;
            case 11:
            OccupationCostEffect(0.5f);
            break;
            case 12:
            OccupationCostEffect(-0.4f);
            break;
            case 13:
            UnitDefensiveEffect(0.4f);
            break;
            case 14:
            UnitDefensiveEffect(-0.2f);
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
                CentralProcessor.Instance.P1_core_Tile.money = 70;
            }
            else
            {
                CentralProcessor.Instance.P2_core_Tile.money = 70;
            }
            GoodsProductionSetting();
            break;
            case 2:
            foreach(Tile t in CentralProcessor.Instance.tiles)
            {
                t.money = 10;
            }
            if(isMaster)
            {
                CentralProcessor.Instance.P1_core_Tile.money = 70;
            }
            else
            {
                CentralProcessor.Instance.P2_core_Tile.money = 70;
            }
            GoodsProductionSetting();
            break;
            case 3:
            GoodsProductionEffect(0.2f);
            break;
            case 4:
            WarUnit_OffenceBuff(0.5f);
            break;
            case 5:
            ArcUnit_OffenceBuff(0.5f);
            MagUnit_OffenceBuff(0.5f);
            break;
            case 6:
            UnitOffenceEffect(0.5f);
            break;
            case 7:
            BuildingBuff_unitCost(-0.1f);
            BuildingBuff_buildingCost(-0.1f);
            break;
            case 8:
            BuildingBuff_unitCost(-0.2f);
            break;
            case 9:
            BuildingBuff_buildingCost(-0.2f);
            break;
        }
    }
    public void UnitOffenceEffect(float prc)
    {
        result_UnitOffence[0] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
        result_UnitOffence[1] = Mathf.RoundToInt(arc_off * (1 + (UnitOffenceBuffPrc + prc)));
        result_UnitOffence[2] = Mathf.RoundToInt(mag_off * (1 + (UnitOffenceBuffPrc + prc)));
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        UnitOffenceBuffPrc += prc;
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

    public void UnitActiveCostEffect(int number)
    {
        war_act += number;
        arc_act += number;
        mag_act += number;
    }

    public void GoodsProductionEffect(float prc)
    {
        foreach(Tile t in CentralProcessor.Instance.tiles)
        {
            t.result_money = Mathf.RoundToInt(t.money * (1 + (MoneyBuffPrc + prc)));
        }
        MoneyBuffPrc += prc;
    }

    public void GoodsProductionSetting()
    {
        foreach(Tile t in CentralProcessor.Instance.tiles)
        {
            t.result_money = Mathf.RoundToInt(t.money * (1 + MoneyBuffPrc));
        }
    }

    public void OccupationCostEffect(float prc)
    {
        result_Occupation = occupationCost * (1 + (OccupationCostBuffPrc + prc));
        OccupationCostBuffPrc += prc;
    }

    public void UnitDefensiveEffect(float prc)
    {
        result_UnitDefence[0] = Mathf.RoundToInt(war_def * (1 + (UnitDefenceBuffPrc + prc)));
        result_UnitDefence[1] = Mathf.RoundToInt(arc_def * (1 + (UnitDefenceBuffPrc + prc)));
        result_UnitDefence[2] = Mathf.RoundToInt(mag_def * (1 + (UnitDefenceBuffPrc + prc)));
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitDefenceEffect(7, result_UnitDefence[0], result_UnitDefence[1], result_UnitDefence[2]);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitDefenceEffect(8, result_UnitDefence[0], result_UnitDefence[1], result_UnitDefence[2]);
        }
        UnitDefenceBuffPrc += prc;
    }

    public void WarUnit_OffenceBuff(float prc)
    {
        result_UnitOffence[0] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        UnitOffenceBuffPrc += prc;
    }

    public void ArcUnit_OffenceBuff(float prc)
    {
        result_UnitOffence[1] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        UnitOffenceBuffPrc += prc;
    }

    public void MagUnit_OffenceBuff(float prc)
    {
        result_UnitOffence[2] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
        if(isMaster)
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        else
        {
            CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
        }
        UnitOffenceBuffPrc += prc;
    }

    public void BuildingBuff_unitCost(float prc)
    {
        unit_resultCost[0] = Mathf.RoundToInt(war_cost * (1 + (UnitCostBuffPrc + prc)));
        unit_resultCost[1] = Mathf.RoundToInt(arc_cost * (1 + (UnitCostBuffPrc + prc)));
        unit_resultCost[2] = Mathf.RoundToInt(mag_cost * (1 + (UnitCostBuffPrc + prc)));
        UnitCostBuffPrc += prc;
        UnitCostSetting();
    }

    public void BuildingBuff_buildingCost(float prc)
    {
        for(int i = 0; i < 3; i++)
        {
            building_resultCost[i] = Mathf.RoundToInt(building_costs[i] * (1 + (BuildingCostBuffPrc + prc)));
        }
        BuildingCostBuffPrc += prc;
        BuildingCostSetting();
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