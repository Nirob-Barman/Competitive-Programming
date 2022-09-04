#include<stdio.h>

int main()
{
    int n,sum;
    scanf("%d",&n);

    if(n%2==0)
        sum=-(n/2);
    else
        sum=(n/2)+1;
    printf("%d\n",sum);
}
