//================================================================================================================================
//
//  Copyright (c) 2015-2022 VisionStar Information Technology (Shanghai) Co., Ltd. All Rights Reserved.
//  EasyAR is the registered trademark or trademark of VisionStar Information Technology (Shanghai) Co., Ltd in China
//  and other countries for the augmented reality technology developed by VisionStar Information Technology (Shanghai) Co., Ltd.
//
//================================================================================================================================

Shader "EasyAR/CameraImage_Gray"
{
    Properties
    {
        _grayTexture("Texture", 2D) = "white" {}
    }
    SubShader
    {
        Tags { "RenderType" = "Opaque" }
        LOD 100

        Pass
        {
            Cull Off
            ZWrite Off
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float2 texcoord : TEXCOORD0;
            };

            sampler2D _grayTexture;
            float4 _grayTexture_ST;
            float4x4 _DisplayTransform;
            float _RowRatio;
            float _RowMax;

            v2f vert(appdata i)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(i.vertex);
                o.texcoord = TRANSFORM_TEX(i.texcoord, _grayTexture);
                o.texcoord = float2(o.texcoord.x, 1.0 - o.texcoord.y);
                o.texcoord = mul(_DisplayTransform, float3(o.texcoord, 1.0f)).xy;
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                float2 texcoord = float2(clamp(i.texcoord.x * _RowRatio, 0, _RowMax), i.texcoord.y);
                float4 col = float4(tex2D(_grayTexture, texcoord).aaa, 1.0);
#ifndef UNITY_COLORSPACE_GAMMA
                col.xyz = GammaToLinearSpace(col.xyz);
#endif
                return col;
            }
            ENDCG
        }
    }
}
