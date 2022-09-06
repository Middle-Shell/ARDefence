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
    internal static class ImageUtil
    {
        public unsafe static PixelFormat CheckPixelFormat(IntPtr rawByteY, IntPtr rawByteU, IntPtr rawByteV, int pixelStrideY, int pixelStrideU, int pixelStrideV, int rowStrideY, int rowStrideU, int rowStrideV)
        {
            if ((pixelStrideY != 1) || (pixelStrideU != pixelStrideV) || (rowStrideU != rowStrideV)) { return PixelFormat.Unknown; }

            if ((rawByteY == IntPtr.Zero) || (rawByteU == IntPtr.Zero) || (rawByteV == IntPtr.Zero)) { return PixelFormat.Unknown; }

            if (pixelStrideU == 2)
            {
                if (rowStrideY != rowStrideU)
                {
                    return PixelFormat.Unknown;
                }
                if (rawByteU + 1 == rawByteV)
                {
                    return PixelFormat.YUV_NV12;
                }
                else if (rawByteV + 1 == rawByteU)
                {
                    return PixelFormat.YUV_NV21;
                }
            }
            else if (pixelStrideU == pixelStrideY && pixelStrideU == 1)
            {
                if (rowStrideY != rowStrideU * 2)
                {
                    return PixelFormat.Unknown;
                }
                if ((ulong)(new UIntPtr((void*)rawByteU)) < (ulong)(new UIntPtr((void*)rawByteV)))
                {
                    return PixelFormat.YUV_I420;
                }
                else
                {
                    return PixelFormat.YUV_YV12;
                }
            }

            return PixelFormat.Unknown;
        }

        public unsafe static Vector2Int GetPixelSize(IntPtr rawByteY, IntPtr rawByteU, IntPtr rawByteV, int rowStrideY)
        {
            var pixelWidth = rowStrideY;
            var pixelHeight = (int)(long)(Math.Min((ulong)(new UIntPtr((void*)rawByteU)), (ulong)(new UIntPtr((void*)rawByteV))) - (ulong)new UIntPtr((void*)rawByteY)) / rowStrideY;
            return new Vector2Int(pixelWidth, pixelHeight);
        }

        public static void FillImageBuffer(Tuple<IntPtr, int> dataY, Tuple<IntPtr, int> dataU, Tuple<IntPtr, int> dataV, Vector2Int pixelSize, PixelFormat pixelFormat, Buffer imageBuffer)
        {
            int yLen = pixelSize.x * pixelSize.y;
            int uvLen = yLen / 2;

            imageBuffer.tryCopyFrom(dataY.Item1, 0, 0, Math.Min(yLen, dataY.Item2));

            switch (pixelFormat)
            {
                case PixelFormat.Gray:
                    break;
                case PixelFormat.YUV_NV12:
                    imageBuffer.tryCopyFrom(dataU.Item1, 0, yLen, Math.Min(uvLen, dataU.Item2));
                    if ((dataU.Item2 > 0) && (dataU.Item2 == dataV.Item2) && (dataU.Item2 < uvLen))
                    {
                        imageBuffer.tryCopyFrom(dataV.Item1, dataV.Item2 - 1, yLen + dataU.Item2, 1);
                    }
                    break;
                case PixelFormat.YUV_NV21:
                    imageBuffer.tryCopyFrom(dataV.Item1, 0, yLen, Math.Min(uvLen, dataV.Item2));
                    if ((dataU.Item2 > 0) && (dataU.Item2 == dataV.Item2) && (dataU.Item2 < uvLen))
                    {
                        imageBuffer.tryCopyFrom(dataU.Item1, dataU.Item2 - 1, yLen + dataV.Item2, 1);
                    }
                    break;
                case PixelFormat.YUV_I420:
                    imageBuffer.tryCopyFrom(dataU.Item1, 0, yLen, Math.Min(uvLen / 2, dataU.Item2));
                    imageBuffer.tryCopyFrom(dataV.Item1, 0, yLen + uvLen / 2, Math.Min(uvLen / 2, dataV.Item2));
                    break;
                case PixelFormat.YUV_YV12:
                    imageBuffer.tryCopyFrom(dataV.Item1, 0, yLen, Math.Min(uvLen / 2, dataV.Item2));
                    imageBuffer.tryCopyFrom(dataU.Item1, 0, yLen + uvLen / 2, Math.Min(uvLen / 2, dataU.Item2));
                    break;
                default:
                    throw new ArgumentException(pixelFormat.ToString());
            }
        }
    }
}
