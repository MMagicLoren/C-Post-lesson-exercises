// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      计算s ＝ 1! + 3! +…+ 9!的值。
 */
#include <stdio.h>

int main() {

    int sum = 0,fac = 1;
    for( int i = 1; i <= 9; i++)
    {
        fac *= i;
        sum += fac;
    }
    printf("1! + 3! +…+ 9! = %d",sum);
    return 0;
}


