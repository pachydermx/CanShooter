using UnityEngine;
using System.Collections;

public class ScoreNotificator : MonoBehaviour {
	public GameObject Manager;
	public int Score;

	// Use this for initialization
	void Start () {
		Manager = GameObject.Find("GameManager");
	}
	
	// Update is called once per frame
	void Update () {
		if(transform.eulerAngles.z >= 45 && transform.eulerAngles.z <= 315 || transform.position.y < -10){
			Manager.SendMessage("AddScore", Score);
			Destroy(this);
		}
	}
}
