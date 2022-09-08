#include<stdio.h>
#include<stdbool.h>
#include<algorithm>

using namespace std;

struct Point
{
    int x,y;
};

bool cmp(Point A, Point B)
{
    if(A.x<B.x)
        return 1;
    if(A.x>B.x)
        return 0;

    if(A.y<B.y)
        return 1;
    if(A.y>B.y)
        return 0;

    ///return 0;        ///without return 0, control reaches end of non-void function
}

int main()
{
    int n;
    scanf("%d",&n);

    int x,y;
    Point A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        A[i].x=x;
        A[i].y=y;
    }
    sort(A,A+n,cmp);

    ///printing the Point array
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",A[i].x,A[i].y);
    }
}
