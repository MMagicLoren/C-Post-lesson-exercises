// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��д���������ֱ����������������Լ������С�����������������������������������������������ɼ������ˡ�
 */
#include <stdio.h>

int HCF,LCM;//HCF���Լ����LCM��С������
void hcf(int, int);
void lcm(int, int);

int main() {

    int m, n;
    printf_s("������������������\n");
    scanf("%d %d",&m,&n);
    hcf(m,n);
    lcm(m,n);
    printf_s("%d �� %d �����Լ����%d\n",m,n,HCF);
    printf_s("%d �� %d ����С��������%d\n",m,n,LCM);
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