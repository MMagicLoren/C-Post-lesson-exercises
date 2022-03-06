// Created by MagicLoren on 2022/3/5.

/*
 * 问题描述：
 * 输人一个百分制成绩，若大于等于60，则输出“恭喜！您的成绩通过了”，若小于60，则输出“抱歉！您的成绩未通过！”
 */
#include <stdio.h>

int main() {

    float score = 0;
    printf("请输入成绩：\n");
    scanf("%f",&score);
    if(score >= 60 && score <= 100) printf("恭喜！您的成绩通过了!");
    else if(score < 60  && score >= 0) printf("抱歉！您的成绩未通过!");
    else printf("输入有误！");
    return 0;
}