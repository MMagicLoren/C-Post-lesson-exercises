// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 * ���������ε�3���� a �� b �� c ���ж������ܷ񹹳������Ρ����ܹ��������Σ���������������
 * ( s =( a + b + c )/2����������� area = sqrt (s(s - a)(s - b)(s - c)))
 */
#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c,s,Area;
    printf("���������������߳���\n");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        s = (a + b + c) / 2;
        Area = sqrtf(s * (s - a) * (s - b) * (s - c));
        printf("�����������%.2f",Area);
    }
    else printf("�޷����������Σ�");
    return 0;
}