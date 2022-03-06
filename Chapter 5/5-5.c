// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      计算s= 1+12+123+1234+12345的值。
 */
#include <stdio.h>

int main() {

    int t = 0,  s = 0 ;
    for (int i = 1; i <= 5; i++)    {
        t = i + t * 10 ;
        s += t;
    }
    printf("1+12+123+1234+12345= %d\n", s);
    return 0;
}