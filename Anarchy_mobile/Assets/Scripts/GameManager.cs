using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class GameManager : MonoBehaviour
{
    private static GameManager  main;
    public static GameManager   instance
    {
        get
        {
            return main;
        }
    }
    public PlayerData playerData;

    private void Awake()
    {
        var objs = FindObjectsOfType<GameManager>();
        if(objs.Length != 1)
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);

        Application.targetFrameRate = 60;
        Time.timeScale = 1;

        main = this;
    }

    public void SaveDataToJson()
    {
        string jsondata = JsonUtility.ToJson(playerData,true);
        string path = Path.Combine(Application.dataPath,"playerData.json");
        File.WriteAllText(path, jsondata);
    }

    public void LoadDataToJson()
    {
        string path = Path.Combine(Application.dataPath,"playerData.json");
        string jsondata = File.ReadAllText(path);
        playerData = JsonUtility.FromJson<PlayerData>(jsondata);
    }
}

[System.Serializable]
public class PlayerData
{
    public int forceNumber = -1;
    public int mapNumber = -1;
}