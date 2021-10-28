using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Opening : MonoBehaviour
{
    public VideoPlayer videoPlayer;
    public Image back;
    float time = 0;
    // Start is called before the first frame update
    void Start()
    {
        // if(videoPlayer.isPlaying)
        // {
        //     back.gameObject.SetActive(false);
        // }
    }

    // Update is called once per frame
    void Update()
    {
        if(videoPlayer.isPlaying)
        {
            back.gameObject.SetActive(false);
        }
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
