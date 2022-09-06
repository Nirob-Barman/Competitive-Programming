#include<stdio.h>

void DecimaltoBinary(int n)
{
    int binNum[32];
    int i=0;
    while(n!=0)
    {
        binNum[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",binNum[j]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    DecimaltoBinary(n);
}
