// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写程序，求出666666的约数中最大的三位数是多少。
 */
#include <stdio.h>

int main()
{
    for(int i = 999; i >= 100; i--){
        if(666666%i==0){
            printf("最大的约数：%d\n",i);
            return 0;
        }
    }
    return 0;
}
