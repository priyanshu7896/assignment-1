7
/*
Searching in Arrays:
Write a function to search for a given element in an array. Return the index if found, or -1 if not found.
Write a program to implement linear search in an array.
*/

#include<stdio.h>
void main()
{
    int arr[8]={2,4,6,7,8,5,3,6,};

    int n;
    printf("enter the number to be found \n");
    scanf("%d",&n);
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==n)
       {
        printf("element  %d is found at index %d",n,i);
        found=1;
        break;  
       }  
    }
        if(found==0)
        {
            printf("not found");
        }
    


}

