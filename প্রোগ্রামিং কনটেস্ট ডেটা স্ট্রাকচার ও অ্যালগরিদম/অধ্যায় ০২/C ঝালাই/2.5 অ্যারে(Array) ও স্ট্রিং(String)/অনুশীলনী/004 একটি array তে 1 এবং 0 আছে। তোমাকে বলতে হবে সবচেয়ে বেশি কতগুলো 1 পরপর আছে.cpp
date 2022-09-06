#include<stdio.h>
#include<string.h>

int main()
{
    char s[10];
    scanf("%s",&s);
    int l=strlen(s);

    int i=0,c=0,Max=0;
    while(i<l)
    {
        if(s[i]=='1');
        {
            c=0;
            while(s[i]=='1')
            {
                c++;
                i++;
            }
            if(c>Max)
                Max=c;
        }
        i++;
    }
    printf("%d\n",Max);
}
