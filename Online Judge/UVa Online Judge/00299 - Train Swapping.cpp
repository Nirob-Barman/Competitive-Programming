#include<stdio.h>

int main()
{
    int t,k,i,j,n,count,swap;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        int a[n];
        count=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    count++;
                    swap=a[j];
                    a[j]=a[j+1];
                    a[j+1]=swap;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
}
