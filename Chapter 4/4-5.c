// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 *      ����һ���ַ������ж�����ĸ�����ֻ��������ַ���
 */
#include <stdio.h>

int main() {

    char ch;
    printf_s("������һ���ַ���\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) printf_s("�����%c����ĸ��",ch);
    else if(ch >= '0' && ch <= '9') printf_s("�����%c�����֣�",ch);
    else printf_s("�����%c�������ַ���",ch);
    return 0;
}