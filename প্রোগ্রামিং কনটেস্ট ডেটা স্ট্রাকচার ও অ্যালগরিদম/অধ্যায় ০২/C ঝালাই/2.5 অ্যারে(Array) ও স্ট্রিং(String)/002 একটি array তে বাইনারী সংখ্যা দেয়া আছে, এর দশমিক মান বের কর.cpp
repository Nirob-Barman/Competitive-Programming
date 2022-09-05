#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char s[32];
    scanf("%s",s);

    int len=strlen(s);
    int decNum=0;
    for(int i=len-1,power=0;i>=0;i--,power++)
    {
        decNum=decNum+(s[i]-'0')*pow(2,power);
    }
    printf("%d\n",decNum);
}
