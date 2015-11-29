struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 61 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//18. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//19. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//20. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//21. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//22. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//23. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//24. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//25. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//26. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//27. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//28. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//29. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//30. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//31. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//32. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//33. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//34. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//35. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//36. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//37. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//38. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//39. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//40. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//41. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//42. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//43. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//44. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//45. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//46. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//47. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//48. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//49. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//50. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//51. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//52. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//53. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//54. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//55. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//56. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//57. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//58. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//59. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//60. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
