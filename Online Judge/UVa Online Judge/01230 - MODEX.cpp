#include<iostream>

using namespace std;

int mod(int x,int y,int m)
{
    if(y==0)
        return 1;
    else if(y%2==0)
        return mod((x*x)%m,y/2,m);
    else
        return (x*mod((x*x)%m,(y-1)/2,m))%m;
}

int main()
{
    int t;
    while(scanf("%d",&t) && t)
    {
        while(t--)
        {
            int x,y,n;
            scanf("%d %d %d",&x,&y,&n);
            printf("%d\n",mod(x,y,n));
        }
    }
}
