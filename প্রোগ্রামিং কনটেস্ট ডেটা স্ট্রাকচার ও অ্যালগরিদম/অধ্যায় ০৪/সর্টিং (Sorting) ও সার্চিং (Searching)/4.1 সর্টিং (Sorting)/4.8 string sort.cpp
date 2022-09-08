#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main()
{
    int n;
    char s[100];

    vector<string>V;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        V.push_back(s);
    }
    sort(V.begin(),V.end());

    ///print the string array
    for(int i=0;i<V.size();i++)
    {
        cout<<V[i]<<endl;
    }
}
