// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      长度为10的数组，编写程序找出其中的最大数及其在该数组中的位置。
 */
#include <stdio.h>
#define N 10
int main() {

    int Num[N],Max,pos = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d",&Num[i]);
    }
    Max = Num[0];
    for (int i = 0; i < N; i++) {
        if(Num[i] > Max){
            Max = Num[i];
            pos = i + 1;
        }
    }
    printf_s("数组中的最大值是：%d\n在数组中处于第%d位！",Max,pos);
    return 0;
}