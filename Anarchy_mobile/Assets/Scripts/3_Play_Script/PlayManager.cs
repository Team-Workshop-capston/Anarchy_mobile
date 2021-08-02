using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayManager : MonoBehaviour
{
    private void Start()
    {
        GameManager.instance.audioManager.StartGameSceneBGM();
    }
}
