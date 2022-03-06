// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      输人一个字符，请判断是字母、数字还是特殊字符。
 */
#include <stdio.h>

int main() {

    char ch;
    printf_s("请输入一个字符：\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) printf_s("输入的%c是字母！",ch);
    else if(ch >= '0' && ch <= '9') printf_s("输入的%c是数字！",ch);
    else printf_s("输入的%c是特殊字符！",ch);
    return 0;
}