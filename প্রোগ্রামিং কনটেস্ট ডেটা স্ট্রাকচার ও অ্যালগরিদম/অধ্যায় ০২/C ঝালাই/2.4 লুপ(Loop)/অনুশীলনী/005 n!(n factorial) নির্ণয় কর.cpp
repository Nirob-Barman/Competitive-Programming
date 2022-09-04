#include<stdio.h>

void Factorial(int n)
{
    if(n<=1 && n>=0)
        printf("1\n");
    else
    {
        int fact=1;
        for(int i=2;i<=n;i++)
        {
            fact*=i;
        }
        printf("%d\n",fact);
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    Factorial(n);
}
