// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 * ��֪Բ�İ뾶r=2.5��Բ����h=1.8����Բ���������Բ���������Ҫ�����������������λС����
 */
#include <stdio.h>
#define PI 3.141526

int main()
{
    float R,H,SurfaceArea,Volume;
    printf("������뾶R��Բ����H��\n");
    scanf("%f %f",&R,&H);
    SurfaceArea = 2*PI*R*H;
    Volume = PI*R*R*H;
    printf("Բ���������%.2f\n",SurfaceArea);
    printf("Բ�������%.2f\n",Volume);
    return 0;
}