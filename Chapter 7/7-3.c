// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *       ��д�� k���ĺ��������øú����� C(m, n)=m!/(n!*(m �� n)!���������
 */
#include <stdio.h>
int Factorial(int num);
int Function(int m,int n);
int main() {

    int m,n,result = 0;
    printf_s("����������������m,n��:\n");
    scanf("%d %d",&m,&n);
    result = Function(m,n);
    printf_s("%d!/(%d!*(%d �� %d)!)= %d",m,n,m,n,result);
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