// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��һ��2��3�ľ��󣬱���ҳ�ֵ��С��Ԫ�ص�ֵ�Լ������ڵ����кš�
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
    printf_s("��ά������СԪ�أ�%d\n�������кţ�%d�� %d��\n",Min,line,column);
    return 0;
}