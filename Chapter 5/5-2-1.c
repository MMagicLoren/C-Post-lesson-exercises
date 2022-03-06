// Created by MagicLoren on 2022/3/5.


#include <stdio.h>

int main() {
    int i = 1,s = 1,n;
    long sum = 1,result = 0;
    printf_s("请输入一个整数：\n");
    scanf("%d", &n);
    for (; s <= n; s++)
    {
        for (; i <= s; i++)
        {
            sum *= i;
            printf("%d!=%ld\n", s, sum);
        }
        result += sum;
        printf_s("result = %ld\n",result);
    }
    printf_s("1!+2!+ …+%d!=%ld", n, result);
    return 0;
}