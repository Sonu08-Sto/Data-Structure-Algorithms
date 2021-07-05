#include<iostream>
#include<set>
using namespace std;

set<int> s;

int upperbound(int x)
{
    auto it=s.upper_bound(x);
    if(it == s.end())
    cout<<"No element found and entered element is grater";
    else
    cout<<*it;
}

int lowerbound(int x)
{
    auto it=s.lower_bound(x);
    if(it == s.end())
    cout<<"No element found in the set";
    else
    cout<<*it;
}

int main()
{
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    upperbound(5);
    cout<<endl;
    lowerbound(38);
    return 0;
}