#include<iostream>
#include<map>
using namespace std;

multimap<int,string> m;

void Insert(int price,string name)
{
    m.insert({price,name});
}

void print()
{
    for(auto x: m)
    cout<<x.first<<" "<<x.second<<endl;
}

void Find(int price)
{
    auto it=m.equal_range(price);
    for(auto i=it.first ; i != it.second ; i++)
    cout<<i->first<<" "<<i->second<<endl;
}

void printGreater(int price)
{
    auto it=m.upper_bound(price);
    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
}

void printSmaller(int price)
{
    auto it=m.lower_bound(price);
    if(it==m.begin())
    {
       cout<<"fuckoff";
    }
    else
    {
    for(auto it1=m.begin(); it1 != it ;it1++)
    cout<<it1->first<<" "<<it1->second<<endl;
    }
}

int main()
{
    Insert(10,"abc");
    Insert(20,"cde");
    Insert(10,"efg");
    Insert(30,"ijk");
    Insert(40,"lmn");
    printSmaller(10);
}