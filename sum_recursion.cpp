#include<iostream>
using namespace std;

int print(int n)
{
    if(n<10)
    return 1;
    else
    return n%10 + print(n/10);
}

int main()
{
    int n;
    cout<<"Enter the value of N = ";
    cin>>n;
    int m=print(n);
    cout<<"the Sun of numbers is = "<<m;
    return 0;
}