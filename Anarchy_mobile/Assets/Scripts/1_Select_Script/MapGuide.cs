using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MapGuide : MonoBehaviour
{
    public void SelectMap()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        // GameManager.instance.playerData.mapNumber = 1;
        // GameManager.instance.SaveDataToJson();
        SceneManager.LoadScene(2);
    }
}
