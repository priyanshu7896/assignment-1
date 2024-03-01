#include<stdio.h>
void main()
{
    
     int arr[5],i;
     int even=0,odd=0;

    printf("enter the element: \n");
    for(i=0;i<5;i++);
        scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("the odd element is %d\n",odd);
    printf("the even element is %d\n",even);

}