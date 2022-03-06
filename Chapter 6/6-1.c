// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写程序，计算 Fibonacci 数列的前50项。
 */
#include <stdio.h>
#define N 50

int main() {

    double Fibonacci[50] = {1,1};
    for (int i = 2; i < N ; i++) {
        //根据数列的定义，进行计算(N项的结果等于 (n-1)+(n-2))
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }
    for (int i = 0; i < N ; i++) {
        if(i % 5 == 0)printf_s("\n");
        printf_s("%.0f\t",Fibonacci[i]);
    }
    return 0;
}