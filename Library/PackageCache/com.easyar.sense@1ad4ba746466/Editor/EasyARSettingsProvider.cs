//================================================================================================================================
//
//  Copyright (c) 2015-2022 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
//  EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
//  and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//================================================================================================================================

using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace easyar
{
    internal class EasyARSettingsProvider : SettingsProvider
    {
        SerializedObject settingsWrapper;
        Editor cachedEditor;

        public EasyARSettingsProvider() : base("Project/EasyAR", SettingsScope.Project, new string[] { "XR" })
        {
            if (EasyARSettings.ConfigObject == null)
            {
                Create();
            }
        }

        internal static EasyARSettingsProvider Instance { get; private set; }

        [SettingsProvider]
        public static SettingsProvider CreateSettingsProvider()
        {
            if (Instance == null)
            {
                Instance = new EasyARSettingsProvider();
            }
            return Instance;
        }

        public override void OnGUI(string searchContext)
        {
            if (settingsWrapper == null || settingsWrapper.targetObject == null)
            {
                ScriptableObject settings = (EasyARSettings.ConfigObject != null) ? EasyARSettings.ConfigObject : Create();
                InitEditorData(settings);
            }

            if (settingsWrapper != null && settingsWrapper.targetObject != null && cachedEditor != null)
            {
                settingsWrapper.Update();
                cachedEditor.OnInspectorGUI();
                settingsWrapper.ApplyModifiedProperties();
            }
        }

        public override void OnActivate(string searchContext, VisualElement rootElement)
        {
            InitEditorData(EasyARSettings.ConfigObject);
        }

        public override void OnDeactivate()
        {
            cachedEditor = null;
            settingsWrapper = null;
        }

        ScriptableObject Create()
        {
            var settings = ScriptableObject.CreateInstance<EasyARSettings>();
            if (!settings) { return null; }

            string path = "Assets";
            foreach (var folder in new string[] { "XR", "Settings" })
            {
                string subFolder = Path.Combine(path, folder);
                bool shouldCreate = true;
                foreach (var _ in AssetDatabase.GetSubFolders(path).Where(f => string.Compare(Path.GetFullPath(f), Path.GetFullPath(subFolder), true) == 0))
                {
                    shouldCreate = false;
                    break;
                }

                if (shouldCreate)
                {
                    AssetDatabase.CreateFolder(path, folder);
                }
                path = subFolder;
            }

            path = Path.Combine(path, "EasyAR Settings.asset");
            AssetDatabase.CreateAsset(settings, path);
            EasyARSettings.ConfigObject = settings;
            return settings;
        }

        void InitEditorData(ScriptableObject settings)
        {
            if (!settings) { return; }
            settingsWrapper = new SerializedObject(settings);
            Editor.CreateCachedEditor(settings, null, ref cachedEditor);
        }
    }
}
