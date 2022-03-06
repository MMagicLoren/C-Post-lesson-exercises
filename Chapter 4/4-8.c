// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 *      输入任意一个1-7之间的整数，将他们转换成对应的表示星期几的英文单词。例如：1转换成 Monday ,7转换成 Sunday。
 */
#include <stdio.h>

int main() {

    int num;
    char* str;
    printf_s("输入任意一个1-7之间的整数：\n");
    scanf("%d",&num);
    switch (num) {
        case 1:str = "Monday";      break;
        case 2:str = "Tuesday";     break;
        case 3:str = "Wednesday";   break;
        case 4:str = "Thursday";    break;
        case 5:str = "Friday";      break;
        case 6:str = "Saturday";    break;
        case 7:str = "Sunday";      break;
        default:                    return -1;
    }
    printf_s("%d ----> %s",num,str);
    return 0;
}