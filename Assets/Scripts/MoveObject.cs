using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveObject : MonoBehaviour
{
    private Button Button;

    private ImageController ImageControllerScript;

    [SerializeField] private GameObject ObjectToMove;

    public Vector3 position;

    void Start()
    {
        ImageControllerScript = FindObjectOfType<ImageController>();

        Button = GetComponent<Button>();
        Button.onClick.AddListener(Move);
    }

    // Update is called once per frame
    private void Move()
    {
        ObjectToMove = GameObject.Find("Room(Clone)");
        ObjectToMove.transform.position += position;
    }
}
