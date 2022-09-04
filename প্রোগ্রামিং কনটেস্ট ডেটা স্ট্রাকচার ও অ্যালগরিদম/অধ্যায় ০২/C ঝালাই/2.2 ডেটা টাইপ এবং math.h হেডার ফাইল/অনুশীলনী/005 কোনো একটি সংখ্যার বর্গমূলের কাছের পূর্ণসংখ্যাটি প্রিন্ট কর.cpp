#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);

    double N=sqrt(n);

    printf("Square Value : %lf\n",N);

    printf("Nearest Integer Value : %f\n",round(N));
}
