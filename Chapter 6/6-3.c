// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      使用冒泡排序方法，对10个数按照由小到大的顺序排序。
 */
#include <stdio.h>
#define N 10
int main() {

    int Num[N],temp = 0,flag = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d",&Num[i]);
    }
    //执行排序
    for (int i = 0; i < N-1; i++) {
        //外循环控制趟数，一共需要N-1趟
        flag = 0;
        for (int j = 0; j < N-i-1; j++) {
            if(Num[j+1] < Num[j]){
                temp = Num[j];
                Num[j] = Num[j+1];
                Num[j+1] = temp;
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
    //输出排序结果
    for (int i = 0; i < N; i++) {
        printf_s("%3d",Num[i]);
    }
    return 0;
}