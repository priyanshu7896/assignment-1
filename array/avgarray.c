/*
Array Operations:
Write a C program to find the average of elements in an array.
*/

#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,4,5};
    int sum=0,avg;
    for(int i =0;i<5;i++)
    {
        sum= sum + arr[i];
        avg = sum/arr[i];
    }
    printf("the avg of an array is :  %d\n",avg);
}


