// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写两个函数分别求两个整数的最大公约数和最小公倍数，用主函数调用两个函数并输出结果，两个整数由键盘输人。
 */
#include <stdio.h>

int HCF,LCM;//HCF最大公约数。LCM最小公倍数
void hcf(int, int);
void lcm(int, int);

int main() {

    int m, n;
    printf_s("请输入两个正整数：\n");
    scanf("%d %d",&m,&n);
    hcf(m,n);
    lcm(m,n);
    printf_s("%d 和 %d 的最大公约数：%d\n",m,n,HCF);
    printf_s("%d 和 %d 的最小公倍数：%d\n",m,n,LCM);
    return 0;
}

void hcf(int m, int n){
    int temp,rem;
    if(n > m){
        temp = m;
        m = n;
        n = temp;
    }
    while ((rem = m % n) != 0){
        m = n;
        n = rem;
    }
    HCF = n;
}

void lcm(int m, int n){
    LCM = m * n /HCF;
}