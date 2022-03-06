// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      将两个字符串连接起来（不使用 strcat 函数）
 */
#include <stdio.h>

int main() {

    char str1[80],str2[40];
    int i = 0,j = 0;
    printf_s("输入字符串str1:\n");
    scanf("%s",str1);
    printf_s("输入字符串str2:\n");
    scanf("%s",str2);
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') str1[i++] = str2[j++];
    str1[i] = '\0';
    printf_s("合成字符串：%s\n",str1);
    return 0;
}