#include<stdio.h>

int Fibonacci(int n)
{
    if(n<=1)
        return n;
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("Nth Fibonacci = %d\n",Fibonacci(n));
}
