// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��д�жϻ��ĵĺ����������ô˺����ж�һ���ַ����Ƿ�Ϊ���ġ��������ַ�����ָ���ַ��������Ҷ��ʹ��ҵ������ȫһ����)
 */
#include <stdio.h>

#define N 20
typedef enum {false, true} bool;
bool palindrome(char *s);

int main()
{
    char str[N];
    printf_s("������һ���ַ�����\n");
    scanf("%s", str);
    if (palindrome(str)==true) printf("Yes\n");
    else printf("No\n");
    return 0;
}

bool palindrome(char *s){
    char *a = s;		        //����һ����ָ��ָ��s
    int i = 0,k=0;
    while (*a != '\0'){     	//ʹ��ָ��a���ַ������б�����ͳ���ַ���λ��
        a++;
        i++;
    }
    a--;                      //��Ϊ���һλΪ'\0'���Լ�һλ
    while (*s != '\0'){       //���������Ƚ�
        if (*s == *a) k++;
        else return false;   //�ڱ����������ж�Ӧ����ȵ��ֱ�ӷ���false
        s++;    //ָ��s���������a���бȽ�
        a--;     //ָ��a���������s���бȽ�
    }
    if (k == i)          //���k��i�����˵���ڱ����������ַ��������뷴���Ӧ��ȣ�����true
         return true;
}