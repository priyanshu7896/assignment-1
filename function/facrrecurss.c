#include<stdio.h>
int fact(int n)
{
  if(n==1)
  return 1;
  else
  return n*fact(n-1);
}

int main()
{
  int n,factorial=0;
  
  printf("enter the number: " );
  scanf("%d",&n);

  factorial= fact(n);
  printf("the factorail of number %d is %d",n,factorial);
  return 0;
}