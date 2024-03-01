#include<stdio.h>
int main()
{
    int a[2][3],i,j,sumr,sumc;
    printf("enter the element:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        { 
        scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        { 
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of rows  matrix is:\n");
    for(i=0;i<2;i++)
    {
        sumr=0;
        for(j=0;j<3;j++)
    {
     
       sumr=sumr+a[i][j];
      
    }
    printf("the sumr=%d\n",sumr);
    }
    printf("the sum of rcolumn  matrix is:\n");
    for(i=0;i<3;i++)
    {
        sumc = 0;
        for(j=0;j<2;j++)
    {
     
       sumc=sumc+a[j][i];
      
    }
    printf("the sumr=%d\n",sumc);
    }

    return 0;
}



    

