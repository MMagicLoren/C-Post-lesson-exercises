// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *       编程将一个数组中的元素按逆序重新存放。
 */
#include <stdio.h>

#define N 6
int main() {

    int Num[N] = {1,2, 3, 4, 5, 6},temp = 0;
    printf_s("数组原序列：\n");
    for (int i = 0; i < N; i++) {
        printf_s("%3d",Num[i]);
    }
    //执行逆序
    for (int i = 0; i < N/2; i++) {
        temp = Num[i];
        Num[i] = Num[N-i-1];
        Num[N-i-1] = temp;
    }
    printf_s("\n数组逆序列：\n");
    for (int i = 0; i < N; i++) {
        printf_s("%3d",Num[i]);
    }
    return 0;
}