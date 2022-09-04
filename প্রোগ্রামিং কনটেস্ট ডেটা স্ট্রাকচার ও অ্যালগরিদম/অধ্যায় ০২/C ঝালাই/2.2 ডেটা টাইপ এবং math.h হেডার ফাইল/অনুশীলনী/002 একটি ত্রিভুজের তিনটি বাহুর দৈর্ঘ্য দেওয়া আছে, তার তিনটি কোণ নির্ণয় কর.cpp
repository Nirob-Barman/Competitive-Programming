#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    double A,B,C,pi=acos(-1);

    A=(pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
    A=acos(A);

    B=(pow(c,2)+pow(a,2)-pow(b,2))/(2*c*a);
    B=acos(B);

    C=(pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b);
    C=acos(C);

    printf("%8.4lf %8.4lf %8.4lf\n",A*180/pi,B*180/pi,C*180/pi);
}
