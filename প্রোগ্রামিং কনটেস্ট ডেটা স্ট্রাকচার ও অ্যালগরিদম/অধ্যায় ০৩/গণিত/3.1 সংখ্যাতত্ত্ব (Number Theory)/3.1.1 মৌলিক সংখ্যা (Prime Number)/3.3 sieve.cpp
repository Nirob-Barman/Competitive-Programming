#include<stdio.h>
#include<math.h>
//I prefer both vector and bitset
int Prime[300000],nPrime;
///1 if not prime, 0 if prime
int mark[1000002];

void Sieve(int n)
{
    int i,j,limit=sqrt(n*1.)+2;
    mark[1]=1;

    for(i=4;i<=n;i+=2)
        mark[i]=1;
    Prime[nPrime++]=2;

    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            ///i is prime
            Prime[nPrime++]=i;

            ///if we dont't do it following i*i may overflow
            if(i<=limit)
            {
                ///loop through all odd multiples of i greater than i*i
                for(j=i*i;j<=n;j+=i*2)
                {
                    ///mark j not prime
                    mark[j]=1;
                }
            }
        }
    }
    for(i=0;i<nPrime;i++)
        printf("%d\n",Prime[i]);
}

int main()
{
    int n;
    scanf("%d",&n);
    Sieve(n);
}
