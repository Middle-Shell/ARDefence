//================================================================================================================================
//
//  Copyright (c) 2015-2022 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
//  EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
//  and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//================================================================================================================================

using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEngine;
#if UNITY_IOS
using UnityEditor.iOS.Xcode;
#endif

namespace easyar
{
    class BuildProcessor : IPreprocessBuildWithReport, IPostprocessBuildWithReport
    {
        public int callbackOrder => 1;

        static string[] shaderNames = new string[] {
            "EasyAR/CameraImage_RGB",
            "EasyAR/CameraImage_BGR",
            "EasyAR/CameraImage_Gray",
            "EasyAR/CameraImage_YUV_I420_YV12",
            "EasyAR/CameraImage_YUV_NV12",
            "EasyAR/CameraImage_YUV_NV21",
        };

        public void OnPreprocessBuild(BuildReport report)
        {
            try
            {
                PackageChecker.CheckPath();
                PackageChecker.CheckOldAssets();
                if (AssetDatabase.IsValidFolder("Assets/HiddenEasyAR"))
                {
                    AssetDatabase.DeleteAsset("Assets/HiddenEasyAR");
                }

                var settings = EasyARSettings.ConfigObject;
                if (settings == null)
                {
                    throw new FileNotFoundException("EasyAR Settings Asset");
                }

                if (settings.VerifyLicenseWhenBuild)
                {
                    var os = Optional<EngineOperatingSystem>.Empty;
                    switch (report.summary.platform)
                    {
                        case BuildTarget.iOS:
                            os = EngineOperatingSystem.iOS;
                            break;
                        case BuildTarget.Android:
                            os = EngineOperatingSystem.Android;
                            break;
                        case BuildTarget.StandaloneWindows:
                        case BuildTarget.StandaloneWindows64:
                            os = EngineOperatingSystem.Windows;
                            break;
                        case BuildTarget.StandaloneOSX:
                            os = EngineOperatingSystem.MacOS;
                            break;
                        default:
                            break;
                    }
                    if (string.IsNullOrEmpty(settings.LicenseKey))
                    {
                        Debug.LogWarning("EasyAR Sense license key is not set in Project Settings.");
                    }
                    if (os.OnSome && !string.IsNullOrEmpty(settings.LicenseKey))
                    {
                        var packageName = PlayerSettings.GetApplicationIdentifier(report.summary.platformGroup);
                        var license = settings.LicenseKey.Trim();
                        if (!Engine.isLicenseKeyMatched(license, packageName, Engine.variant(), os.Value))
                        {
                            var key = license;
                            if (key.Length > 10)
                            {
                                key = key.Substring(0, 5) + "..." + key.Substring(key.Length - 5, 5);
                            }
                            var idStr = "";
                            if (os.Value == EngineOperatingSystem.Android)
                            {
                                idStr = "package name";
                            }
                            else if (os.Value == EngineOperatingSystem.iOS)
                            {
                                idStr = "bundle identifier";
                            }

                            var idMessage = !string.IsNullOrEmpty(idStr) ? $"{idStr} ({packageName}) on" : "";

                            var variant = " " + Engine.variant();
                            if (variant == " community")
                            {
                                variant = "";
                            }
                            var message = $"\"{key}\" is not a valid EasyAR Sense license key or it does not match {idMessage} {os.Value} platform with EasyAR Sense{variant}.";
                            message += $" Please make sure the license key can be used in {os.Value} platform (go to www.easyar.com).";
                            if (!string.IsNullOrEmpty(idStr))
                            {
                                message += $" Please make sure {idStr} in Unity Player Settings (Project Settings > Player > {idStr}) match {idStr} in the license key (go to www.easyar.com).";
                            }

                            message += Environment.NewLine + $"If you setup license in a difference place,";
                            if (!string.IsNullOrEmpty(idStr))
                            {
                                message += $" or if you need to change {idStr} after Unity build process,";
                            }
                            message += " you can turn off VerifyLicenseWhenBuild option (EasyAR > Sense > Configuration > VerifyLicenseWhenBuild).";

                            var selection = EditorUtility.DisplayDialogComplex(
                                "Fail to verify EasyAR Sense license key",
                                message,
                                "Cancel build", "Continue anyway", "Continue and don't warn me again");

                            switch (selection)
                            {
                                case 0:
                                    SettingsService.OpenProjectSettings("Project/EasyAR");
                                    throw new BuildFailedException(message);
                                case 1:
                                    break;
                                case 2:
                                    settings.VerifyLicenseWhenBuild = false;
                                    break;
                            }
                        }
                    }
                }

                var permissions = settings.Permissions;

                if (report.summary.platform == BuildTarget.iOS)
                {
#if UNITY_2020_2_OR_NEWER
                    var videoRecording = false;
#else
                    var videoRecording = permissions.VideoRecording;
#endif
                    var hasNR = true;
#if EASYAR_USE_SEPERATE_BINDING
#error seperate binding cannot be used with this package
#else
                    PrepareOptionalNativePlugin($"Packages/com.easyar.sense/Runtime/Binding/Apple/iOS/ios-arm64_armv7/easyar.framework", videoRecording || !hasNR);
                    if (hasNR)
                    {
                        PrepareOptionalNativePlugin($"Packages/com.easyar.sense/Runtime/BindingNR/Apple/iOS/ios-arm64_armv7/easyar.framework", !videoRecording);
                    }
#endif

                    if (permissions.CameraDevice && string.IsNullOrEmpty(PlayerSettings.iOS.cameraUsageDescription))
                    {
                        throw new BuildFailedException("EasyAR Camera Device requires a Camera Usage Description (Player Settings > iOS > Other Settings > Camera Usage Description). You can turn this feature off if not used (EasyAR > Sense > Configuration > Permissions > Camera Device).");
                    }
                    if (videoRecording && string.IsNullOrEmpty(PlayerSettings.iOS.microphoneUsageDescription))
                    {
                        Debug.LogWarning("EasyAR Video Recording requires a Microphone Usage Description (Player Settings > iOS > Other Settings > Microphone Usage Description). You can turn this feature off if not used (EasyAR > Sense > Configuration > Permissions > Video Recording).");
                    }
#if EASYAR_ENABLE_CLOUDSPATIALMAP
                    if (permissions.CloudSpatialMap && string.IsNullOrEmpty(PlayerSettings.iOS.locationUsageDescription))
                    {
                        throw new BuildFailedException("EasyAR Cloud SpatialMap requires a Location Usage Description (Player Settings > iOS > Other Settings > Location Usage Description). You can turn this feature off if not used (EasyAR > Sense > Configuration > Permissions > Cloud Spatial Map).");
                    }
#endif
                }
                if (report.summary.platform == BuildTarget.Android)
                {
                    PrepareOptionalNativePlugin("Packages/com.easyar.sense/Runtime/Android/permission.CAMERA.aar", permissions.CameraDevice);
                    PrepareOptionalNativePlugin("Packages/com.easyar.sense/Runtime/Android/permission.RECORD_AUDIO.aar", permissions.VideoRecording);
#if EASYAR_ENABLE_CLOUDSPATIALMAP
                    PrepareOptionalNativePlugin("Packages/com.easyar.spatialmap/Runtime/Android/permission.ACCESS_FINE_LOCATION.aar", permissions.CloudSpatialMap);
#endif
                    var arcoreLoader = false;
                    var arcore = settings.ARCoreSDK;
#if EASYAR_ENABLE_XRMANAGEMENT && EASYAR_ENABLE_UNITYARCORE
                    var generalSettings = UnityEditor.XR.Management.XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget));
                    if (generalSettings)
                    {
#if EASYAR_ENABLE_XRMANAGEMENT_3
                        foreach (var loader in generalSettings.Manager.loaders)
#else
                        foreach (var loader in generalSettings.Manager.activeLoaders)
#endif
                        {
                            if (loader is UnityEngine.XR.ARCore.ARCoreLoader)
                            {
                                arcoreLoader = true;
                                if (arcore == EasyARSettings.ARCoreType.Optional || arcore == EasyARSettings.ARCoreType.Required)
                                {
                                    Debug.LogWarning($"ARCoreLoader is active, ARCoreSDK (current = {arcore}) is forced to {EasyARSettings.ARCoreType.External}");
                                }
                                arcore = EasyARSettings.ARCoreType.External;
                                break;
                            }
                        }
                    }
#endif
                    if (arcore == EasyARSettings.ARCoreType.ARFoundationOrOptional)
                    {
                        arcore = EasyARSettings.ARCoreType.Optional;
                    }
                    if (arcore != EasyARSettings.ARCoreType.External)
                    {
                        if (!settings.DisableARCore)
                        {
                            EnsureGradleVersionIsSupported(settings);
                        }
                        if (settings.DisableARCore)
                        {
                            Debug.LogWarning("ARCore is manually disabled. See EasyAR > Sense > Configuration > Disable ARCore.");
                        }
                        else
                        {
                            var minSdkVersion = arcore == EasyARSettings.ARCoreType.Optional ? 14 : 24;
                            if ((int)PlayerSettings.Android.minSdkVersion < minSdkVersion)
                            {
                                throw new BuildFailedException($"ARCore {arcore} apps require a minimum SDK version of {minSdkVersion}. Currently set to {PlayerSettings.Android.minSdkVersion}");
                            }
                        }
                    }
                    if (arcoreLoader || (arcore != EasyARSettings.ARCoreType.External && !settings.DisableARCore))
                    {
                        if (PlayerSettings.GetScriptingBackend(BuildTargetGroup.Android) != ScriptingImplementation.IL2CPP || !PlayerSettings.Android.targetArchitectures.HasFlag(AndroidArchitecture.ARM64))
                        {
                            var errorMessage = "ARCore has removed support for 32-bit-only ARCore-enabled apps running on 64-bit devices. Support for 32-bit apps running on 32-bit devices is unaffected. 32-bit-only ARCore-enabled apps that are not updated may crash when attempting to start an (ARCore) AR session. See https://developers.google.com/ar/64bit for further details.";
                            if (settings.Verify32bitOnlyARCoreWhenBuild)
                            {
                                var selection = EditorUtility.DisplayDialogComplex(
                                    "ARCore may not work in 32-bit-only apps",
                                    errorMessage,
                                    "Cancel build", "Continue anyway", "Continue and don't warn me again");

                                switch (selection)
                                {
                                    case 0:
                                        throw new BuildFailedException(errorMessage);
                                    case 1:
                                        break;
                                    case 2:
                                        settings.Verify32bitOnlyARCoreWhenBuild = false;
                                        break;
                                }
                            }
                            else
                            {
                                Debug.LogWarning(errorMessage);
                            }
                        }
                    }

                    PrepareOptionalNativePlugin("Packages/com.easyar.sense/Runtime/Android/com.google.ar.core-1.23.0.aar", !settings.DisableARCore && arcore != EasyARSettings.ARCoreType.External);
                    PrepareOptionalNativePlugin("Packages/com.easyar.sense/Runtime/Android/com.google.ar.core-required.aar", !settings.DisableARCore && arcore == EasyARSettings.ARCoreType.Required);
                    PrepareOptionalNativePlugin("Packages/com.easyar.sense/Runtime/Android/com.google.ar.core-optional.aar", !settings.DisableARCore && arcore == EasyARSettings.ARCoreType.Optional);
                }
                AddShader();
                AddSettings(settings);
            }
            catch (Exception e)
            {
                throw new BuildFailedException(e);
            }
        }

        public void OnPostprocessBuild(BuildReport report)
        {
            try
            {
                RemoveSettings();
                RemoveShader();
                if (AssetDatabase.IsValidFolder("Assets/HiddenEasyAR"))
                {
                    AssetDatabase.DeleteAsset("Assets/HiddenEasyAR");
                }

                if (report.summary.platform == BuildTarget.iOS)
                {
#if UNITY_IOS
                    var proj = new PBXProject();
                    var projPath = PBXProject.GetPBXProjectPath(report.summary.outputPath);
                    proj.ReadFromFile(projPath);
                    proj.SetBuildProperty(proj.GetUnityFrameworkTargetGuid(), "ENABLE_BITCODE", "NO");
                    proj.SetBuildProperty(proj.GetUnityMainTargetGuid(), "ENABLE_BITCODE", "NO");
                    proj.WriteToFile(projPath);
#endif
                }
            }
            catch (Exception e)
            {
                throw new BuildFailedException(e);
            }
        }

        private void PrepareOptionalNativePlugin(string asset, bool enable)
        {
            var plugin = AssetImporter.GetAtPath(asset) as PluginImporter;
            plugin.SetIncludeInBuildDelegate(path => enable);
        }

        private static void AddShader()
        {
            var preloadedAssets = PlayerSettings.GetPreloadedAssets().ToList();
            var changed = false;

            foreach (var shaderName in shaderNames)
            {
                var shader = Shader.Find(shaderName);
                if (!shader)
                {
                    throw new Exception($"Cannot find shader '{shaderName}'");
                }
                if (!preloadedAssets.Where(a => shader.Equals(a)).Any())
                {
                    preloadedAssets.Add(shader);
                    changed = true;
                }
            }
            if (changed)
            {
                PlayerSettings.SetPreloadedAssets(preloadedAssets.ToArray());
            }
        }

        private static void RemoveShader()
        {
            var shaders = shaderNames.Select(s => Shader.Find(s));
            PlayerSettings.SetPreloadedAssets(PlayerSettings.GetPreloadedAssets().Where(a => !shaders.Contains(a)).ToArray());
        }

        private static void AddSettings(EasyARSettings settings)
        {
            var preloadedAssets = PlayerSettings.GetPreloadedAssets();

            if (!preloadedAssets.Contains(settings))
            {
                var assets = preloadedAssets.ToList();
                assets.Add(settings);
                PlayerSettings.SetPreloadedAssets(assets.ToArray());
            }
        }

        private static void RemoveSettings()
        {
            PlayerSettings.SetPreloadedAssets(PlayerSettings.GetPreloadedAssets().Where(a => (a == null || a.GetType() != typeof(EasyARSettings))).ToArray());
        }

        private static void EnsureGradleVersionIsSupported(EasyARSettings settings)
        {
            if (EditorUserBuildSettings.androidBuildSystem != AndroidBuildSystem.Gradle)
                throw new BuildFailedException("EasyAR requires the Gradle build system. See File > Build Settings... > Android");

            var minimumGradleVersion = new Version(5, 6, 4);

            if (Gradle.TryGetVersion(out var gradleVersion, out var diagnosticMessage))
            {
                if (gradleVersion < minimumGradleVersion)
                {
                    var errorMessage = $"ARCore requires at least Gradle version {minimumGradleVersion} ({gradleVersion} detected). Visit https://developers.google.com/ar/develop/unity/android-11-build for further details.";
                    var selection = EditorUtility.DisplayDialogComplex(
                        "Gradle update required",
                        errorMessage,
                        "Cancel build", "Continue anyway", "Continue and disable ARCore");

                    switch (selection)
                    {
                        case 0:
                            throw new BuildFailedException(errorMessage);
                        case 1:
                            break;
                        case 2:
                            settings.DisableARCore = true;
                            EditorUtility.DisplayDialog(
                                "ARCore Disabled",
                                "ARCore is manually disabled. See EasyAR > Sense > Configuration > Disable ARCore.",
                                "OK"
                                );
                            break;
                    }
                }
            }
            else
            {
                Debug.LogWarning($"ARCore requires Gradle {minimumGradleVersion} or later. The Gradle version could not be determined because \"{diagnosticMessage}\"");
            }
        }
    }
}
