// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 * 输人3个整数 x 、 y 、 Z ，输出其中最小值。
 */
#include <stdio.h>

int main()
{

    int x,y,z,min;
    printf("请输入三个整数：\n");
    scanf("%d %d %d",&x,&y,&z);
    min = x<y?x:y;
    min = min<z?min:z;
    printf("最小值是：%d\n",min);
    return 0;
}