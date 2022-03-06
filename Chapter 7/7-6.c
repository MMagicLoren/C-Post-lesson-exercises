// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *       编写字符串复制的函数，并调用此函数复制一个字符串。
 */
#include <stdio.h>

void copy_string(char from[], char to[]);	//函数调用

int main() {
    char a[20]="i love you";
    char b[20]="you dont love me";
    printf("string a = %s\nstring b = %s", a, b);
    printf("\ncopy a to b:\n");

    copy_string(a,b);   //调用函数

    printf("string a = %s\nstring b = %s\n", a, b);
    return 0;

}

void copy_string(char from[], char to[]) {  //形参为字符数组
    int i = 0;
    for (i = 0; from[i] != '\0'; i++) {
        to[i] = from[i];
    }
    to[i] = '\0';   //字符结束
}
