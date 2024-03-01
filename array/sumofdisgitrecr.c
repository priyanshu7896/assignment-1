#include<stdio.h>
int sumofdigit(int n)
{
  if(n==0)
  return 0;
  else
  return n % 10 + sumofdigit(n/10);
}
int main()
{
  int n,i,sum=0;
  printf("enter the number: ");
  scanf("%d",&n);
  sum = sumofdigit(n);
  printf("the sum of digist is : %d",sum);
  return 0;
}