using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EffectSoundManager : MonoBehaviour
{
    public AudioSource[] sounds;
    bool soundOnOff = true;
    public Text effectOnOff;

    public void PlayButtonClickSound()
    {
        sounds[0].Play();
    }

    public void PlayMoveSound()
    {
        sounds[1].Play();
    }

    public void PlayDestroySound()
    {
        sounds[2].Play();
    }

    public void PlayOccupationSound()
    {
        sounds[3].Play();
    }

    public void PlayGoldSound()
    {
        sounds[4].Play();
    }

    public void EffectSoundOnOff()
    {
        if(soundOnOff)
        {
            effectOnOff.text = "OFF";
            soundOnOff = false;
            foreach(AudioSource sound in sounds)
            {
                sound.volume = 0;
            }
        }
        else
        {
            effectOnOff.text = "ON";
            soundOnOff = true;
            foreach(AudioSource sound in sounds)
            {
                sound.volume = 1;
            }
        }
        
    }
}
