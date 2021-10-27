using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;

public class Opening : MonoBehaviour
{
    public VideoPlayer videoPlayer;
    float time = 0;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(videoPlayer.length);
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(time);
        if(time > 44f)
        {
            Title();
        }
        time += Time.deltaTime;
    }

    public void Title()
    {
        SceneManager.LoadScene(1);
    }
}
