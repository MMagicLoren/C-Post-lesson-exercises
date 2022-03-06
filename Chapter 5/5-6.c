// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      计算1-1/2+1/3-1/4+...+1/99-1/100+...,直到最后一项的绝对值小于10的-6次方为止。
 */
#include <stdio.h>
#include <math.h>
int main() {
    int flag = 1;
    float sum = 0.0f;
    for (int i = 1; fabs(1.0/i)>0.0000001; i++) {
        sum += 1.0/i*flag;
        flag*=-1;
    }
    printf_s("1-1/2+1/3-1/4+...+1/99-1/100+... = %f",sum);
    return 0;
}