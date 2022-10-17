using System.Collections;
using UnityEngine;

//[RequireComponent(typeof(ARRaycastManager))]
public class ARTapToPlacePlane : MonoBehaviour
{
    [SerializeField] private GameObject _startPoint;
    private GameObject _trackerPoint;

    void Start()
    {
        StartCoroutine(Find());
    }

    public void SetUpWorldStartPosition()
    {
        if (_startPoint != null)
        {
            var a = Instantiate(_startPoint, _trackerPoint.transform.position, _trackerPoint.transform.rotation);
            a.transform.SetParent(null);
            StopAllCoroutines();
            this.enabled = false;
        }
    }

    IEnumerator Find()
    {
        while (true)
        {
            yield return new WaitForSeconds(2f);
            _trackerPoint = GameObject.FindWithTag("Start");
        }
    }
    
    /*[SerializeField] private GameObject _gameObjectToInstantiate;

    private GameObject _spawnedObject;
    private ARRaycastManager _arRaycastManager;
    private Vector2 _touchPosition;

    private static List<ARRaycastHit> _hits = new List<ARRaycastHit>();

    private void Awake()
    {
        _arRaycastManager = GetComponent<ARRaycastManager>();
    }

    bool TryToGetTouchPosition(out Vector2 _touchPosition)
    {
        if (Input.touchCount > 0)
        {
            _touchPosition = Input.GetTouch(0).position;
            return true;
        }

        _touchPosition = default;
        return false;
    }
    
    void Update()
    {
        if(!TryToGetTouchPosition(out Vector2 _touchPosition))
            return;
        if (_arRaycastManager.Raycast(_touchPosition, _hits, TrackableType.PlaneWithinPolygon))
        {
            var hitPose = _hits[0].pose;

            if (_spawnedObject == null)
            {
                _spawnedObject = Instantiate(_gameObjectToInstantiate, hitPose.position, hitPose.rotation);
            }
            else
            {
                _spawnedObject.transform.position = hitPose.position;
            }

            _spawnedObject.transform.position = new Vector3(_spawnedObject.transform.position.x,
                _spawnedObject.transform.position.y - 10, _spawnedObject.transform.position.z);
        }
    }*/
}
