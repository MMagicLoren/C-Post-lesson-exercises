// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      �������ַ���������������ʹ�� strcat ������
 */
#include <stdio.h>

int main() {

    char str1[80],str2[40];
    int i = 0,j = 0;
    printf_s("�����ַ���str1:\n");
    scanf("%s",str1);
    printf_s("�����ַ���str2:\n");
    scanf("%s",str2);
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') str1[i++] = str2[j++];
    str1[i] = '\0';
    printf_s("�ϳ��ַ�����%s\n",str1);
    return 0;
}