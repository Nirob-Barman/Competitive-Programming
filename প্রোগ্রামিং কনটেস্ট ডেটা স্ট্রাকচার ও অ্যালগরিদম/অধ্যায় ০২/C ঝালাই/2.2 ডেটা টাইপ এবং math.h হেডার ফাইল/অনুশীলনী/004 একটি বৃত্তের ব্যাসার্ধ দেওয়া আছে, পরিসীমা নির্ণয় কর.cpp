#include<stdio.h>
#include<math.h>

int main()
{
    double r,perimeter,pi=acos(-1.0);

    scanf("%lf",&r);

    perimeter = 4*pi*r;

    printf("%.4lf\n",perimeter);
}
