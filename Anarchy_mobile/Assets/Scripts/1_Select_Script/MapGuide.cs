using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MapGuide : MonoBehaviour
{
    public void SelectMap()
    {
        GameManager.instance.audioManager.ButtonClickSound();
        SceneManager.LoadScene(3);
    }
}
