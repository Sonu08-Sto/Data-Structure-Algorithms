#include<iostream>
#include<map>
using namespace std;

map<int,string> m;

void insert(int price,string name)
{
    m.insert({price,name});
}

void Find(int price)
{
    auto it=m.find(price);
    if(it== m.end())
    cout<<"Not Found";
    else
    cout<<it->second;
}

void print()
{
    for(auto x : m)
    cout<<x.first<<" "<<x.second<<endl;
}

void printGreater(int price)
{
    auto it=m.upper_bound(price);
    while(it != m.end())
    {
    cout<<it->first<<" "<<it->second<<" "<<endl;
    it++;
    }
}

void printSmaller(int price)
{
    auto it=m.lower_bound(price);
    for(auto it1=m.begin();it1 != it ; it1++)
    cout<<it1->first<<" "<<it1->second<<" "<<endl;
}

int main()
{
    insert(10,"abc");
    insert(20,"efg");
    insert(30,"ijk");
    insert(40,"mln");
    insert(50,"pqr");
    printGreater(30);
    printSmaller(30);
    return 0;
}