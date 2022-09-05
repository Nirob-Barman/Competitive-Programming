#include<stdio.h>

void Ascendingorder(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Ascending Order : \n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void Descendingorder(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Descending Order : \n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    Ascendingorder(a,n);
    Descendingorder(a,n);
}
