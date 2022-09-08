#include<stdio.h>
#include<algorithm>

using namespace std;

void BubbleSort(int num[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                swap(num[j],num[j+1]);
            }
        }
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

    BubbleSort(a,n);
}
