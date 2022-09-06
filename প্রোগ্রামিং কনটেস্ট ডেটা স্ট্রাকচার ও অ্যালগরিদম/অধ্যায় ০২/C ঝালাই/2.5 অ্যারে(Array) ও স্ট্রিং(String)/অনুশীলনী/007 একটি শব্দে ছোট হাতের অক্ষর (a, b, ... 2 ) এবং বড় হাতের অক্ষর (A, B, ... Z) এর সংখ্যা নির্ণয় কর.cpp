#include<stdio.h>

int main()
{
    char s[45];
    ///longest letter in English alphabet Pneumonoultramicroscopicsilicovolcanoconiosis (forty-five letters)
    scanf("%s",s);
    int uc=0,lc=0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            uc++;
        else if(s[i]>='a' && s[i]<='z')
            lc++;
    }
    printf("%d %d\n",uc,lc);
}
