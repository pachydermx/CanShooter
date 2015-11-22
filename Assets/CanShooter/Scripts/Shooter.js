#pragma strict

var Bullet: GameObject;

function Start () {
	Fire();
}

function Update () {

}

function Fire () {
	var bullet: GameObject = Instantiate(Bullet, transform.position, transform.rotation);
	
	var rb: Rigidbody = bullet.GetComponent(Rigidbody);
	rb.AddForce(transform.up * 10, ForceMode.VelocityChange);
	
	
}