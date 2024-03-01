#include<stdio.h>
int fibionacci(int n)
{
    if (n==0) 
    return 0;
    else if(n==1)
    return 1;
    else
    return fibionacci(n-1) + fibionacci(n-2);
}

int main()
 {   
    int n,fib;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("fibinacci series up to %d is : ", n);
    for (int i = 0; i <=n; i++)  
    {
    fib = fibionacci(i);
    
    printf("%d ",fib);
    }
    return 0;
 }


