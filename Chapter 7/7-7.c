// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写判断回文的函数，并调用此函数判定一个字符串是否为回文。（回文字符串是指该字符串从左到右读和从右到左读完全一样。)
 */
#include <stdio.h>

#define N 20
typedef enum {false, true} bool;
bool palindrome(char *s);

int main()
{
    char str[N];
    printf_s("请输入一个字符串：\n");
    scanf("%s", str);
    if (palindrome(str)==true) printf("Yes\n");
    else printf("No\n");
    return 0;
}

bool palindrome(char *s){
    char *a = s;		        //定义一个新指针指向s
    int i = 0,k=0;
    while (*a != '\0'){     	//使用指针a最字符串进行遍历，统计字符串位数
        a++;
        i++;
    }
    a--;                      //因为最后一位为'\0'所以减一位
    while (*s != '\0'){       //进行两个比较
        if (*s == *a) k++;
        else return false;   //在遍历过程中有对应不相等的项，直接返回false
        s++;    //指针s正向遍历与a进行比较
        a--;     //指针a反向遍历与s进行比较
    }
    if (k == i)          //如果k与i相等则说明在遍历过程中字符串正向与反向对应相等，返回true
         return true;
}