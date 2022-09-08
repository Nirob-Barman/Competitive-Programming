#include<stdio.h>

void InsertionSort(int num[],int n)
{
    for(int i=1;i<n;i++)
    {
        int Min=num[i];

        int j=i-1;
        while(j>=0 && num[j]>Min)
        {
            num[j+1]=num[j];
            j--;
        }

        num[j+1]=Min;
    }
    ///printing the array
    for(int i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    InsertionSort(a,n);
}
