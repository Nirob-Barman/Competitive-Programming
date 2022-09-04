#include<stdio.h>

int main()
{
    printf("very important. many of you forget to initialize variable\n");

    int i,j,n=10,sum=0;
    ///i is the upper bound
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            sum+=j;
    }
    printf("%d\n",sum);
}
