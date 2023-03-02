#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,diff;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    diff=((h2*60)+m2)-((h1*60)+m1);
    printf("%d\n",diff);
    if(diff<=0) diff+=24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",diff/60,diff%60);
    return 0;
}