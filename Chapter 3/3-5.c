// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 * 已知圆的半径r=2.5，圆柱高h=1.8，求圆柱表面积和圆柱体积。（要求表面积和体积保留两位小数）
 */
#include <stdio.h>
#define PI 3.141526

int main()
{
    float R,H,SurfaceArea,Volume;
    printf("请输入半径R，圆柱高H：\n");
    scanf("%f %f",&R,&H);
    SurfaceArea = 2*PI*R*H;
    Volume = PI*R*R*H;
    printf("圆柱表面积：%.2f\n",SurfaceArea);
    printf("圆柱体积：%.2f\n",Volume);
    return 0;
}