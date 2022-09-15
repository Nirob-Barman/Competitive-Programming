#include<stdio.h>
#include<ctype.h>

int main()
{
    int count;
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        count=0;
        while(1)
        {
            if(c=='\n')
                break;
            else if(isalpha(c))
            {
                while(isalpha(c))
                    scanf("%c",&c);
                count++;
            }
            else
                scanf("%c",&c);
        }
        printf("%d\n",count);
    }
}
