// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��дһ���������á�ð�ݷ��������˵�10��������С�����˳�����С�
 */
#include <stdio.h>
#define N 10
void BubbleSort(int arr[N]);
int main() {

    int Array[N];
    printf_s("������ʮ��������\n");
    for (int i = 0; i < N; i++) {
        scanf("%d",&Array[i]);
    }
    BubbleSort(Array);
    printf_s("�����\n");
    for (int i = 0; i < N; i++) {
        printf_s("%3d",Array[i]);
    }
    return 0;
}

void BubbleSort(int arr[N]){
    int temp = 0,flag = 0;
    //ִ������
    for (int i = 0; i < N-1; i++) {
        //��ѭ������������һ����ҪN-1��
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