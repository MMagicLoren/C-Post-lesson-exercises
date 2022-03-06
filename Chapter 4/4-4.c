// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *  试编程判断输人的正整数是否既是5又是7的整倍数。若是，则输出yes ，否则输出no 。
 */
#include <stdio.h>

int main() {

    int num;
    printf_s("请输入一个正整数：\n");
    scanf("%d",&num);
    if((num % 5 == 0) && (num % 7 == 0)) printf_s("Yes!");
    else printf_s("No!");
    return 0;
}