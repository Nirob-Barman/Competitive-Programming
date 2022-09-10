#include<stdio.h>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    vector<double>Output;

    double n;
    while(scanf("%lf",&n)!=EOF)
    {
        Output.push_back(n);
    }
    for(int i=Output.size()-1;i>=0;i--)
    {
        printf("%0.4lf\n",sqrt(Output[i]));
    }
    
    return 0;
}
