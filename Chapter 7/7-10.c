// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写一个函数，使给定的一个3×3的二维整型数组转置，即行列互换。
 */
#include <stdio.h>
#define N 3
int array[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
void Convert(int arr[][N]);

int main() {

    printf_s("原始数组：\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf_s("%5d", array[i][j]);
        printf_s("\n");
    }
    Convert(array);
    printf_s("转置数组：\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf_s("%5d", array[i][j]);
        printf_s("\n");
    }
    return 0;
}

void Convert(int arr[][N]){
    int temp;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1 ; j < N; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}