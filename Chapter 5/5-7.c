// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ���100���ھ���10���������ӵ�������������������ӡ�
 */
#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 10; i <=100 ; i++)
    {
        count = 0;
        for (int j = 1; j <= i ; j++)
            if(i % j == 0) count++;
        if(count >= 10)
        {
            printf_s("%d�������У�",i);
            for (int k = 1; k <= i ; k++)
                if(i % k == 0)printf_s("%3d",k);
            printf_s("\n");
        }
    }
    return 0;
}