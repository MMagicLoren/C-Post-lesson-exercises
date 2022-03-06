// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 * 输人三角形的3条边 a 、 b 、 c ，判断它们能否构成三角形。若能构成三角形，求出三角形面积。
 * ( s =( a + b + c )/2，三角形面积 area = sqrt (s(s - a)(s - b)(s - c)))
 */
#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c,s,Area;
    printf("输入三角形三条边长：\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        s = (a + b + c) / 2;
        Area = sqrtf(s * (s - a) * (s - b) * (s - c));
        printf("三角形面积：%.2f",Area);
    }
    else printf("无法构成三角形！");
    return 0;
}