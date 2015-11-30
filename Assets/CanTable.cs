using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CanTable : MonoBehaviour {
	public GameObject CanPrefab;
	public int currentStage = -1;
	public int canRemain = -1;

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
	private static Vector3[] stage3 = {
		new Vector3(0, 0, 0)
	};
	private static Vector3[] stage4 = {
		new Vector3(0, 1, -0.5f),
		new Vector3(0, 1, 0.5f),
		new Vector3(0, 3, 0),
		new Vector3(0.5f, 1, -0.5f),
		new Vector3(-0.5f, 1, 0.5f),
	};

	private Vector3[][] Stages = {stage1, stage2, stage3};
	private List<GameObject> Cans = new List<GameObject>();

	// Use this for initialization
	void Start () {
		nextStage();
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Alpha1)){
			Stage (0);
		}
		if(Input.GetKeyDown(KeyCode.Alpha2)){
			Stage (1);
		}
		if(Input.GetKeyDown(KeyCode.Alpha3)){
			Stage (2);
		}
		if(Input.GetKeyDown(KeyCode.Alpha4)){
			Stage (3);
		}
	}

	void Stage(int index){
		foreach(Vector3 item in Stages[index]){
			Put(item);
		}
		canRemain = Stages[index].Length;
	}

	void canDestroied(){
		canRemain--;
		if (canRemain == 0){
			nextStage();
		}
	}

	public void nextStage() {
		// reset
		foreach(GameObject theCan in Cans){
			Destroy(theCan);
		}
		Cans.Clear();
		if (currentStage < 0 || currentStage > Stages.Length - 2){
			currentStage = -1;
		}
		currentStage++;
		Stage (currentStage);
	}

	void Put(Vector3 pos){
		GameObject newCan = (GameObject) Instantiate(CanPrefab, transform.position + (pos + new Vector3(0, 0.5f, 0)) * 1, transform.rotation);
		newCan.transform.parent = this.gameObject.transform;
		Rigidbody rb = (Rigidbody) newCan.GetComponent<Rigidbody>();
		Cans.Add(newCan);
	}

}
