// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��д��Բ������ĺ����������øú������Բ���������
 */

#include <stdio.h>
#define PI 3.141526
float CircularArea(float R);

int main() {
    float R,Area;
    printf_s("������Բ�İ뾶R:\n");
    scanf("%f",&R);
    Area = CircularArea(R);
    printf_s("Բ�����Ϊ��%.2f",Area);
    return 0;
}
float CircularArea(float R){
    return PI*R*R;
}