// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 * ����һ���ٷ��Ƴɼ��������ڵ���60�����������ϲ�����ĳɼ�ͨ���ˡ�����С��60�����������Ǹ�����ĳɼ�δͨ������
 */
#include <stdio.h>

int main() {

    float score = 0;
    printf("������ɼ���\n");
    scanf("%f",&score);
    if(score >= 60 && score <= 100) printf("��ϲ�����ĳɼ�ͨ����!");
    else if(score < 60  && score >= 0) printf("��Ǹ�����ĳɼ�δͨ��!");
    else printf("��������");
    return 0;
}