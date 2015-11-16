using UnityEngine;
using System.Collections.Generic;
using Vuforia;

public class VirtualButtonHandler : MonoBehaviour, IVirtualButtonEventHandler {

	public GameObject myTofu;

	// Use this for initialization
	void Start () {
		// Register with the virtual buttons TrackableBehaviour
		VirtualButtonBehaviour[] vbs = GetComponentsInChildren<VirtualButtonBehaviour>();
		for (int i = 0; i < vbs.Length; ++i)
		{
			vbs[i].RegisterEventHandler(this);
		}

		myTofu = transform.FindChild("Tofu").gameObject;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void OnButtonPressed(VirtualButtonAbstractBehaviour vb){
		Debug.Log("Pressed");
		myTofu.SetActive(false);
	}

	public void OnButtonReleased(VirtualButtonAbstractBehaviour vb){
	}
}
