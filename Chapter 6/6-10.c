// Created by MagicLoren on 2022/3/6.


/*
 *问题描述：
 *       编程输出以下图案。
 *              *
 *            * * *
 *          *   *   *
 *            * * *
 *              *
 */
#include <stdio.h>

int main() {
    //上半部分
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j < 5-2*i; j++)
            printf_s(" ");
        for (int j = 0; j <= 4*i; j++){
            if(i % 2 == 1){
                if(j % 2 == 0)printf_s("*");
                else printf_s(" ");
            }
            else{
                if(j % 4 == 0)printf_s("*");
                else printf_s(" ");
            }
        }
        printf_s("\n");
    }
    //下半部分
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 2*i+2; j++)
            printf_s(" ");
        for (int j = 0; j <= 5-4*i; j++){
            if(j % 2 == 0)printf_s("*");
            else printf_s(" ");
        }
        printf_s("\n");
    }
    return 0;
}