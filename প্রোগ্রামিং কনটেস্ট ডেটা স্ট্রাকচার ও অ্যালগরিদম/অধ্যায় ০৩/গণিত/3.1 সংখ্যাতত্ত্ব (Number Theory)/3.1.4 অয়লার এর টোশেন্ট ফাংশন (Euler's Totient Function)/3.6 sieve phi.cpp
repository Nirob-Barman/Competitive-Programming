#include<stdio.h>

int phi[1000006],mark[1000006];

void sievephi(int n)
{
    int i,j;

    ///initiazlization
    for(i=1;i<=n;i++)
        phi[i]=i;

    phi[1]=1;
    mark[1]=1;

    for(i=2;i<=n;i++)
    {
        if(!mark[i])    ///if i is prime
        {
            for(j=i;j<=n;j+=i)
            {
                mark[j]=1;
                ///phi[j] will be divisible by i
                ///so no need to worry
                phi[j]=phi[j]/i*(i-1);
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        printf("phi of %d is %d\n",i,phi[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    sievephi(n);
}
