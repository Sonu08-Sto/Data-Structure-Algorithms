#include<iostream>
#include<set>
using namespace std;

set<int> s;

void insert(int x)
{
    s.insert(x);
}

void print()
{
    for(int x : s)
    cout<<x<<" ";
    cout<<endl;
}

void Delete(int x)
{
    s.erase(x);
}

int getceling(int x)
{
    auto it=s.lower_bound(x);
    if(it == s.end())
    cout<<"Not present";
    else
    cout<<*it<<endl;
}

int getflorr(int x)
{
    auto it=s.lower_bound(x);
    if(it == s.begin())
    {
        if(*it == x)
        cout<<*it<<" ";
        else
        cout<<"Not present";
    }
    else
    {
        it--;
        cout<<*it;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    Delete(50);
    print();
    getceling(15);
    getflorr(100);
}