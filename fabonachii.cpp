#include<iostream>
using namespace std;

int print(int n)
{
    if(n==2 || n==1)
    return 1;
    else
    return print(n-1)+print(n-2);
}

int main()
{
    int n;
    cout<<"Enter the value of N = ";
    cin>>n;
    int m=print(n);
    cout<<"the number of digit is = "<<m;
    return 0;
}