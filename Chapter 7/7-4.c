// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��д�ж�����ĺ����������ô˺��������Ԫ2000�굽��Ԫ2100��֮����������ꡣ
 */
#include <stdio.h>

void LeapYear(int);

int main() {
    printf_s("��Ԫ2000-2100��֮������꣺\n");
    for (int i = 2000; i <= 2100; i++) {
        LeapYear(i);
    }
    return 0;
}

void  LeapYear(int year){
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        printf_s("%d\n",year);
}