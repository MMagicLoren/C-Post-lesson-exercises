// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��дһ���������ú����Ĺ������ж�һ�������ǲ���������������ָ����1�����������⣬���ܱ��κ�����������������
 *      �� main ����������һ�����������øú������жϸ����ǲ�������������������� yes ������������� no ����
 */
#include <stdio.h>
int IsPrimeNumber(int Number);

int main() {

    int Number;
    printf_s("������һ��������\n");
    scanf("%d",&Number);
    if(IsPrimeNumber(Number) == 1) printf_s("Yes!");
    else printf_s("No!");
    return 0;
}

int IsPrimeNumber(int Number){

    if(Number == 2) return 1;
    if(Number % 2 == 0 || Number == 1) return 0;
    for(int i = 3; i <= Number/2+1; i += 2)
        if(Number % i == 0) return 0;
    return 1;
}