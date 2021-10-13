using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(TileGeneratorScript))]
public class TileGeneratorEditor : Editor 
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();

        TileGeneratorScript tg = (TileGeneratorScript)target;
        if (GUILayout.Button("Create New Tile"))
        {
            tg.CreateNewTile();
        }
        if (GUILayout.Button("Delete Tiles"))
        {
            tg.DeleteCreatedTiles();
        }
        if(GUILayout.Button("Create Prefabs From This Tiles"))
        {
            List<GameObject> objectArray = tg.createdTiles;

            foreach (GameObject gameObject in objectArray)
            {
                //Set the path as within the Assets folder, and name it as the GameObject's name with the .prefab format
                string localPath = "Assets/" + gameObject.name + ".prefab";

                //Check if the Prefab and/or name already exists at the path
                if (AssetDatabase.LoadAssetAtPath(localPath, typeof(GameObject)))
                {
                    //Create dialog to ask if User is sure they want to overwrite existing prefab
                    if (EditorUtility.DisplayDialog("Are you sure?",
                            "The prefab already exists. Do you want to overwrite it?",
                            "Yes",
                            "No"))
                    //If the user presses the yes button, create the Prefab
                    {
                        CreateNew(gameObject, localPath);
                    }
                }
                //If the name doesn't exist, create the new Prefab
                else
                {
                    Debug.Log(gameObject.name + " is not a prefab, will convert");
                    CreateNew(gameObject, localPath);
                }
            }
        }
    }
    static void CreateNew(GameObject obj, string localPath)
    {
        //Create a new prefab at the path given
        Object prefab = PrefabUtility.CreatePrefab(localPath, obj);
        PrefabUtility.ReplacePrefab(obj, prefab, ReplacePrefabOptions.ConnectToPrefab);
    }
}
