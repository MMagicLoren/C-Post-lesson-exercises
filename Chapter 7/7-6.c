// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *       ��д�ַ������Ƶĺ����������ô˺�������һ���ַ�����
 */
#include <stdio.h>

void copy_string(char from[], char to[]);	//��������

int main() {
    char a[20]="i love you";
    char b[20]="you dont love me";
    printf("string a = %s\nstring b = %s", a, b);
    printf("\ncopy a to b:\n");

    copy_string(a,b);   //���ú���

    printf("string a = %s\nstring b = %s\n", a, b);
    return 0;

}

void copy_string(char from[], char to[]) {  //�β�Ϊ�ַ�����
    int i = 0;
    for (i = 0; from[i] != '\0'; i++) {
        to[i] = from[i];
    }
    to[i] = '\0';   //�ַ�����
}
