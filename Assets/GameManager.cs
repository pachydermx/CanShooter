using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour {
	public GameObject InfoDisplay;
	public GameObject ct;

	public GameObject ScoreBoard;
	public GameObject NameInput;
	public GameObject SubmitButton;

	public int Score = 0;
	public int Ammo = 5;

	private int DefaultAmmo = 5;

	// Use this for initialization
	void Start () {
		UpdateDisplay();

		SubmitButton.GetComponent<UnityEngine.UI.Button>().onClick.AddListener (() => {
			Debug.Log("clicked" );
			requestAddScore();
			SetUI(2);
		});

		SetUI(0);

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void SetUI(int mode){
		switch(mode){
		case 0:
			ScoreBoard.SetActive(false);
			NameInput.SetActive(false);
			SubmitButton.SetActive(false);
			break;
		case 1:
			ScoreBoard.SetActive(false);
			NameInput.SetActive(true);
			SubmitButton.SetActive(true);
			break;
		case 2:
			ScoreBoard.SetActive(true);
			NameInput.SetActive(false);
			SubmitButton.SetActive(false);
			break;
		default:
			break;
		}
	}


	void UpdateDisplay () {
		UnityEngine.UI.Text textBox =  InfoDisplay.GetComponent<UnityEngine.UI.Text>();
		textBox.text = "Score: " + Score + "\nAmmo: " + Ammo;
	}

	void Bonus(){
		Ammo++;
		UpdateDisplay();
	}

	void AddScore(int delta){
		Score += delta;
		UpdateDisplay();
		// check cans
		ct.SendMessage("canDestroied");
	}

	void RequestAmmo(GameObject sender) {
		if (Ammo > 1) {
			Ammo--;
			sender.SendMessage("Fire");
			UpdateDisplay();
			SetUI(0);
		} else if (Ammo > 0){
			SetUI(1);
		}
	}

	void ResetGame() {
		Score = 0;
		Ammo = DefaultAmmo;
		ct.SendMessage("GameReset");
		UpdateDisplay();
	}

	IEnumerator GetScoreBoard(){
		Caching.CleanCache();
		string url = "http://pachydermx.com/canshooter/show.php?t=" + Random.value;
		WWW www = new WWW(url);
		yield return www;
		if(www.error == null){
			ScoreBoard.GetComponent<UnityEngine.UI.Text>().text = www.text;
		} else {
			Debug.Log(www.error);
		}
		ResetGame();
	}

	void requestAddScore(){
		Debug.Log ("Request");
		StartCoroutine(AddScore());
	}

	IEnumerator AddScore(){
		Caching.CleanCache();
		Debug.Log("submitting");
		string name = NameInput.GetComponent<UnityEngine.UI.InputField>().text;
		WWWForm form = new WWWForm();
		form.AddField("name", name);
		form.AddField("score", Score.ToString());

		string url = "http://pachydermx.com/canshooter/add.php";
		WWW www = new WWW(url, form);
		yield return www;
		if(www.error == null){
			Debug.Log ("Added");
		} else {
			Debug.Log(www.error);
		}
		StartCoroutine(GetScoreBoard());
	}

}
