#include<stdio.h>
#include<string.h>

void LibraryF(char *s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    printf("%d\n",i);
}
void WithoutLibraryF(char *s)
{
    printf("%d\n",strlen(s));
}

int main()
{
    char s[10];
    scanf("%s",s);

    LibraryF(s);
    WithoutLibraryF(s);
}
