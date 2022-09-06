#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int num[n+1];
    num[0]=0;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&num[i]);
        num[i]=num[i]+num[i-1]; ///consecutive sum
    }

    int noofQ;
    scanf("%d",&noofQ); ///no of question
    while(noofQ--)
    {
        int l,r;    ///taking index value from l to r
        scanf("%d %d",&l,&r);
        printf("%d\n",num[r+1]-num[l+1-1]);
    }
}
