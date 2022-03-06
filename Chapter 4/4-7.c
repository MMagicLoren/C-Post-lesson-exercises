// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      有4个数 a 、 b 、 c 、 d ，要求按从大到小的顺序输出。
 */
#include <stdio.h>

int main() {

    int a,b,c,d,temp;
    printf_s("请输入4个整数：\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b)temp=a,a=b,b=temp;
    if(a<c)temp=a,a=c,c=temp;
    if(a<d)temp=a,a=d,d=temp;
    if(b<c)temp=b,b=c,c=temp;
    if(b<d)temp=b,b=d,d=temp;
    if(c<d)temp=c,c=d,d=temp;
    printf_s("从大到小的顺序为：%d %d %d %d ",a,b,c,d);
    return 0;
}