#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&x);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if((x+y)/2<35) printf("Fail\n");
        else if((y+z)/2<35) printf("Fail\n");
        else if((x+z)/2<35) printf("Fail\n");
        else printf("Pass\n");
    }
}