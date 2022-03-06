// Created by MagicLoren on 2022/3/6.

/*
 * 问题描述：
 *      编写一个函数，在一个有序的数列中插人一个数。插人后，效列仍然维持有序。如果有相同的数，要插人在相同的数的后面。
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