// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 *      ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
 */
#include <stdio.h>

int main() {
    char str;
    int letters = 0,space = 0,digit = 0,other = 0;
    printf_s("������һ���ַ���\n");
    while ((str = getchar())!='\n')
    {
        if((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
            letters++;
        else if(str == ' ')
            space++;
        else if(str >= '0' && str <= '9')
            digit++;
        else
            other++;
    }
    printf_s("��ĸ����%d\n�ո�����%d\n��������%d\n�����ַ�����%d\n",letters,space,digit,other);
    return 0;
}