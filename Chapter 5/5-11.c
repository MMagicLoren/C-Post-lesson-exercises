// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *       求s=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)，要求n从键盘输人。
 */
#include <stdio.h>

int main() {

    int n,sum = 0,result = 0;
    printf_s("请输入正整数n:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++) {
        sum += i;
        result += sum;
    }
    printf_s("1+(1+2)+(1+2+3)+...+(1+2+3+...+%d) = %d",n,result);
    return 0;
}