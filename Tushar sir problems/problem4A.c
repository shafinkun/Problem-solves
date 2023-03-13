#include<stdio.h>
int main()
{
    char s[100];
    int i,j,len=0,flag=0;
    printf("Enter your string: ");
    gets(s);
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0,j=len-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag++;
            break;
        }
    }
    if(flag=0) printf("The string is palindrome.\n");
    else printf("The string is not palindrome.\n");
}