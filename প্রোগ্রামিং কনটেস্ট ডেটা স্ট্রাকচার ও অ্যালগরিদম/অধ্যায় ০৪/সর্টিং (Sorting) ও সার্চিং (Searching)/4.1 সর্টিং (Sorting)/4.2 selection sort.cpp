#include<stdio.h>
#include<algorithm>

using namespace std;

void SelectionSort(int num[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                swap(num[i],num[j]);
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

    SelectionSort(a,n);
}
