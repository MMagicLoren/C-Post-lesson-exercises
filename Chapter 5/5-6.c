// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ����1-1/2+1/3-1/4+...+1/99-1/100+...,ֱ�����һ��ľ���ֵС��10��-6�η�Ϊֹ��
 */
#include <stdio.h>
#include <math.h>
int main() {
    int flag = 1;
    float sum = 0.0f;
    for (int i = 1; fabs(1.0/i)>0.0000001; i++) {
        sum += 1.0/i*flag;
        flag*=-1;
    }
    printf_s("1-1/2+1/3-1/4+...+1/99-1/100+... = %f",sum);
    return 0;
}