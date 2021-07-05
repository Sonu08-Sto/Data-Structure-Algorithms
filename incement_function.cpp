#include<iostream>

using namespace std;

void increment(int &a)
{
    a=a+10;
}

int main()
{
    int n;
    cout<<"Enter the no you want to increment by 10 = ";
    cin>>n;
    increment(n);
    cout<<"The incremented value is = "<<n;
    return 0;
}