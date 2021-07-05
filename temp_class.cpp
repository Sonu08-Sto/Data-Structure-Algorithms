#include<iostream>

using namespace std;

template<typename T>

struct pairr
{
    T x,y;
    pairr(T i,T j)
    {
        x=i;
        y=j;
    }
    T getx(){ return x; }
    T gety(){ return y; }
};

int main()
{
    pairr<int> p(10,15);
    cout<<p.getx();
    cout<<" "<<p.gety();

}