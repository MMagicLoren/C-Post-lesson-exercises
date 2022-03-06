// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      输出以下图形。
 *              A
 *             BBB
 *            CCCCC
 *           DDDDDDD
 */
#include <stdio.h>
#define N 4
int main() {

    char ch = 'A';
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-i-1; j++) {
            printf_s(" ");
        }
        for (int j = 0; j < 2*i+1; j++) {
            printf_s("%c",ch+i);
        }
        printf_s("\n");
    }
    return 0;
}