using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ForceGuide : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public Button   force_button;
    public Image    force_image;
    public Text     description;
    int             enterWidth = 410;
    int             enterHeight = 630;
    int             exitWidth = 380;
    int             exitHeight = 600;
    [TextArea]
    public string   forceDisc;

    public void OnPointerEnter(PointerEventData eventData)
    {
        force_button.GetComponent<RectTransform>().sizeDelta = new Vector2(enterWidth, enterHeight);
        force_image.gameObject.SetActive(true);
        description.text = forceDisc;
    }
 
    public void OnPointerExit(PointerEventData eventData)
    {
        force_button.GetComponent<RectTransform>().sizeDelta = new Vector2(exitWidth, exitHeight);
        force_image.gameObject.SetActive(false);
    }
}
