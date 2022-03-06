// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写求圆的面积的函数，并调用该函数求出圆环的面积。
 */

#include <stdio.h>
#define PI 3.141526
float CircularArea(float R);

int main() {
    float R,Area;
    printf_s("请输入圆的半径R:\n");
    scanf("%f",&R);
    Area = CircularArea(R);
    printf_s("圆的面积为：%.2f",Area);
    return 0;
}
float CircularArea(float R){
    return PI*R*R;
}