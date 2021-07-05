#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(10);
    for(int x: s)
    cout<<x<<" ";
    auto it=s.equal_range(20);
    cout<<*it.first<<" "<<*it.second<<" ";
}