#include<iostream>
using namespace std;

int print(int a,int b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else
    return print(b,a%b);
}

int main()
{
    int n,m;
    cout<<"Enter the value of N and m = ";
    cin>>n>>m;
    int a=print(n,m);
    cout<<a;
    return 0;
}