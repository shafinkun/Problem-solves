#include<stdio.h>
int fibonacci(int n)
{
    if(n<=1) return n;
    else
    {
        return fibonacci(n-1)+fibonacci(n-2); 
    }
}
int main()
{
    int num,i;
    printf("Enter the number of fibonacci series number you want: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}