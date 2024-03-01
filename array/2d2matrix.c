#include<stdio.h>
int main()
{
    int a1[2][3],a2[2][3],a3[2][3],i,j;
    printf("enter the element a1 :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        { 
        scanf("%d",&a1[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
     {
     printf("%d\t",a1[i][j]);
       
    }
    printf("\n");
    }

    printf("enter the element a2 :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        { 
        scanf("%d",&a2[i][j]);
        }
    }
    printf("the matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
     {
     printf("%d\t",a2[i][j]);
       
    }
    printf("\n");
    }
    printf("the sum of  matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
     {
        a3[i][j]= a1[i][j]+a2[i][j];
        printf("%d\t",a3[i][j]);
    }
    printf("\n");
    }

    return 0;
}
    