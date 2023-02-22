#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Please input N: ");
    scanf("%d",&n);
    for(i=2*n-1;i>=1;i=i-2)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}