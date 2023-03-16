#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, loan = 0, bal = 0;
    scanf("%d", &n);
    int m[n - 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
        if (m[i] < 0)
            loan = loan + m[i];
        if(m[i]>=0)
            bal = bal + m[i];
    }
    printf("%d\n%d\n%d\n",bal+loan,bal,abs(loan));
    for (i = 0; i < n; i++)
    {
        if (m[i] < 0)
            printf("%d\t", m[i]);
    }
}