#include<stdio.h>
int main()
{
    int A[3][2],B[2][3],M[3][3];
    int i,j,k,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            M[i][j]=0;
            for(k=0;k<2;k++)
            {
                M[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}