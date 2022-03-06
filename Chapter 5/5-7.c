// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      输出100以内具有10个以上因子的整数，并输出它的因子。
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
            printf_s("%d的因子有：",i);
            for (int k = 1; k <= i ; k++)
                if(i % k == 0)printf_s("%3d",k);
            printf_s("\n");
        }
    }
    return 0;
}