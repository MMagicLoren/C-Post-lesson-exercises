// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ����Ϊ10�����飬��д�����ҳ����е�����������ڸ������е�λ�á�
 */
#include <stdio.h>
#define N 10
int main() {

    int Num[N],Max,pos = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d",&Num[i]);
    }
    Max = Num[0];
    for (int i = 0; i < N; i++) {
        if(Num[i] > Max){
            Max = Num[i];
            pos = i + 1;
        }
    }
    printf_s("�����е����ֵ�ǣ�%d\n�������д��ڵ�%dλ��",Max,pos);
    return 0;
}