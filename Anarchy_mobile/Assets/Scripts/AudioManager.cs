using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudioManager : MonoBehaviour
{
    static public AudioManager instance;
    GameObject BackgroundMusic;
    AudioSource backmusic;
    AudioSource buttonSound;
    public AudioSource title;
    public AudioSource lobby;
    public AudioSource game;
    public AudioSource gameover;
    public AudioSource button;

    void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        backmusic = this.gameObject.GetComponent<AudioSource>();
        backmusic.clip = title.clip;
        backmusic.Play();
    }

    public void StartLobbyBGM()
    {
        backmusic.clip = lobby.clip;
        backmusic.Play(); 
    }

    public void StartGameSceneBGM()
    {
        backmusic.clip = game.clip;
        backmusic.Play();
    }

    public void ButtonClickSound()
    {
        button.Play();
    }

    public void StartGameOverBGM()
    {
        backmusic.clip = gameover.clip;
        backmusic.Play(); 
    }

    public void StartTitleBGM()
    {
        backmusic.clip = title.clip;
        backmusic.Play(); 
    }

    public void StopBGM()
    {
        backmusic.Stop();
    }
}
