//================================================================================================================================
//
//  Copyright (c) 2015-2022 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
//  EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
//  and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//================================================================================================================================

using System;
using UnityEngine;

namespace easyar
{
    /// <summary>
    /// <para xml:lang="en">Material to render camera image.</para>
    /// <para xml:lang="zh">用于渲染camera图像的材质。</para>
    /// </summary>
    public class CameraImageMaterial : IDisposable
    {
        private CameraImageShaders shaders;
        private Material mat;
        private Texture2D[] textures = new Texture2D[0];
        private PixelFormat format;
        private int pixelWidth;
        private int pixelHeight;
        private int imageWidth;
        private int imageHeight;

        public CameraImageMaterial()
        {
            shaders = new CameraImageShaders();
        }

        ~CameraImageMaterial()
        {
            DisposeResources();
        }

        /// <summary>
        /// <para xml:lang="en">Dispose resources.</para>
        /// <para xml:lang="zh">销毁资源。</para>
        /// </summary>
        public void Dispose()
        {
            DisposeResources();
            GC.SuppressFinalize(this);
        }

        /// <summary>
        /// <para xml:lang="en">Update material using <paramref name="image"/>.</para>
        /// <para xml:lang="zh">使用<paramref name="image"/>更新材质。</para>
        /// </summary>
        public Material UpdateByImage(Image image)
        {
            var recreateMaterial = false;
            if (image.width() != imageWidth || image.height() != imageHeight || image.pixelWidth() != pixelWidth || image.pixelHeight() != pixelHeight || image.format() != format)
            {
                DisposeResources();
                imageWidth = image.width();
                imageHeight = image.height();
                pixelWidth = image.pixelWidth();
                pixelHeight = image.pixelHeight();
                format = image.format();
                recreateMaterial = true;
            }
            using (var buffer = image.buffer())
            {
                var ptr = buffer.data();
                var pixelResolution = pixelWidth * pixelHeight;
                var dataResolution = pixelWidth * imageHeight;
                switch (format)
                {
                    case PixelFormat.Gray:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[1];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.Alpha8, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.GRAY);
                            mat.SetTexture("_grayTexture", textures[0]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMax", (imageWidth - 0.5f) / pixelWidth);
                        }
                        textures[0].LoadRawTextureData(ptr, dataResolution);
                        textures[0].Apply();
                        break;
                    case PixelFormat.YUV_NV21:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[2];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.Alpha8, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            textures[1] = new Texture2D(pixelWidth / 2, imageHeight / 2, TextureFormat.RGBA4444, false);
                            textures[1].wrapMode = TextureWrapMode.Clamp;
                            textures[1].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.YUV_NV21);
                            mat.SetTexture("_yTexture", textures[0]);
                            mat.SetTexture("_uvTexture", textures[1]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMaxY", (imageWidth - 0.5f) / pixelWidth);
                            mat.SetFloat("_RowMaxUV", (imageWidth / 2 - 0.5f) / (pixelWidth / 2));
                        }
                        textures[0].LoadRawTextureData(ptr, dataResolution);
                        textures[0].Apply();
                        textures[1].LoadRawTextureData(new IntPtr(ptr.ToInt64() + pixelResolution), dataResolution);
                        textures[1].Apply();

                        break;
                    case PixelFormat.YUV_NV12:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[2];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.Alpha8, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            textures[1] = new Texture2D(pixelWidth / 2, imageHeight / 2, TextureFormat.RGBA4444, false);
                            textures[1].wrapMode = TextureWrapMode.Clamp;
                            textures[1].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.YUV_NV12);
                            mat.SetTexture("_yTexture", textures[0]);
                            mat.SetTexture("_uvTexture", textures[1]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMaxY", (imageWidth - 0.5f) / pixelWidth);
                            mat.SetFloat("_RowMaxUV", (imageWidth / 2 - 0.5f) / (pixelWidth / 2));
                        }
                        textures[0].LoadRawTextureData(ptr, dataResolution);
                        textures[0].Apply();
                        textures[1].LoadRawTextureData(new IntPtr(ptr.ToInt64() + pixelResolution), dataResolution);
                        textures[1].Apply();
                        break;
                    case PixelFormat.YUV_I420:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[3];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.Alpha8, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            textures[1] = new Texture2D(pixelWidth / 2, imageHeight / 2, TextureFormat.Alpha8, false);
                            textures[1].wrapMode = TextureWrapMode.Clamp;
                            textures[1].filterMode = FilterMode.Bilinear;
                            textures[2] = new Texture2D(pixelWidth / 2, imageHeight / 2, TextureFormat.Alpha8, false);
                            textures[2].wrapMode = TextureWrapMode.Clamp;
                            textures[2].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.YUV_I420_YV12);
                            mat.SetTexture("_yTexture", textures[0]);
                            mat.SetTexture("_uTexture", textures[1]);
                            mat.SetTexture("_vTexture", textures[2]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMaxY", (imageWidth - 0.5f) / pixelWidth);
                            mat.SetFloat("_RowMaxUV", (imageWidth / 2 - 0.5f) / (pixelWidth / 2));
                        }
                        textures[0].LoadRawTextureData(new IntPtr(ptr.ToInt64()), pixelResolution);
                        textures[0].Apply();
                        textures[1].LoadRawTextureData(new IntPtr(ptr.ToInt64() + pixelResolution), dataResolution / 4);
                        textures[1].Apply();
                        textures[2].LoadRawTextureData(new IntPtr(ptr.ToInt64() + pixelResolution + pixelResolution / 4), dataResolution / 4);
                        textures[2].Apply();
                        break;
                    case PixelFormat.YUV_YV12:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[3];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.Alpha8, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            textures[1] = new Texture2D(pixelWidth / 2, imageHeight / 2, TextureFormat.Alpha8, false);
                            textures[1].wrapMode = TextureWrapMode.Clamp;
                            textures[1].filterMode = FilterMode.Bilinear;
                            textures[2] = new Texture2D(pixelWidth / 2, imageHeight / 2, TextureFormat.Alpha8, false);
                            textures[2].wrapMode = TextureWrapMode.Clamp;
                            textures[2].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.YUV_I420_YV12);
                            mat.SetTexture("_yTexture", textures[0]);
                            mat.SetTexture("_uTexture", textures[1]);
                            mat.SetTexture("_vTexture", textures[2]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMaxY", (imageWidth - 0.5f) / pixelWidth);
                            mat.SetFloat("_RowMaxUV", (imageWidth / 2 - 0.5f) / (pixelWidth / 2));
                        }
                        textures[0].LoadRawTextureData(new IntPtr(ptr.ToInt64()), pixelResolution);
                        textures[0].Apply();
                        textures[1].LoadRawTextureData(new IntPtr(ptr.ToInt64() + pixelResolution + pixelResolution / 4), dataResolution / 4);
                        textures[1].Apply();
                        textures[2].LoadRawTextureData(new IntPtr(ptr.ToInt64() + pixelResolution), dataResolution / 4);
                        textures[2].Apply();
                        break;
                    case PixelFormat.RGB888:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[1];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.RGB24, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.RGB);
                            mat.SetTexture("_MainTex", textures[0]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMax", (imageWidth - 0.5f) / pixelWidth);
                        }
                        textures[0].LoadRawTextureData(new IntPtr(ptr.ToInt64()), buffer.size());
                        textures[0].Apply();
                        break;
                    case PixelFormat.BGR888:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[1];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.RGB24, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.BGR);
                            mat.SetTexture("_MainTex", textures[0]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMax", (imageWidth - 0.5f) / pixelWidth);
                        }
                        textures[0].LoadRawTextureData(new IntPtr(ptr.ToInt64()), buffer.size());
                        textures[0].Apply();
                        break;
                    case PixelFormat.RGBA8888:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[1];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.RGBA32, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.RGB);
                            mat.SetTexture("_MainTex", textures[0]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMax", (imageWidth - 0.5f) / pixelWidth);
                        }
                        textures[0].LoadRawTextureData(new IntPtr(ptr.ToInt64()), buffer.size());
                        textures[0].Apply();
                        break;
                    case PixelFormat.BGRA8888:
                        if (recreateMaterial)
                        {
                            textures = new Texture2D[1];
                            textures[0] = new Texture2D(pixelWidth, imageHeight, TextureFormat.RGBA32, false);
                            textures[0].wrapMode = TextureWrapMode.Clamp;
                            textures[0].filterMode = FilterMode.Bilinear;
                            mat = new Material(shaders.BGR);
                            mat.SetTexture("_MainTex", textures[0]);
                            mat.SetFloat("_RowRatio", (float)imageWidth / pixelWidth);
                            mat.SetFloat("_RowMax", (imageWidth - 0.5f) / pixelWidth);
                        }
                        textures[0].LoadRawTextureData(new IntPtr(ptr.ToInt64()), buffer.size());
                        textures[0].Apply();
                        break;
                    default:
                        break;
                }
            }
            return mat;
        }

        private void DisposeResources()
        {
            if (mat)
            {
                UnityEngine.Object.Destroy(mat);
            }
            foreach (var texture in textures)
            {
                UnityEngine.Object.Destroy(texture);
            }
        }

        class CameraImageShaders
        {
            public Shader RGB;
            public Shader BGR;
            public Shader GRAY;
            public Shader YUV_I420_YV12;
            public Shader YUV_NV12;
            public Shader YUV_NV21;

            public CameraImageShaders()
            {
                RGB = Shader.Find("EasyAR/CameraImage_RGB");
                BGR = Shader.Find("EasyAR/CameraImage_BGR");
                GRAY = Shader.Find("EasyAR/CameraImage_Gray");
                YUV_I420_YV12 = Shader.Find("EasyAR/CameraImage_YUV_I420_YV12");
                YUV_NV12 = Shader.Find("EasyAR/CameraImage_YUV_NV12");
                YUV_NV21 = Shader.Find("EasyAR/CameraImage_YUV_NV21");

                if (!RGB || !BGR || !GRAY || !YUV_I420_YV12 || !YUV_NV12 || !YUV_NV21)
                {
                    throw new InvalidOperationException($"Could not find EasyAR shader for video overlay.");
                }
            }
        }
    }
}
