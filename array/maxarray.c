/*
Array Operations:
Write a C program to find the maximum element in an array.
*/

#include<stdio.h>
void main()
{
    int arr[5]={10,204,36,45,54};
    // Find the number of elements in the array
    int num= sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    {
        for (int i =1; i < num; i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }  
        printf("the largest of an array is :  %d\n",max);
    }
}


