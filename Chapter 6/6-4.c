// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      将一个二维数组的行列元素互换，存放到另一个二维数组中。
 */
#include <stdio.h>
#define N 2
#define M 3
int main() {

    int Array1[N][M] = {{1,2,3},{4,5,6}};
    int Array2[M][N];
    printf_s("Array1:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf_s("%3d",Array1[i][j]);
            Array2[j][i] = Array1[i][j];
        }
        printf_s("\n");
    }
    printf_s("Array2:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf_s("%3d",Array2[i][j]);
        }
        printf_s("\n");
    }
    return 0;
}