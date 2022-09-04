#include<stdio.h>

int main()
{
    int i;
    printf("Prints odd numbers from 1 to 10\n");
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
            continue;
        printf("%d\n",i);
    }
    printf("Prints only 1,2 and 3\n");
    for(i=1;i<=10;i++)
    {
        if(i>3)
            break;
        printf("%d\n",i);
    }
    printf("Takes input until the input is 0\n");
    printf("Sometime it is needed by OJs\n");
    printf("EOF=End of File\n");
    printf("Take input while it is not end of file\n");

    int a;
    printf("if the input is 0 break the loop\n");
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
            break;
        printf("%d\n",a);
    }

    printf("Or in short\n");

    while(scanf("%d",&a)!=EOF && a)
        printf("%d\n",a);
}
