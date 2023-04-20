using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SerializableDictionary<TKey, TValue> : ISerializationCallbackReceiver
{
    [SerializeField]
    private List<TKey> keys = new List<TKey>();
    
    [SerializeField]
    private List<TValue> values = new List<TValue>();
    
    private Dictionary<TKey, TValue> dictionary = new Dictionary<TKey, TValue>();
    
    public void OnBeforeSerialize()
    {
        keys.Clear();
        values.Clear();
        
        foreach (KeyValuePair<TKey, TValue> pair in dictionary)
        {
            keys.Add(pair.Key);
            values.Add(pair.Value);
        }
    }
    
    public void OnAfterDeserialize()
    {
        dictionary.Clear();
        
        if (keys.Count != values.Count)
        {
            throw new System.Exception(string.Format("There are {0} keys and {1} values after deserialization. Make sure that both key and value types are serializable.", keys.Count, values.Count));
        }
        
        for (int i = 0; i < keys.Count; i++)
        {
            dictionary.Add(keys[i], values[i]);
        }
    }
    
    public void Add(TKey key, TValue value)
    {
        dictionary.Add(key, value);
    }
    
    public bool Remove(TKey key)
    {
        return dictionary.Remove(key);
    }
    
    public TValue this[TKey key]
    {
        get
        {
            return dictionary[key];
        }
        set
        {
            dictionary[key] = value;
        }
    }
    
    public Dictionary<TKey, TValue>.ValueCollection Values
    {
        get
        {
            return dictionary.Values;
        }
    }
    
    public Dictionary<TKey, TValue>.KeyCollection Keys
    {
        get
        {
            return dictionary.Keys;
        }
    }
}