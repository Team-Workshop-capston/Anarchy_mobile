using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileGeneratorScript : MonoBehaviour
{
    [Header("Named")]
    public string tileName;
    public bool addNumberToName;
    int tilesCreated = 0;
    [Header("Parts")]
    public List<GameObject> topParts;
    public List<GameObject> mainParts;
    public List<GameObject> fillParts;
    [Header("Generation Parameters")]
    public bool randomizeFillChilds;
    public bool randomizeChildsRotation;
    public bool randomizeMainPartRotation;
    public bool randomizeMainPartSize;
    [Header("Position Settings")]
    public bool changeSpawnPositionAfterCreate;
    public float distance = 2.5f;
    public int tilesPerLine = 5;
    public Vector3 spawnPosition;
    [Header("Count")]
    public int amountForCreation = 1;

    [Header("Prefabs Creating Settings")]
    public List<GameObject> createdTiles = new List<GameObject>();
    public void CreateNewTile()
    {
        DeleteCreatedTiles();
        Vector3 startPos = spawnPosition;
        for (int a = 0; a < amountForCreation; a++)
        {
            if (tilesCreated % tilesPerLine == 0)
            {
                spawnPosition.z += distance;
                spawnPosition.x = 0;
            }
            List<GameObject> toDestroy = new List<GameObject>();
            GameObject newTile = Instantiate(topParts[Random.Range(0, topParts.Count)], spawnPosition, new Quaternion());
            createdTiles.Add(newTile);
            newTile.name = tileName + "_" + (addNumberToName ? tilesCreated.ToString() : "");
            GameObject main = Instantiate(mainParts[Random.Range(0, mainParts.Count)], newTile.transform);
            if (randomizeMainPartSize)
            {
                main.transform.localScale = new Vector3(Random.Range(0.5f, 1f), 1f, Random.Range(0.5f, 1f));
            }
            if (randomizeMainPartRotation)
            {
                switch (Random.Range(0, 4))
                {
                    case 0:
                        {
                            main.transform.localEulerAngles = new Vector3(0, 0, 0);
                            break;
                        }
                    case 1:
                        {
                            main.transform.localEulerAngles = new Vector3(0, 90, 0);
                            break;
                        }
                    case 2:
                        {
                            main.transform.localEulerAngles = new Vector3(0, 180, 0);
                            break;
                        }
                    case 3:
                        {
                            main.transform.localEulerAngles = new Vector3(0, 270, 0);
                            break;
                        }
                }
            }
            GameObject fill = Instantiate(fillParts[Random.Range(0, fillParts.Count)], newTile.transform);
            switch (Random.Range(0, 4))
            {
                case 0:
                    {
                        fill.transform.localEulerAngles = new Vector3(0, 0, 0);
                        break;
                    }
                case 1:
                    {
                        fill.transform.localEulerAngles = new Vector3(0, 90, 0);
                        break;
                    }
                case 2:
                    {
                        fill.transform.localEulerAngles = new Vector3(0, 180, 0);
                        break;
                    }
                case 3:
                    {
                        fill.transform.localEulerAngles = new Vector3(0, 270, 0);
                        break;
                    }
            }
            if (randomizeFillChilds)
            {
                for (int i = 0; i < fill.transform.childCount; i++)
                {
                    fill.transform.GetChild(i).gameObject.SetActive(Random.Range(0, 2) == 0 ? false : true);
                    if (fill.transform.GetChild(i).gameObject.activeSelf)
                    {
                        if (randomizeChildsRotation)
                        {
                            fill.transform.GetChild(i).localEulerAngles = new Vector3(0, Random.Range(0f, 360f), 0);
                        }
                    }
                    else
                    {
                        toDestroy.Add(fill.transform.GetChild(i).gameObject);
                    }
                }
            }
            for (int i = toDestroy.Count - 1; i >= 0; i--)
            {
                DestroyImmediate(toDestroy[i]);
            }
            if (changeSpawnPositionAfterCreate)
            {
                spawnPosition.x += distance;
            }
            tilesCreated++;
        }
        tilesCreated = 0;
        spawnPosition = startPos;
    }
    public void DeleteCreatedTiles()
    {
        for (int i = createdTiles.Count - 1; i >= 0; i--)
        {
            GameObject forDestroy = createdTiles[i];
            createdTiles.Remove(forDestroy);
            DestroyImmediate(forDestroy);
        }
    }
}
