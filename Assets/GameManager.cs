using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour {
	public GameObject ScoreDisplay;
	public GameObject AmmoDisplay;
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
		/*
		TextMesh tm = ScoreDisplay.GetComponent<TextMesh>();
		tm.text = "Score: " + Score;

		tm = AmmoDisplay.GetComponent<TextMesh>();
		tm.text = "Ammo: " + Ammo;
		*/
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
	}
}
