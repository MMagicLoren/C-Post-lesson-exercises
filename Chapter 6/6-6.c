// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *       ��̽�һ�������е�Ԫ�ذ��������´�š�
 */
#include <stdio.h>

#define N 6
int main() {

    int Num[N] = {1,2, 3, 4, 5, 6},temp = 0;
    printf_s("����ԭ���У�\n");
    for (int i = 0; i < N; i++) {
        printf_s("%3d",Num[i]);
    }
    //ִ������
    for (int i = 0; i < N/2; i++) {
        temp = Num[i];
        Num[i] = Num[N-i-1];
        Num[N-i-1] = temp;
    }
    printf_s("\n���������У�\n");
    for (int i = 0; i < N; i++) {
        printf_s("%3d",Num[i]);
    }
    return 0;
}