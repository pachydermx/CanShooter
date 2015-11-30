using UnityEngine;
using System.Collections.Generic;
using Vuforia;

public class VirtualButtonHandler : MonoBehaviour, IVirtualButtonEventHandler {

	private int counter = 0;

	// Use this for initialization
	void Start () {
		// Register with the virtual buttons TrackableBehaviour
		VirtualButtonBehaviour[] vbs = GetComponentsInChildren<VirtualButtonBehaviour>();
		for (int i = 0; i < vbs.Length; ++i)
		{
			vbs[i].RegisterEventHandler(this);
		}

	}
	
	// Update is called once per frame
	void Update () {
	}

	public void OnButtonPressed(VirtualButtonAbstractBehaviour vb){
		Debug.Log("Pressed");
		this.gameObject.transform.FindChild("Shooter").SendMessage("Fire");

	}

	public void OnButtonReleased(VirtualButtonAbstractBehaviour vb){
	}
}
