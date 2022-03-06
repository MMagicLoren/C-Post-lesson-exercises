// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写判定闰年的函数，并调用此函数求出公元2000年到公元2100年之间的所有闰年。
 */
#include <stdio.h>

void LeapYear(int);

int main() {
    printf_s("公元2000-2100年之间的闰年：\n");
    for (int i = 2000; i <= 2100; i++) {
        LeapYear(i);
    }
    return 0;
}

void  LeapYear(int year){
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf_s("%d\n",year);
}