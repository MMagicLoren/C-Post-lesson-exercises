// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��д���򣬼��� Fibonacci ���е�ǰ50�
 */
#include <stdio.h>
#define N 50

int main() {

    double Fibonacci[50] = {1,1};
    for (int i = 2; i < N ; i++) {
        //�������еĶ��壬���м���(N��Ľ������ (n-1)+(n-2))
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }
    for (int i = 0; i < N ; i++) {
        if(i % 5 == 0)printf_s("\n");
        printf_s("%.0f\t",Fibonacci[i]);
    }
    return 0;
}