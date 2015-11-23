using UnityEngine;
using System.Collections;

public class CanTable : MonoBehaviour {
	public GameObject CanPrefab;
	private Vector3 Size = new Vector3(1, 1, 1);
	private static Vector3[] stage1 = {
		new Vector3(0, 1, 0),
		new Vector3(0, 1, 1),
		new Vector3(0, 1, -1)
	};
	private static Vector3[] stage2 = {
		new Vector3(0, 1, -0.5f),
		new Vector3(0, 1, 0.5f),
		new Vector3(0, 3, 0),
	};

	private Vector3[][] Stages = {stage1, stage2};

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Alpha1)){
			Stage (0);
		}
		if(Input.GetKeyDown(KeyCode.Alpha2)){
			Stage (1);
		}
	}

	void Stage(int index){
		foreach(Vector3 item in Stages[index]){
			Put(item);
		}
	}

	void Put(Vector3 pos){
		GameObject newCan = (GameObject) Instantiate(CanPrefab, transform.position + pos + new Vector3(0, 0.5f, 0), transform.rotation);
		Rigidbody rb = (Rigidbody) newCan.GetComponent<Rigidbody>();
	}

}
