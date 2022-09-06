#include<stdio.h>
#include<string.h>

int main()
{
    char a[45],b[45];
    scanf("%s %s",a,b);

    int al=strlen(a);
    int bl=strlen(b);

    int j=0;
    for(int i=0;i<al;i++)
    {
        if(b[j]==a[i])
        {
            j++;
        }
    }

    if(j==bl)
        printf("%s is subsequence of %s\n",b,a);
    else
        printf("%s is not a subsequence of %s\n",b,a);
}
