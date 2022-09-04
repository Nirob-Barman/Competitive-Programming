#include<stdio.h>

int main()
{
    int x=100;
    int cnt=0;

    while(x%2==0)
    {
        x=x/2;
        cnt++;
    }
    printf("%d\n\n\n\n",cnt);
    ///finds out the highest number which is power of 2 and less than 1000
    x=1;
    printf("%d\n",x);
    while(x*2<1000)
    {
        x*=2;
        printf("%d\n",x);
    }
    printf("\n\n\n");
    /**
    same thing using for loop
    **/
    for(x=1;x*2<1000;x*=2)
        printf("%d\n",x);
}
