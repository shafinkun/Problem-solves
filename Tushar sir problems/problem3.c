//Palindrome Number
#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("Enter your three digit number: ");
    scanf("%d",&num);
    if(num>99 && num<1000)
    {
    temp=num;
    while(temp>0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10; 
    }
    if(num==sum) printf("The number is a palindrome number");
    else printf("The number is not a palindrome number");
    }
    else printf("Wrong input.\n");
}