using UnityEngine;
using System.Collections;

public class ExplosiveCan : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}

	void OnCollisionEnter(Collision collision) {
		if (collision.relativeVelocity.magnitude > 1){
			Debug.Log("C");
			GameObject Table = GameObject.Find("CanTable");
			Table.SendMessage("Explode", this.transform.position);
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}

}
