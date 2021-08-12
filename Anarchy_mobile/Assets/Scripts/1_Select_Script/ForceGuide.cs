using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ForceGuide : MonoBehaviour //, IPointerEnterHandler, IPointerExitHandler
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
    public int      forceNum;
    public bool     selected = false;
    public Button   nextButton;
    public Button[] forces = new Button[3];

    public void SelectForce()
    {
        if(!selected)
        {
            foreach(Button f in forces)
            {
                f.GetComponent<ForceGuide>().CancelForce();
            }
            selected = true;
            nextButton.GetComponent<Button>().interactable = true;
            force_button.GetComponent<RectTransform>().sizeDelta = new Vector2(enterWidth, enterHeight);
            force_image.gameObject.SetActive(true);
            description.text = forceDisc;
            GameManager.instance.playerData.forceNumber = forceNum;
            GameManager.instance.SaveDataToJson();
        }
        else
        {
            CancelForce();
            nextButton.GetComponent<Button>().interactable = false;
        }
    }

    public void CancelForce()
    {
        selected = false;
        force_button.GetComponent<RectTransform>().sizeDelta = new Vector2(exitWidth, exitHeight);
        force_image.gameObject.SetActive(false);
    }
}
