using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CanTable : MonoBehaviour {
	public GameObject CanPrefab;
	public GameObject ExplosiveCanPrefab;
	public int currentStage = -1;
	public int canRemain = -1;

	private Vector3 Size = new Vector3(1, 1, 1);
	private static Vector3[] stage1 = {
		new Vector3(0f,0f,0.5f),
		new Vector3(0f,0f,-0.5f),
		new Vector3(0f,1f,0)
	};

	private static Vector3[] stage2 = {
		new Vector3(0f,0f,0.71f),
		new Vector3(0f,0f,-0.71f),
		new Vector3(0.71f,0f,0f),
		new Vector3(-0.71f,0f,0f),
		new Vector3(0f,1f,0)
	};

	private static Vector3[] stage3 = {
		new Vector3(0f,0f,0f),
		new Vector3(0f,0f,1.5f),
		new Vector3(0f,0f,-1.5f),
		new Vector3(0f,1f,0.75f),
		new Vector3(0f,1f,-0.75f),
		new Vector3(0f,2f,1.5f),
		new Vector3(0f,2f,-1.5f),
		new Vector3(0f,2f,0)
	};

	private static Vector3[] stage4 = {
		new Vector3(0f,0f,0.5f),
		new Vector3(0f,0f,-0.5f),
		new Vector3(-1f,0f,0f),
		new Vector3(1f,0f,0f),
		new Vector3(1f,0f,1f),
		new Vector3(1f,0f,-1f),
		new Vector3(0.5f,1f,1f),
		new Vector3(0.5f,1f,0.5f),
		new Vector3(0.5f,1f,-0.5f),
		new Vector3(0f,2f,0)
	};

	private static Vector3[] stage5 = {
		new Vector3(0f,0f,0f),
		new Vector3(0.71f,0f,0.71f),
		new Vector3(0.71f,0f,-0.71f),
		new Vector3(-0.71f,0f,0.71f),
		new Vector3(-0.71f,0f,0.71f),
		new Vector3(0.5f,1f,0.5f),
		new Vector3(0.5f,1f,-0.5f),
		new Vector3(-0.5f,1f,0.5f),
		new Vector3(-0.5f,1f,-0.5f),
		new Vector3(0f,2f,0.71f),
		new Vector3(0f,2f,-0.71f),
		new Vector3(0.71f,2f,0f),
		new Vector3(-0.71f,2f,0)
	};

	private static Vector3[] stage6 = {
		new Vector3(0f,0f,0.5f),
		new Vector3(0f,0f,-0.5f),
		new Vector3(0.87f,0f,0f),
		new Vector3(0.87f,0f,1f),
		new Vector3(0.87f,0f,-1f),
		new Vector3(-0.87f,0f,0f),
		new Vector3(-0.87f,0f,1f),
		new Vector3(-0.87f,0f,-1f),
		new Vector3(0.5f,1f,0.5f),
		new Vector3(0.5f,1f,-0.5f),
		new Vector3(-0.5f,1f,0.5f),
		new Vector3(-0.5f,1f,-0.5f),
		new Vector3(0f,2f,0.5f),
		new Vector3(0f,2f,-0.5f),
		new Vector3(0f,3f,0)
	};

	private static Vector3[] stage7 = {
		new Vector3(0f,0f,0.71f),
		new Vector3(0f,0f,-0.71f),
		new Vector3(0.71f,0f,0f),
		new Vector3(-0.71f,0f,0f),
		new Vector3(0f,1f,0.5f),
		new Vector3(0f,1f,-0.5f),
		new Vector3(0f,2f,0)
	};

	private Vector3[][] Stages = {stage1, stage2, stage3, stage4, stage5, stage6, stage7};
	private List<GameObject> Cans = new List<GameObject>();

	// Use this for initialization
	void Start () {
		nextStage();
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Alpha1)){
			foreach(Vector3 item in Stages[0]){
				Put(item, true);
			}
		}
		if(Input.GetKeyDown(KeyCode.Period)){
			nextStage();
		}
	}

	void Stage(int index){
		foreach(Vector3 item in Stages[index]){
			Put(item, false);
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
		StartCoroutine(NextStageWorker());
	}

	IEnumerator NextStageWorker(){
		yield return new WaitForSeconds(2);
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

	void Put(Vector3 pos, bool explosive){
		GameObject newCan;
		if (explosive){
			newCan = (GameObject) Instantiate(ExplosiveCanPrefab, transform.position + (new Vector3(pos.x, pos.y * 2 + 1, pos.z)) * 0.1f, transform.rotation);
		} else {
			newCan = (GameObject) Instantiate(CanPrefab, transform.position + (new Vector3(pos.x, pos.y * 2 + 1, pos.z)) * 0.1f, transform.rotation);
		}
		newCan.transform.parent = this.gameObject.transform;
		//Rigidbody rb = (Rigidbody) newCan.GetComponent<Rigidbody>();
		Cans.Add(newCan);
	}


	void Explode(Vector3 position){
		foreach(GameObject theCan in Cans){
			Rigidbody rb = (Rigidbody) theCan.GetComponent<Rigidbody>();
			rb.AddExplosionForce(10, position, 10);
		}
	}

}
