// Created by MagicLoren on 2022/3/5.

/*
 * ����������
 *      ��������һ��1-7֮���������������ת���ɶ�Ӧ�ı�ʾ���ڼ���Ӣ�ĵ��ʡ����磺1ת���� Monday ,7ת���� Sunday��
 */
#include <stdio.h>

int main() {

    int num;
    char* str;
    printf_s("��������һ��1-7֮���������\n");
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