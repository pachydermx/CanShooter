using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour {
	public GameObject InfoDisplay;
	public GameObject ct;

	public int Score = 0;
	public int Ammo = 100;

	// Use this for initialization
	void Start () {
		UpdateDisplay();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void UpdateDisplay () {
		UnityEngine.UI.Text textBox =  InfoDisplay.GetComponent<UnityEngine.UI.Text>();
		textBox.text = "Score: " + Score + "\nAmmo: " + Ammo;
	}

	void AddScore(int delta){
		Score += delta;
		UpdateDisplay();
		// check cans
		ct.SendMessage("canDestroied");
	}

	void RequestAmmo(GameObject sender) {
		if (Ammo > 0) {
			Ammo--;
			sender.SendMessage("Fire");
			UpdateDisplay();
		}
		Debug.Log("Bullet Used Up");
	}

}
