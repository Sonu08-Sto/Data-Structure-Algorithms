#include<iostream>
using namespace std;

bool check(string a,int l,int t)
{
    if(l>=t){
        return  true;
    }
    return ((a[l]==a[t]) && check(a,l+1,t-1));
}

int main()
{
    string a;
    cout<<"Enter the strig = ";
    getline(cin,a);
    cout<<check(a,0,a.length()-1)?"true":"false";
    return 0;
}