using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour {
	public GameObject InfoDisplay;
	public GameObject ct;

	public GameObject ScoreBoard;
	public GameObject NameInput;
	public GameObject SubmitButton;

	public int Score = 0;
	public int Ammo = 10;

	private int DefaultAmmo = 10;

	// Use this for initialization
	void Start () {
		UpdateDisplay();

		SubmitButton.GetComponent<UnityEngine.UI.Button>().onClick.AddListener (() => {
			Debug.Log("Hello");
		});
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

			StartCoroutine( GetScoreBoard() );
		} else {
			Debug.Log("Bullet Used Up");
			ResetGame();
		}
	}

	void ResetGame() {
		Score = 0;
		Ammo = DefaultAmmo;
		ct.SendMessage("GameReset");
	}

	void ShowScoreBoard() {
		GetScoreBoard();
	}

	IEnumerator GetScoreBoard(){
		string url = "http://pachydermx.com/canshooter/test.php";
		WWW www = new WWW(url);
		yield return www;
		if(www.error == null){
			ScoreBoard.GetComponent<UnityEngine.UI.Text>().text = www.text;
		} else {
			Debug.Log(www.error);
		}
	}

}
