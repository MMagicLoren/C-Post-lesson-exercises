// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *       ��s=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)��Ҫ��n�Ӽ������ˡ�
 */
#include <stdio.h>

int main() {

    int n,sum = 0,result = 0;
    printf_s("������������n:\n");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++) {
        sum += i;
        result += sum;
    }
    printf_s("1+(1+2)+(1+2+3)+...+(1+2+3+...+%d) = %d",n,result);
    return 0;
}