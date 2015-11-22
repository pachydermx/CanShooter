using UnityEngine;
using System.Collections.Generic;
using Vuforia;

public class VirtualButtonHandler : MonoBehaviour, IVirtualButtonEventHandler {

	public GameObject myTofu;
	public Rigidbody rb;
	public GameObject bullet;
	private int counter = 0;

	// Use this for initialization
	void Start () {
		// Register with the virtual buttons TrackableBehaviour
		VirtualButtonBehaviour[] vbs = GetComponentsInChildren<VirtualButtonBehaviour>();
		for (int i = 0; i < vbs.Length; ++i)
		{
			vbs[i].RegisterEventHandler(this);
		}

		myTofu = transform.FindChild("Tofu").gameObject;
		rb = myTofu.GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void OnButtonPressed(VirtualButtonAbstractBehaviour vb){
		Debug.Log("Pressed");
		rb.AddForce(0, 1000f, 0);

		myTofu.SetActive(false);
		Rigidbody test = (Rigidbody) Instantiate(bullet, transform.position, transform.rotation);
		test.GetComponent<Rigidbody>().AddForce(0, 30, 0);
	}

	public void OnButtonReleased(VirtualButtonAbstractBehaviour vb){
	}
}
