#include<stdio.h>

int main()
{
    int a[10];
    ///initialization all the elements are zero
    int i,id;
    for(i=0;i<10;i++)
        a[i]=0;

    for(i=0;i<100;i++)
    {
        scanf("%d",&id);
        ///incrementing points
        a[id-1]++;
    }

    ///initializing max score
    int maximum_score=0;
    for(i=0;i<10;i++)
    {
        if(maximum_score<a[i])
            maximum_score=a[i];
    }
    printf("Winners are : \n");
    for(i=0;i<10;i++)
    {
        if(maximum_score==a[i])
        {
            ///print his id
            printf("%d\n",i+1);
        }
    }
}
