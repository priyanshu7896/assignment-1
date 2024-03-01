#include<stdio.h>
int largeofarray(int[],int);

int main()
{
  int n,i,l;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of an array:\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  l= largeofarray(a,n);
  printf("the largest number is:%d",l);
  return 0;
}

  int largeofarray(int a[],int n)
  {
    int l=a[0];
    for(int i=1;i<n;i++)
    {
    if(a[i]>l)
    l=a[i];
    }
    return l;
  }