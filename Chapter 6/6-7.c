// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��������������е�ǰ10�С�
 */
#include <stdio.h>

int main(){
    int a[11][11]= {0,1};
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
