#include<iostream>
#include<string>
using namespace std;

void FindPat(string s,string str)
{
    int pos=s.find(str);
    while(pos != string :: npos)
    {
        cout<<pos<<" ";
        pos=s.find(str,pos+1);
    }
}

int main()
{
    string str="Geeks For Geeks";
    string str1="For";
    FindPat(str,str1);
    return 0;
}