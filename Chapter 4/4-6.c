// Created by MagicLoren on 2022/3/5.

/*
 *����������
 *   ���ʵ�����¹��ܣ����������������� data1 �� data2����һ��������� op )��������ʽdata1 op data2��ֵ��
 *   ���� op ��Ϊ+,-,*,/���� switch ���ʵ��)��
 */
#include <stdio.h>

int main() {

    float data1,data2,result;
    char op;
    printf_s("������������������data1 �� data2����һ���������op)��\n");
    scanf("%f %f %c",&data1,&data2,&op);
    switch (op) {
        case '+':result = data1 + data2;break;
        case '-':result = data1 - data2;break;
        case '*':result = data1 * data2;break;
        case '/':result = data1 / data2;break;
        default:
            printf_s("��������");return -1;
    }
    printf_s("%f %c %f = %.2f",data1,op,data2,result);
    return 0;
}