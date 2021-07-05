#include<iostream>
#include<string>
using namespace std;

void FindPat(string s)
{
    int pos=s.find('.');
    if(pos == string::npos)
    cout<<"No decimal int the string ";
    else
    cout<<s.substr(pos+1);
}

int main()
{
    string str="1254.9876";
    FindPat(str);
    return 0;
}