#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct hashh
{
    int backet;
    list<int> *table;
    hashh(int c)
    {
       backet=c;
       table=new list<int>[backet]; 
    }

    void inserrt(int key)
    {
        int i=key % backet;
        table[i].push_back(key);
    }

    void deletee(int key)
    {
        int i=key % backet;
        table[i].remove(key);
    }

    bool seearch(int key)
    {
        int i = key % backet;
        for (auto x : table[i])
           if (x == key)
              return true;
        return false;      
    }
};

int main()
{
    hashh h(6);
    h.inserrt(26);
    h.inserrt(45);
    h.inserrt(85);
    h.inserrt(98);
    h.inserrt(47);
    cout<<h.seearch(45)<<endl;
    h.deletee(47);
    cout<<h.seearch(47)<<endl;
    cout<<"program completed";
    return 0;
}