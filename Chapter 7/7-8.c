// Created by MagicLoren on 2022/3/6.

/*
 * ����������
 *      ��дһ����������һ������������в���һ���������˺�Ч����Ȼά�������������ͬ������Ҫ��������ͬ�����ĺ��档
 */
#include <stdio.h>

int Insert(int arr[],int num);

int main() {

    int array[11]={1,4,6,9,13,16,19,28,40,100};
    int temp1,temp2,number,end,j;
    printf_s("Original array is:\n");
    for(int i = 0;i < 10;i++)
        printf_s("%5d",array[i]);
    printf_s("\n");

    printf_s("Insert a new number:");
    scanf("%d",&number);

    Insert(array,number);
    printf_s("New array is:\n");
    for(int i = 0; i < 11; i++)
        printf_s("%5d",array[i]);
    return 0;
}

int Insert(int arr[],int num){
    int end,temp1,temp2;
    end = arr[9];
    if(num > end)
        arr[10] = num;
    else{
        for(int i = 0; i < 10; i++){
            if(arr[i] > num){
                temp1 = arr[i];
                arr[i] = num;
                for(int j = i+1; j < 11; j++){
                    temp2 = arr[j];
                    arr[j] = temp1;
                    temp1 = temp2;
                }
                break;
            }
        }
    }
}