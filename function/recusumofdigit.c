#include<stdio.h>
int sumofdigit(int n)
{
    if(n==0)
    return 0;
    else
    return n%10+sumofdigit(n/10);
}
int main()
{
  int n,sum=0;
  printf("enter the number: ");
  scanf("%d",&n);

  sum = sumofdigit(n);
  printf("the sum of digit:%d",sum);
  return 0;
}

