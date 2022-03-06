// Created by MagicLoren on 2022/3/5.

/*
 *问题描述：
 *   编程实现以下功能：读入两个运算数（ data1 和 data2）及一个运算符（ op )，计算表达式data1 op data2的值，
 *   其中 op 可为+,-,*,/（用 switch 语句实现)。
 */
#include <stdio.h>

int main() {

    float data1,data2,result;
    char op;
    printf_s("请输入两个运算数（data1 和 data2）及一个运算符（op)：\n");
    scanf("%f %f %c",&data1,&data2,&op);
    switch (op) {
        case '+':result = data1 + data2;break;
        case '-':result = data1 - data2;break;
        case '*':result = data1 * data2;break;
        case '/':result = data1 / data2;break;
        default:
            printf_s("输入有误！");return -1;
    }
    printf_s("%f %c %f = %.2f",data1,op,data2,result);
    return 0;
}