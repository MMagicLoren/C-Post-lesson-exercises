// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写一个函数，用“冒泡法”对输人的10个数按由小到大的顺序排列。
 */
#include <stdio.h>
#define N 10
void BubbleSort(int arr[N]);
int main() {

    int Array[N];
    printf_s("请输入十个整数：\n");
    for (int i = 0; i < N; i++) {
        scanf("%d",&Array[i]);
    }
    BubbleSort(Array);
    printf_s("排序后：\n");
    for (int i = 0; i < N; i++) {
        printf_s("%3d",Array[i]);
    }
    return 0;
}

void BubbleSort(int arr[N]){
    int temp = 0,flag = 0;
    //执行排序
    for (int i = 0; i < N-1; i++) {
        //外循环控制趟数，一共需要N-1趟
        flag = 0;
        for (int j = 0; j < N-i-1; j++) {
            if(arr[j+1] < arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}