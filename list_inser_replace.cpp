#include<iostream>
#include<list>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

list<int> l;

void insertt(int x)
{
    l.push_back(x);
}

void replacee(int x, vector<int> & s)
{
    auto it=find(l.begin(),l.end(),x);
    if(it==l.end())
    return;

    it=l.erase(it);
    l.insert(it,s.begin(),s.end());
}

void print()
{
    for(int x : l)
    cout<<x<<" ";
}



int main()
{
   insertt(10);
   insertt(20);
   insertt(30);
   insertt(40);
   insertt(50);
   vector<int> p={1,2,3};
   replacee(30,p);
   print();
}