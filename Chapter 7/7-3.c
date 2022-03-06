// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *       编写求 k！的函数，调用该函数求 C(m, n)=m!/(n!*(m － n)!）并输出。
 */
#include <stdio.h>
int Factorial(int num);
int Function(int m,int n);
int main() {

    int m,n,result = 0;
    printf_s("请输入两个整数（m,n）:\n");
    scanf("%d %d",&m,&n);
    result = Function(m,n);
    printf_s("%d!/(%d!*(%d － %d)!)= %d",m,n,m,n,result);
    return 0;
}

int Factorial(int num){
    if (num == 1)
        return 1;
    else
        return Factorial(num - 1) * num;
}

int Function(int m,int n){
    return Factorial(m)/(Factorial(n)*Factorial(m - n));
}