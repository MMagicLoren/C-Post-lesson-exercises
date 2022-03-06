// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      输出小写字母的ASCII码对照表。
 */
#include <stdio.h>

int main() {

    char c='a';
    printf("小写字母ASCII码对应值：\n");
    while(c<='z')
    {
        printf("%-5c %d\n",c,c);
        c++;
    }
    return 0;
}