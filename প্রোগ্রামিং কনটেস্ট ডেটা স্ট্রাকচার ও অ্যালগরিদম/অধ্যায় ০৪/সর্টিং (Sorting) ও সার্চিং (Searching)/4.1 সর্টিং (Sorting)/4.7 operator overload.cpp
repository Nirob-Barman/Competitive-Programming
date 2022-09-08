#include<stdio.h>
#include<stdbool.h>
#include<algorithm>

using namespace std;

struct Point
{
    int x,y;
};

bool operator<(Point A,Point B)
{
    if(A.x!=B.x)
        return A.x<B.x;
    return A.y<B.y;
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
    sort(A,A+n);

    ///printing the Point array
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",A[i].x,A[i].y);
    }
}
