using UnityEngine;
using System.Collections;

public class AutoDelete : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (transform.position.y < -300){
			Destroy(this.gameObject);
		}
	}
}
