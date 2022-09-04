#include<stdio.h>

/**

///for(initialization; condition; increment/decrement)
{

}

while(condition is true)
{

}
**/

int main()
{
    ///Examples
    ///Prints from 1 to 10
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
    printf("\n\n\n\n");
    ///Prints from 10 to 1
    for(i=10;i>=1;i--)
    {
        printf("%d\n",i);
    }
    printf("\n\n\n\n");
    ///prints odd number from 1 to 10
    for(i=1;i<=10;i+=2)
        printf("%d\n",i);
    printf("\n\n\n\n");
    ///prints even number from 1 to 10
    for(i=2;i<=10;i+=2)
        printf("%d\n",i);

    printf("\n\n\n\n");
    ///prints 10,12,14
    i=5;
    while(i<=7)
    {
        printf("%d\n",i*2);
        i++;
    }
}
