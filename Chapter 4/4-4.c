// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 *  �Ա���ж����˵��������Ƿ����5����7�������������ǣ������yes ���������no ��
 */
#include <stdio.h>

int main() {

    int num;
    printf_s("������һ����������\n");
    scanf("%d",&num);
    if((num % 5 == 0) && (num % 7 == 0)) printf_s("Yes!");
    else printf_s("No!");
    return 0;
}