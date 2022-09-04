#include<stdio.h>

int LargeBetTwo(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int LargeAmongThree(int a,int b,int c)
{
    if(a>b && b>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",LargeBetTwo(a,b));

    int d,e,f;
    scanf("%d %d %d",&d,&e,&f);
    printf("%d\n",LargeAmongThree(d,e,f));
}
