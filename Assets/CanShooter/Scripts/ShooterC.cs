using UnityEngine;
using System.Collections;

public class ShooterC : MonoBehaviour {
	public GameObject Bullet;
	private float RotateSpeed = 50;
	public GameObject Table;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.J)){
			Fire();
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
		Vector3 delta = new Vector3(0, 1, 0);
		GameObject bullet = (GameObject) Instantiate(Bullet, transform.position + delta, transform.rotation);
		bullet.transform.localScale = new Vector3(1f, 1, 1);
		Rigidbody rb = (Rigidbody) bullet.GetComponent<Rigidbody>();
		rb.AddForce(transform.right * -2000);
		bullet.transform.parent = Table.transform;
	}
}
