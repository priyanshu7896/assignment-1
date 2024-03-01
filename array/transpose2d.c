#include<stdio.h>
int main()
{
    int a[2][5],i,j;
    printf("enter the element:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        { 
        scanf("%d",&a[i][j]);
        }
    }
     printf("the matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        { 
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of a matrix is :\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
        
    }
    return 0;
}