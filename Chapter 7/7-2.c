// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写一个函数，该函数的功能是判断一个整数是不是素数（素数是指除了1和它本身以外，不能被任何整数整除的数）。
 *      在 main 函数中输人一个整数，调用该函数，判断该数是不是素数，若是则输出“ yes ”，否则输出“ no ”。
 */
#include <stdio.h>
int IsPrimeNumber(int Number);

int main() {

    int Number;
    printf_s("请输入一个整数：\n");
    scanf("%d",&Number);
    if(IsPrimeNumber(Number) == 1) printf_s("Yes!");
    else printf_s("No!");
    return 0;
}

int IsPrimeNumber(int Number){

    if(Number == 2) return 1;
    if(Number % 2 == 0 || Number == 1) return 0;
    for(int i = 3; i <= Number/2+1; i += 2)
        if(Number % i == 0) return 0;
    return 1;
}