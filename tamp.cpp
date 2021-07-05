#include<iostream>

using namespace std;

template<typename T>

T getmax(T x, T y)
{
    return (x>y)?x:y;
}

int main()
{
    int x=2;
    int y=1;
    cout<<getmax<int>(x,y);
}