#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&x);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if((x+y)/2>=35 && (y+z)/2>=35 && (z+x)/2>=35) printf("Pass\n");
        else printf("Fail\n");
    }
}