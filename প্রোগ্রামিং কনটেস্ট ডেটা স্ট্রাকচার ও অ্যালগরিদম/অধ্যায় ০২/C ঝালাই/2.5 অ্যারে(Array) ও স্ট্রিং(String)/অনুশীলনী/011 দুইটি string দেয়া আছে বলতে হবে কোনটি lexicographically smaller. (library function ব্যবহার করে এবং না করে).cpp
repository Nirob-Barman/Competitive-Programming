#include<stdio.h>
#include<string.h>

void LibF(char *a,char *b)
{
    int comparison=strcmp(a,b);

    if(comparison==0)
    {
        printf("Both strings are equal\n");
    }
    else if(comparison<0)
    {
        printf("First string = ``%s`` is lexicographically smaller than Second string =``%s``\n",a,b);
    }
    else
    {
        printf("First string = ``%s`` is lexicographically greater than Second string =``%s``\n",a,b);
    }
}

void WithoutLibF(char *a,char *b)
{
    int i=0;
    while(a[i]==b[i])
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Both strings are equal\n");
            break;
        }
        i++;
    }
    if(a[i]>b[i])
        printf("First string = ``%s`` is lexicographically greater than Second string =``%s``\n",a,b);
    else if(a[i]<b[i])
        printf("First string = ``%s`` is lexicographically smaller than Second string =``%s``\n",a,b);
}

int main()
{
    char s1[45],s2[45];
    scanf("%s %s",&s1,&s2);


    printf("Using library function ------------------- \n");
    LibF(s1,s2);
    printf("Without using library function ----------- \n");
    WithoutLibF(s1,s2);
}
