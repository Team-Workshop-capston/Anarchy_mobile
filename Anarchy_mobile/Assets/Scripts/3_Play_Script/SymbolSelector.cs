using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SymbolSelector : MonoBehaviour
{
    public Image    symbol;
    public Sprite   new_wave_sym;
    public Sprite   society_sym;
    public Sprite   mafia_sym;

    private void Start()
    {
        switch(GameManager.instance.playerData.forceNumber)
        {
            case 1:
            symbol.sprite = society_sym;
            break;
            case 2:
            symbol.sprite = new_wave_sym;
            break;
            case 3:
            symbol.sprite = mafia_sym;
            break;
        }
    }
}
