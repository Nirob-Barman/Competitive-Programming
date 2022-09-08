#include<stdio.h>

int used[20],number[20];

void Permutation(int At,int n)
{
    if(At==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",number[i]);
        }
        printf("\n");
        return ;
    }

    for(int i=1;i<=n;i++)
    {
        if(!used[i])
        {
            used[i]=1;
            number[At]=i;
            Permutation(At+1,n);
            used[i]=0;
        }
    }
}

int main()
{

    int n;
    scanf("%d",&n);

    printf("Permutation of 1 to n\n");
    Permutation(1,n);
}
