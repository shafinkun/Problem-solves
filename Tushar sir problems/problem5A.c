//Prime numbers up to N
#include<stdio.h>
int main()
{
    int n,flag,i,j;
    printf("Enter N: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {    
                flag=1;
                break;
            }
        }
        if(flag==0) 
            printf("%d ",i);
    }
    
}