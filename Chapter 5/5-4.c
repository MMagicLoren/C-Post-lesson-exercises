// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 *      ���Сд��ĸ��ASCII����ձ�
 */
#include <stdio.h>

int main() {

    char c='a';
    printf("Сд��ĸASCII���Ӧֵ��\n");
    while(c<='z')
    {
        printf("%-5c %d\n",c,c);
        c++;
    }
    return 0;
}