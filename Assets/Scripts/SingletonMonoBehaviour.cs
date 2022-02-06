using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SingletonMonoBehaviour<TYpe> : MonoBehaviour where TYpe : MonoBehaviour
{
    private static TYpe instance;

    public static TYpe Instance
    {
        get
        {
            if (instance != null) return instance;
            instance = FindObjectOfType<TYpe>();
            if (instance == null)
            {
                // using SystemÇ™è„ãLÇ…Ç»Ç¢Ç∆ÉGÉâÅ[Ç…Ç»ÇÈ
                throw new Exception("Component not found");
            }
            return instance;
        }
    }

    virtual protected void Awake()
    {
        if (instance == null)
        {
            instance = this as TYpe;
        }
        if (instance != this)
        {
            Destroy(this);
        }
    }
}
