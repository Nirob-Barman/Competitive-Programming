#include<stdio.h>
#include<math.h>

int main()
{
    double ax,ay,bx,by,cx,cy,a,b,c,sp,area;
    scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);

    a=sqrt(pow((ax-bx),2) + pow((ay-by),2));
    b=sqrt(pow((bx-cx),2) + pow((by-cy),2));
    c=sqrt(pow((ax-cx),2) + pow((ay-cy),2));

    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));

    printf("%0.2lf",area);
}

