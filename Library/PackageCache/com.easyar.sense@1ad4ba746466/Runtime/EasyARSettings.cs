//================================================================================================================================
//
//  Copyright (c) 2015-2022 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
//  EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
//  and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//================================================================================================================================

using System;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace easyar
{
    /// <summary>
    /// <para xml:lang="en">EasyAR Sense Unity Plugin settings.</para>
    /// <para xml:lang="zh">EasyAR Sense Unity Plugin的配置信息。</para>
    /// </summary>
    public class EasyARSettings : ScriptableObject
    {
        /// <summary>
        /// <para xml:lang="en">EasyAR Sense License Key. Used for validation of EasyAR Sense functions. Please visit https://www.easyar.com for more details.</para>
        /// <para xml:lang="zh">EasyAR Sense License Key。用于验证EasyAR Sense内部各种功能是否可用。详见 https://www.easyar.cn 。</para>
        /// </summary>
        [Tooltip("EasyAR Sense License Key. Used for validation of EasyAR Sense functions. Please visit https://www.easyar.com for more details.")]
        [HideInInspector, SerializeField]
        [TextArea(1, 10)]
        public string LicenseKey = string.Empty;
        /// <summary>
        /// <para xml:lang="en">Initialize EasyAR Sense on startup. EasyAR initialize does not result extra resource usages, so usually you can keep this option on.</para>
        /// <para xml:lang="zh">在启动时初始化EasyAR。EasyAR的初始化不会造成额外的资源消耗，因此通常可以保持这个选项打开。</para>
        /// </summary>>
        [Tooltip("Initialize EasyAR Sense on startup. EasyAR initialize does not result extra resource usages, so usually you can keep this option on.")]
        public bool InitializeOnStartup = true;
        /// <summary>
        /// <para xml:lang="en">Configuration for application permissions. Permissions must be turned on for the feature in use.</para>
        /// <para xml:lang="zh">应用权限配置。对应功能的权限必须打开。</para>
        /// </summary>
        [Tooltip("Configuration for application permissions. Permissions must be turned on for the feature in use.")]
        public Permission Permissions = new Permission();
        /// <summary>
        /// <para xml:lang="en"><see cref="Gizmos"/> configuration for <see cref="ImageTarget"/> and <see cref="ObjectTarget"/>.</para>
        /// <para xml:lang="zh"><see cref="ImageTarget"/> 和 <see cref="ObjectTarget"/>的<see cref="Gizmos"/>配置。</para>
        /// </summary>
        [Tooltip("Gizmos configuration for ImageTarget and ObjectTarget.")]
        public TargetGizmoConfig GizmoConfig = new TargetGizmoConfig();
        /// <summary>
        /// <para xml:lang="en">Global spatial map service config.</para>
        /// <para xml:lang="zh">全局稀疏地图服务器配置。</para>
        /// </summary>
        [Tooltip("Global spatial map service config.")]
        public SparseSpatialMapWorkerFrameFilter.SpatialMapServiceConfig GlobalSpatialMapServiceConfig = new SparseSpatialMapWorkerFrameFilter.SpatialMapServiceConfig();
        /// <summary>
        /// <para xml:lang="en">Global cloud recognizer service config.</para>
        /// <para xml:lang="zh">全局云识别服务器配置。</para>
        /// </summary>
        [Tooltip("Global cloud recognizer service config.")]
        public CloudRecognizerFrameFilter.CloudRecognizerServiceConfig GlobalCloudRecognizerServiceConfig = new CloudRecognizerFrameFilter.CloudRecognizerServiceConfig();
        /// <summary>
        /// <para xml:lang="en">Global cloud localizer serveice config (used in Cloud SpatialMap).</para>
        /// <para xml:lang="zh">全局云定位服务器配置（Cloud SpatialMap功能使用）。</para>
        /// </summary>
        [Tooltip("Global cloud localizer serveice config (used in Cloud SpatialMap).")]
        public CloudSpatialMapLocalizerFrameFilter.CloudLocalizerServiceConfig GlobalCloudLocalizerServeiceConfig = new CloudSpatialMapLocalizerFrameFilter.CloudLocalizerServiceConfig();
        /// <summary>
        /// <para xml:lang="en">Generate XML document when script reload to make intelliSense for API document work.</para>
        /// <para xml:lang="zh">在脚本重新加载时生成XML文档，以使API文档的intelliSense可以工作。</para>
        /// </summary>
        [Tooltip("Generate XML document when script reload to make intelliSense for API document work.")]
        public bool GenerateXMLDoc = true;
        /// <summary>
        /// <para xml:lang="en">ARCore SDK configuration. If you are using AR Foundation, use <see cref="ARCoreType.ARFoundationOrOptional"/> to let the plugin decide which one to use, or use <see cref="ARCoreType.External"/>. If other ARCore SDK distributions is desired, use <see cref="ARCoreType.External"/>.</para>
        /// <para xml:lang="zh">ARCore SDK配置。如果你在使用AR Foundation，可以使用 <see cref="ARCoreType.ARFoundationOrOptional"/> 来让插件自动决定使用的ARCore分发，也可以使用<see cref="ARCoreType.External"/>。如果期望使用其它ARCore SDK分发，需要设置为<see cref="ARCoreType.External"/>。</para>
        /// </summary>
        [Tooltip("ARCore SDK configuration. If you are using AR Foundation, use ARFoundationOrOptional to let the plugin decide which one to use, or use External. If other ARCore SDK distributions is desired, use External.")]
        public ARCoreType ARCoreSDK;
        /// <summary>
        /// <para xml:lang="en">Disable ARCore. This option is generally used in Unity 2019 when you do not want to deal with build fail caused by Gradle version if ARCore is not used. Disable ARCore will make EasyAR ARCore wrapper fail to run, and will make EasyAR World Sensing features like Sparse Spatial Map and Dense Spatial Map fail to run on devices where EasyAR Motion Tracking is not available but ARCore is available. See https://developers.google.com/ar/develop/unity/android-11-build#unity_20193_and_20194 to make ARCore work in Unity 2019.4.</para>
        /// <para xml:lang="zh">禁用ARCore。这个选项通常在Unity 2019中使用，如果你不使用ARCore功能且不希望处理由Gradle版本引起的编译失败的时候可以打开这个选项。禁用ARCore将会使EasyAR的ARCore 封装无法运行，且会使EasyAR的一些世界感知功能，比如稀疏空间地图和稠密空间地图在一些支持ARCore但不支持EasyAR运动跟踪功能的设备上无法运行。可以参考 https://developers.google.cn/ar/develop/unity/android-11-build#unity_20193_and_20194 在Unity 2019.4上使用ARCore。</para>
        /// </summary>
        [Tooltip("Disable ARCore. This option is generally used in Unity 2019 when you do not want to deal with build fail caused by Gradle version if ARCore is not used. Disable ARCore will make EasyAR ARCore wrapper fail to run, and will make EasyAR World Sensing features like Sparse Spatial Map and Dense Spatial Map fail to run on devices where EasyAR Motion Tracking is not available but ARCore is available. See https://developers.google.com/ar/develop/unity/android-11-build#unity_20193_and_20194 to make ARCore work in Unity 2019.4.")]
        public bool DisableARCore;
        /// <summary>
        /// <para xml:lang="en">Warn 32-bit-only ARCore-enabled build. ARCore has removed support for 32-bit-only ARCore-enabled apps running on 64-bit devices. Support for 32-bit apps running on 32-bit devices is unaffected. 32-bit-only ARCore-enabled apps that are not updated may crash when attempting to start an (ARCore) AR session. See https://developers.google.com/ar/64bit for further details.</para>
        /// <para xml:lang="zh">在构建仅有32位且使用ARCore的应用时产生警告。ARCore已经移除了对64位设备上的只有32位库的ARCore的应用的支持。在32位设备上的32位应用不受影响。未更新的仅有32位库的ARCore应用可能会在尝试启动（ARCore的）AR session时崩溃。详情可以参考 https://developers.google.com/ar/64bit 。</para>
        /// </summary>
        [Tooltip("Warn 32-bit-only ARCore-enabled build. ARCore has removed support for 32-bit-only ARCore-enabled apps running on 64-bit devices. Support for 32-bit apps running on 32-bit devices is unaffected. 32-bit-only ARCore-enabled apps that are not updated may crash when attempting to start an (ARCore) AR session. See https://developers.google.com/ar/64bit for further details.")]
        public bool Verify32bitOnlyARCoreWhenBuild = true;
        /// <summary>
        /// <para xml:lang="en">Verify license when build Unity Project. When this option is on, license key will be verified during Unity build process and build will fail if license key is invalid on the platform or the license key does not contain package name / bundle identifier setup in the Unity Player Settings. Turn off this option if you setup license in a difference place, or if you need to change package name or bundle identifier after Unity build process.</para>
        /// <para xml:lang="zh">在构建Unity工程时验证license Key。当这个选项打开时，Unity项目构建过程会验证license Key，如果license在构建平台上无效或不包含Unity Player Settings中设置的包名，构建过程将会失败。如果你需要使用其它地方配置的license key或者需要在Unity构建过程之后修改包名，可以关闭这个选项。</para>
        /// </summary>
        [Tooltip("Verify license when build Unity Project. When this option is on, license key will be verified during Unity build process and build will fail if license key is invalid on the platform or the license key does not contain package name / bundle identifier setup in the Unity Player Settings. Turn off this option if you setup license in a difference place, or if you need to change package name or bundle identifier after Unity build process.")]
        public bool VerifyLicenseWhenBuild = true;

        /// <summary>
        /// <para xml:lang="en">ARCore SDK configuration.</para>
        /// <para xml:lang="zh">ARCore SDK配置。</para>
        /// </summary>
        public enum ARCoreType
        {
            /// <summary>
            /// <para xml:lang="en">Either ARCore SDK distributed with EasyAR or AR Foundation will be included in the build according to the settings of ARCore XR Plugin.</para>
            /// <para xml:lang="en">If ARCore SDK distributed with EasyAR is selected, ARCore features will be activated only on ARCore supported devices that have Google Play Services for AR installed.</para>
            /// <para xml:lang="en">Please visit https://developers.google.com/ar/develop/java/enable-arcore for more details and configurations required for your app.</para>
            /// <para xml:lang="zh">随EasyAR或AR Foundation一起分发的ARCore SDK将会被包含在应用中，根据ARCore XR Plugin的设置决定。</para>
            /// <para xml:lang="zh">如果随EasyAR一起分发的ARCore SDK被选中，ARCore 功能只在支持ARCore并安装了Google Play Services for AR的设备上可以使用。</para>
            /// <para xml:lang="zh">更多细节及应用所需要的配置请访问 https://developers.google.com/ar/develop/java/enable-arcore 。</para>
            /// </summary>
            [Tooltip("Either ARCore SDK distributed with EasyAR or AR Foundation will be included in the build according to the settings of ARCore XR Plugin. If ARCore SDK distributed with EasyAR is selected, ARCore features will be activated only on ARCore supported devices that have Google Play Services for AR installed.")]
            ARFoundationOrOptional,
            /// <summary>
            /// <para xml:lang="en">ARCore SDK distributed with EasyAR will be included in the build.</para>
            /// <para xml:lang="en">ARCore features are activated only on ARCore supported devices that have Google Play Services for AR installed.</para>
            /// <para xml:lang="en">Please visit https://developers.google.com/ar/develop/java/enable-arcore for more details and configurations required for your app.</para>
            /// <para xml:lang="zh">随EasyAR一起分发的ARCore SDK将会被包含在应用中。</para>
            /// <para xml:lang="zh">ARCore 功能只在支持ARCore并安装了Google Play Services for AR的设备上可以使用。</para>
            /// <para xml:lang="zh">更多细节及应用所需要的配置请访问 https://developers.google.com/ar/develop/java/enable-arcore 。</para>
            /// </summary>
            [Tooltip("ARCore SDK distributed with EasyAR will be included in the build. ARCore features are activated only on ARCore supported devices that have Google Play Services for AR installed.")]
            Optional,
            /// <summary>
            /// <para xml:lang="en">ARCore SDK distributed with EasyAR will be included in the build.</para>
            /// <para xml:lang="en">Your app will require an ARCore Supported Device that has Google Play Services for AR installed on it.</para>
            /// <para xml:lang="en">Please visit https://developers.google.com/ar/develop/java/enable-arcore for more details and configurations required for your app.</para>
            /// <para xml:lang="zh">随EasyAR一起分发的ARCore SDK将会被包含在应用中。</para>
            /// <para xml:lang="zh">应用将只能在支持ARCore并安装了Google Play Services for AR的设备上可以运行。</para>
            /// <para xml:lang="zh">更多细节及应用所需要的配置请访问 https://developers.google.com/ar/develop/java/enable-arcore 。</para>
            /// </summary>
            [Tooltip("ARCore SDK distributed with EasyAR will be included in the build. Your app will require an ARCore Supported Device that has Google Play Services for AR installed on it.")]
            Required,
            /// <summary>
            /// <para xml:lang="en">ARCore SDK distributed with EasyAR will not be used.</para>
            /// <para xml:lang="zh">随EasyAR一起分发的ARCore SDK将不会使用。</para>
            /// </summary>
            [Tooltip("ARCore SDK distributed with EasyAR will not be used.")]
            External,
        }

        /// <summary>
        /// <para xml:lang="en">Global settings instance.</para>
        /// <para xml:lang="zh">全局<see cref="EasyARSettings"/>。</para>
        /// </summary>
        public static EasyARSettings Instance { get; private set; }

#if UNITY_EDITOR
        private static readonly string configObjectName = "EasyAR.Settings";

        public static EasyARSettings ConfigObject
        {
            get
            {
                EditorBuildSettings.TryGetConfigObject(configObjectName, out EasyARSettings settings);
                if (settings == null)
                {
                    foreach (var asset in AssetDatabase.FindAssets($"t:{nameof(EasyARSettings)}"))
                    {
                        var path = AssetDatabase.GUIDToAssetPath(asset);
                        settings = AssetDatabase.LoadAssetAtPath<EasyARSettings>(path);

                        var p = Path.GetDirectoryName(path);
                        while (!string.IsNullOrEmpty(p))
                        {
                            if (Path.GetFileName(p) == "Resources")
                            {
                                Debug.LogWarning($"EasyAR Settings is no longer loaded as resource. Suggest moving EasyAR Settings asset \"{path}\" out of \"Resources\" folder.");
                            }
                            p = Path.GetDirectoryName(p);
                        }
                        ConfigObject = settings;
                        break;
                    }
                }
                return settings;
            }
            set
            {
                EditorBuildSettings.AddConfigObject(configObjectName, value, true);
                Instance = value;
            }
        }

        [InitializeOnLoadMethod]
        static void CheckInstance()
        {
            var settings = ConfigObject;
            if (settings)
            {
                Instance = settings;
            }
        }

        void OnEnable()
        {
            if (Instance && Instance != this)
            {
                Debug.LogError($"Multiple {nameof(EasyARSettings)} asset NOT allowed!");
            }
            var settings = ConfigObject;
            if (settings)
            {
                Instance = settings;
            }
        }
#else
        void Awake()
        {
            Debug.Log("EasyAR Settings awakening...");
            if (Instance && Instance != this)
            {
                Debug.LogError($"Multiple {nameof(EasyARSettings)} instance NOT allowed!");
            }
            if (!Instance)
            {
                Instance = this;
                DontDestroyOnLoad(Instance);
            }
        }
#endif

        /// <summary>
        /// <para xml:lang="en"><see cref="Gizmos"/> configuration for target.</para>
        /// <para xml:lang="zh">Target的<see cref="Gizmos"/>配置。</para>
        /// </summary>
        [Serializable]
        public class TargetGizmoConfig
        {
            /// <summary>
            /// <para xml:lang="en"><see cref="Gizmos"/> configuration for <see cref="easyar.ImageTarget"/>.</para>
            /// <para xml:lang="zh"><see cref="easyar.ImageTarget"/>的<see cref="Gizmos"/>配置。</para>
            /// </summary>
            [Tooltip("Gizmos configuration for ImageTarget.")]
            public ImageTargetConfig ImageTarget = new ImageTargetConfig();
            /// <summary>
            /// <para xml:lang="en"><see cref="Gizmos"/> configuration for <see cref="easyar.ObjectTarget"/>.</para>
            /// <para xml:lang="zh"><see cref="easyar.ObjectTarget"/>的<see cref="Gizmos"/>配置。</para>
            /// </summary>
            [Tooltip("Gizmos configuration for ObjectTarget.")]
            public ObjectTargetConfig ObjectTarget = new ObjectTargetConfig();

            /// <summary>
            /// <para xml:lang="en"><see cref="Gizmos"/> configuration for <see cref="easyar.ImageTarget"/>.</para>
            /// <para xml:lang="zh"><see cref="easyar.ImageTarget"/>的<see cref="Gizmos"/>配置。</para>
            /// </summary>
            [Serializable]
            public class ImageTargetConfig
            {
                /// <summary>
                /// <para xml:lang="en">Enable <see cref="Gizmos"/> of target which <see cref="ImageTargetController.SourceType"/> equals to <see cref="ImageTargetController.DataSource.ImageFile"/>. Enable this option will load image file and display gizmo in Unity Editor, the startup performance of the Editor will be affected if there are too much target of this kind in the scene, but the Unity runtime will not be affected when running on devices.</para>
                /// <para xml:lang="zh">开启<see cref="ImageTargetController.SourceType"/>类型为<see cref="ImageTargetController.DataSource.ImageFile"/>的target的<see cref="Gizmos"/>。打开这个将会在Unity Editor中加载图像文件并显示对应gizmo，如果场景中该类target过多，可能会影响编辑器中的启动性能。在设备上运行时，Unity运行时的性能不会受到影响。</para>
                /// </summary>
                [Tooltip("Enable Gizmos of target which ImageTargetController.SourceType equals to ImageTargetController.DataSource.ImageFile. Enable this option will load image file and display gizmo in Unity Editor, the startup performance of the Editor will be affected if there are too much target of this kind in the scene, but the Unity runtime will not be affected when running on devices.")]
                public bool EnableImageFile = true;
                /// <summary>
                /// <para xml:lang="en">Enable <see cref="Gizmos"/> of target which <see cref="ImageTargetController.SourceType"/> equals to <see cref="ImageTargetController.DataSource.TargetDataFile"/>. Enable this option will target data file and display gizmo in Unity Editor, the startup performance of the Editor will be affected if there are too much target of this kind in the scene, but the Unity runtime will not be affected when running on devices.</para>
                /// <para xml:lang="zh">开启<see cref="ImageTargetController.SourceType"/>类型为<see cref="ImageTargetController.DataSource.TargetDataFile"/>的target的<see cref="Gizmos"/>。打开这个将会在Unity Editor中加载target数据文件并显示显示对应gizmo，如果场景中该类target过多，可能会影响编辑器中的启动性能。在设备上运行时，Unity运行时的性能不会受到影响。</para>
                /// </summary>
                [Tooltip("Enable Gizmos of target which ImageTargetController.SourceType equals to ImageTargetController.DataSource.TargetDataFile. Enable this option will target data file and display gizmo in Unity Editor, the startup performance of the Editor will be affected if there are too much target of this kind in the scene, but the Unity runtime will not be affected when running on devices.")]
                public bool EnableTargetDataFile = true;
                /// <summary>
                /// <para xml:lang="en">Enable <see cref="Gizmos"/> of target which <see cref="ImageTargetController.SourceType"/> equals to <see cref="ImageTargetController.DataSource.Target"/>. Enable this option will display gizmo in Unity Editor, the startup performance of the Editor will be affected if there are too much target of this kind in the scene, but the Unity runtime will not be affected when running on devices.</para>
                /// <para xml:lang="zh">开启<see cref="ImageTargetController.SourceType"/>类型为<see cref="ImageTargetController.DataSource.Target"/>的target的<see cref="Gizmos"/>。打开这个将会在Unity Editor中显示对应gizmo，如果场景中该类target过多，可能会影响编辑器中的启动性能。在设备上运行时，Unity运行时的性能不会受到影响。</para>
                /// </summary>
                [Tooltip("Enable Gizmos of target which ImageTargetController.SourceType equals to  ImageTargetController.DataSource.Target. Enable this option will display gizmo in Unity Editor, the startup performance of the Editor will be affected if there are too much target of this kind in the scene, but the Unity runtime will not be affected when running on devices.")]
                public bool EnableTarget = true;
            }

            /// <summary>
            /// <para xml:lang="en"><see cref="Gizmos"/> configuration for <see cref="easyar.ObjectTarget"/>.</para>
            /// <para xml:lang="zh"><see cref="easyar.ObjectTarget"/>的<see cref="Gizmos"/>配置。</para>
            /// </summary>
            [Serializable]
            public class ObjectTargetConfig
            {
                /// <summary>
                /// <para xml:lang="en">Enable <see cref="Gizmos"/>.</para>
                /// <para xml:lang="zh">开启<see cref="Gizmos"/>。</para>
                /// </summary>
                public bool Enable = true;
            }
        }

        /// <summary>
        /// <para xml:lang="en">Configuration for AndroidManifest.</para>
        /// <para xml:lang="zh">AndroidManifest权限配置。</para>
        /// </summary>
        [Serializable]
        public class Permission
        {
            /// <summary>
            /// <para xml:lang="en">Permission required for <see cref="easyar.CameraDevice"/> and other frame sources which require camera device usages.</para>
            /// <para xml:lang="en">Turn on this option will use Camera permission on device.</para>
            /// <para xml:lang="zh">使用<see cref="easyar.CameraDevice"/>及其它需要使用相机设备的frame source需要的权限。</para>
            /// <para xml:lang="zh">开启这个选项将会使用设备的相机权限。</para>
            /// </summary>
            [Tooltip("Permission required for easyar.CameraDevice and other frame sources which require camera device usages. Turn on this option will use Camera permission on device.")]
            public bool CameraDevice = true;
            /// <summary>
            /// <para xml:lang="en">Permission required for <see cref="easyar.VideoRecorder"/>.</para>
            /// <para xml:lang="en">Turn on this option will use Microphone permission on device.</para>
            /// <para xml:lang="en">Microphone permission is not forced in iOS build. Don't forget to add MicrophoneUsageDescription to your player settings.</para>
            /// <para xml:lang="zh">使用<see cref="easyar.VideoRecorder"/>需要的权限。</para>
            /// <para xml:lang="zh">开启这个选项将会使用设备的麦克风权限。</para>
            /// <para xml:lang="zh">在iOS构建中，麦克风权限没有强制开启。需要注意在player设置中添加MicrophoneUsageDescription。</para>
            /// </summary>
            [Tooltip("Permission required for easyar.VideoRecorder. Turn on this option will use Microphone permission on device. Microphone permission is not forced in iOS build. Don't forget to add MicrophoneUsageDescription to your player settings.")]
            public bool VideoRecording = true;
            /// <summary>
            /// <para xml:lang="en">Permission suggested for <see cref="easyar.CloudSpatialMapLocalizerFrameFilter"/>.</para>
            /// <para xml:lang="en">Turn on this option will use (fine) Location permission on device (ONLY when com.easyar.spatialmap package exist).</para>
            /// <para xml:lang="zh">使用<see cref="easyar.CloudSpatialMapLocalizerFrameFilter"/>建议开启的权限。</para>
            /// <para xml:lang="zh">开启这个选项将会使用设备的（fine）定位权限（只有当com.easyar.spatialmap package存在时才起作用）。</para>
            /// </summary>
            [Tooltip("Permission required for easyar.CloudSpatialMapLocalizerFrameFilter. Turn on this option will use (fine) Location permission on device (ONLY when com.easyar.spatialmap package exist).")]
            public bool CloudSpatialMap = true;
        }
    }
}
