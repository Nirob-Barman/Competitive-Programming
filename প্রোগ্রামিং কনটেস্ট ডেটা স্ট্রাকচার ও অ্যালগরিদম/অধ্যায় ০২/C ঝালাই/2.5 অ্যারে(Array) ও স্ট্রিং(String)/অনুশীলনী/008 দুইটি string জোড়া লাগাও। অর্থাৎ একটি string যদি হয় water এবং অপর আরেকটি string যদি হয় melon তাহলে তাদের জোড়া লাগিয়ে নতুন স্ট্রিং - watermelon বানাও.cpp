#include<stdio.h>
#include<string.h>

int main()
{
    char s1[90],s2[45];
    scanf("%s %s",s1,s2);

    strcat(s1,s2);

    printf("%s\n",s1);
}
