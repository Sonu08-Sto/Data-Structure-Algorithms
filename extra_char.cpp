#include<iostream>
#include<string>
using namespace std;

int FindExtra(string s1,string s2)
{
    int count[256]={0};
    for(int x : s2)
    count[x]++;
    for(int x : s1)
    count[x]--;
    for(int i=0;i<256;i++)
    {
    if(count[i]==1)
    cout<<(char)i;
    }
}

int main()
{
    string s1="abcd";
    string s2="abcdwqe";
    FindExtra(s1,s2);
    return 0;
}