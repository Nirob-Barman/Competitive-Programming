#include<sstream>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    char line[100];
    string S;   ///string from stl
    gets(line); ///input the line

    ///creates an istringstream from the input line

    int c=0;
    istringstream iS(line);
    while(iS>>S)
    {
        ///S is a word. Do whatever you want to do
        cout<<S<<endl;
        c++;
    }
    printf("Number of words : %d\n",c);
}
