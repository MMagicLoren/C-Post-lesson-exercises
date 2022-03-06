// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      有一个2×3的矩阵，编程找出值最小的元素的值以及它所在的行列号。
 */
#include <stdio.h>

#define N 2
#define M 3
int main() {

    int Array[N][M] = {{2,1,3},{4,5,6}};
    int Min = Array[0][0],line = 0,column = 0;
    printf_s("Array:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf_s("%3d",Array[i][j]);
            if(Array[i][j] <= Min) {
                Min = Array[i][j];
                line = i + 1;
                column = j + 1;
            }
        }
        printf_s("\n");
    }
    printf_s("二维数组最小元素：%d\n所在行列号：%d行 %d列\n",Min,line,column);
    return 0;
}