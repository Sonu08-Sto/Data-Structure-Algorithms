#include<iostream>
using namespace std;

int CheckBiit(int n,int k)
{
    if(n &(1<<(k-1)) != 0)
    return 1;
    else
    return 0;
}

int main()
{
    int n=5;
    int k=3;
    cout<<CheckBiit(n,k);
    return 0;
}