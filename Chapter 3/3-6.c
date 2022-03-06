// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 * 要将“ China ”译成密码，译码规律是：用原来字母后面的第5个学母代替原来的字母。例如，字母“ A ”后面第5个字母是“ F ”，用“ F ”代替“ A ”。
 * 因此，“ China " 应译为“ Hmnsf " 。请编写程序，用赋初值的方法使 cl、c2、c3、c4、c5个变量的值分别为‘ C ’、‘ h ’、‘ i ’、‘ n ’、‘ a ’，
 * 经过运算，使 c1 、c2、c3、c4、c5分别变为‘ H ‘ 、’ m ‘、' n ’、‘ s ＇、‘ f ‘ 并输出。
 */

#include <stdio.h>


int main() {

    char c1 = 'C',c2 = 'h',c3 = 'i',c4 = 'n',c5 = 'a';
    c1 += 5;
    c2 += 5;
    c3 += 5;
    c4 += 5;
    c5 += 5;
    printf("Password is:%c%c%c%c%c\n",c1,c2,c3,c4,c5);
    return 0;
}