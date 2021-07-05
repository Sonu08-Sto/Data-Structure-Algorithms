#include<iostream>
using namespace std;

int print(int n)
{
    if(n==1)
    return 1;
    else
    return n+(print(n-1));
}

int main()
{
    int n;
    cout<<"Enter the value of N = ";
    cin>>n;
    int m=print(n);
    cout<<"the Sum of digit is = "<<m;
    return 0;
}