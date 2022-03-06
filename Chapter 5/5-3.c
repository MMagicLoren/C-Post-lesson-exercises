// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      输人一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
 */
#include <stdio.h>

int main() {
    char str;
    int letters = 0,space = 0,digit = 0,other = 0;
    printf_s("请输入一行字符：\n");
    while ((str = getchar())!='\n')
    {
        if((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
            letters++;
        else if(str == ' ')
            space++;
        else if(str >= '0' && str <= '9')
            digit++;
        else
            other++;
    }
    printf_s("字母数：%d\n空格数：%d\n数字数：%d\n其他字符数：%d\n",letters,space,digit,other);
    return 0;
}