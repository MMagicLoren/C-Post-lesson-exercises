// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 * ����3������ x �� y �� Z �����������Сֵ��
 */
#include <stdio.h>

int main()
{

    int x,y,z,min;
    printf("����������������\n");
    scanf("%d %d %d",&x,&y,&z);
    min = x<y?x:y;
    min = min<z?min:z;
    printf("��Сֵ�ǣ�%d\n",min);
    return 0;
}