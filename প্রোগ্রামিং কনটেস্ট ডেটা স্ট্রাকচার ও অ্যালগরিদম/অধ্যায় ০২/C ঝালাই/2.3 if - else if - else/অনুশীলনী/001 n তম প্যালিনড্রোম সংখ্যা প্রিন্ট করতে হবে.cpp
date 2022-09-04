#include<stdio.h>

int main()
{
    int n,c=0,num=1,lastnum=0;
    scanf("%d",&n);

    while(c!=n)
    {
        int cur_num=num;
        int rev_num=0;

        ///reverse the number
        while(cur_num!=0)
        {
            int rem=cur_num%10;
            cur_num/=10;
            rev_num=rev_num*10+rem;
        }

        ///checking palindrome or not and storing last palindrome number
        if(num==rev_num)
        {
            c++;
            lastnum=num;
        }
        num+=1;     ///incrementing each number by 1
    }
    printf("%d\n",lastnum);
}
