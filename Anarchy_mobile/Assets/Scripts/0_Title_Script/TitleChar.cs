using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TitleChar : MonoBehaviour
{
    public Image    mafia;
    public Image    new_wave;
    public Image    society;
    Color           m_fadecolor;
    Color           n_fadecolor;
    Color           s_fadecolor;
    float           start = 0f;
    float           end = 1f;
    float           time;
    float           FadeTime = 1f;
    public bool     fade = false;
    
    void Start()
    {
        m_fadecolor = mafia.color;
        n_fadecolor = new_wave.color;
        s_fadecolor = society.color;
        StartCoroutine("MafiaCharFadeIn");
    }

    IEnumerator MafiaCharFadeIn()
    {
        mafia.gameObject.SetActive(true);
        time = 0f;
        m_fadecolor.a = Mathf.Lerp(start, end, time);
        while(true)
        {
            yield return null;
            if(fade)
            {
                StartCoroutine("MafiaCharFadeOut");
                StopCoroutine("MafiaCharFadeIn");
            }
            if(m_fadecolor.a < 1f)
            {
                time += Time.deltaTime / FadeTime;
                m_fadecolor.a = Mathf.Lerp(start, end, time);
                mafia.color = m_fadecolor;
            }
            if(m_fadecolor.a == 1f)
            {
                fade = true;
                yield return new WaitForSeconds(1.5f);
            }   
        }
    }

    IEnumerator MafiaCharFadeOut()
    {
        time = 0f;
        m_fadecolor.a = Mathf.Lerp(end, start, time);
        while(true)
        {
            yield return null;
            if(!fade)
            {
                StartCoroutine("NewWaveCharFadeIn");
                StopCoroutine("MafiaCharFadeOut");
                mafia.gameObject.SetActive(false);
            }
            if(m_fadecolor.a > 0f)
            {
                time += Time.deltaTime / FadeTime;
                m_fadecolor.a = Mathf.Lerp(end, start, time);
                mafia.color = m_fadecolor;
            }
            if(m_fadecolor.a == 0f)
            {
                fade = false;
                mafia.color = m_fadecolor;
                yield return new WaitForSeconds(0.4f);
            }   
        }
    }

    IEnumerator NewWaveCharFadeIn()
    {
        new_wave.gameObject.SetActive(true);
        time = 0f;
        n_fadecolor.a = Mathf.Lerp(start, end, time);
        while(true)
        {
            yield return null;
            if(fade)
            {
                StartCoroutine("NewWaveCharFadeOut");
                StopCoroutine("NewWaveCharFadeIn");
            }
            if(n_fadecolor.a < 1f)
            {
                time += Time.deltaTime / FadeTime;
                n_fadecolor.a = Mathf.Lerp(start, end, time);
                new_wave.color = n_fadecolor;
            }
            if(n_fadecolor.a == 1f)
            {
                fade = true;
                yield return new WaitForSeconds(1.5f);
            }   
        }
    }

    IEnumerator NewWaveCharFadeOut()
    {
        time = 0f;
        n_fadecolor.a = Mathf.Lerp(end, start, time);
        while(true)
        {
            yield return null;
            if(!fade)
            {
                StartCoroutine("SocietyCharFadeIn");
                StopCoroutine("NewWaveCharFadeOut");
                new_wave.gameObject.SetActive(false);
            }
            if(n_fadecolor.a > 0f)
            {
                time += Time.deltaTime / FadeTime;
                n_fadecolor.a = Mathf.Lerp(end, start, time);
                new_wave.color = n_fadecolor;
            }
            if(n_fadecolor.a == 0f)
            {
                fade = false;
                new_wave.color = n_fadecolor;
                yield return new WaitForSeconds(0.4f);
            }   
        }
    }

    IEnumerator SocietyCharFadeIn()
    {
        society.gameObject.SetActive(true);
        time = 0f;
        s_fadecolor.a = Mathf.Lerp(start, end, time);
        while(true)
        {
            yield return null;
            if(fade)
            {
                StartCoroutine("SocietyCharFadeOut");
                StopCoroutine("SocietyCharFadeIn");
            }
            if(s_fadecolor.a < 1f)
            {
                time += Time.deltaTime / FadeTime;
                s_fadecolor.a = Mathf.Lerp(start, end, time);
                society.color = s_fadecolor;
            }
            if(s_fadecolor.a == 1f)
            {
                fade = true;
                yield return new WaitForSeconds(1.5f);
            }    
        }
    }

    IEnumerator SocietyCharFadeOut()
    {
        time = 0f;
        s_fadecolor.a = Mathf.Lerp(end, start, time);
        while(true)
        {
            yield return null;
            if(!fade)
            {
                StartCoroutine("MafiaCharFadeIn");
                StopCoroutine("SocietyCharFadeOut");
                society.gameObject.SetActive(false);
            }
            if(s_fadecolor.a > 0f)
            {
                time += Time.deltaTime / FadeTime;
                s_fadecolor.a = Mathf.Lerp(end, start, time);
                society.color = s_fadecolor;
            }
            if(s_fadecolor.a == 0f)
            {
                fade = false;
                society.color = s_fadecolor;
                yield return new WaitForSeconds(0.4f);
            }   
        }
    }
}
