// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      求1+3+5+…+99的值。
 */
#include <stdio.h>

int main() {

    int sum = 0;
    for (int i = 1; i < 100; i+=2) {
        sum += i;
    }
    printf_s("1+3+5+…+99 = %d",sum);
    return 0;
}