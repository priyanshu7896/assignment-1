#include<stdio.h>
void revercefun(int[]);
int n;
void main()
{
  int i,sum=0;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements of an array: ");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  revercefun(a);

  for(i=0;i<n;i++)
  printf("the original array is : %d ",&a[i]);
}

  void revercefun(int x[])
  {
    int i,t;
    for(i=0;i<n/2;i++)
    {
      t=x[i];
      x[i]=x[n-i-1];
      x[n-i-1]=t;
    }
      for(i=0;i<n;i++)
      printf("the reverse ARRAY is: %d ",x[i]);
  }