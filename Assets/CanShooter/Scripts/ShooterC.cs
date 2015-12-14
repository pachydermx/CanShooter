using UnityEngine;
using System.Collections;

public class ShooterC : MonoBehaviour {
	public GameObject Bullet;
	private float RotateSpeed = 50;
	public GameObject Table;
	public GameObject Manager;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.J)){
			Manager.SendMessage("RequestAmmo", this.gameObject);
		}
		if(Input.GetKey(KeyCode.W)){
			transform.Rotate(-Vector3.forward * RotateSpeed * Time.deltaTime);
		}
		if(Input.GetKey(KeyCode.S)){
			transform.Rotate(Vector3.forward * RotateSpeed * Time.deltaTime);
		}
		if(Input.GetKey(KeyCode.A)){
			transform.Rotate(-Vector3.up * RotateSpeed * Time.deltaTime);
		}
		if(Input.GetKey(KeyCode.D)){
			transform.Rotate(Vector3.up * RotateSpeed * Time.deltaTime);
		}
	}


	void Fire () {
		Vector3 delta = new Vector3(0, 0, 0);
		GameObject bullet;
		bullet = (GameObject) Instantiate(Bullet, this.transform.position + delta, this.transform.rotation);
		//bullet.transform.localScale = new Vector3(1, 1, 1) * 1;
		Rigidbody rb = (Rigidbody) bullet.GetComponent<Rigidbody>();
		rb.AddForce(transform.forward * 350);
		//bullet.transform.parent = Table.transform;
	}

	void askAmmo () {
		Manager.SendMessage("RequestAmmo", this.gameObject);
	}
}
