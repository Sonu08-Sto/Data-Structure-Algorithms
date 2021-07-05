#include<iostream>
#include<unordered_map>
using namespace std;

unordered_map<int,string> m;

void Insert(int price ,string name)
{
    m.insert({price,name});
}

void print()
{
    for(auto x : m)
    cout<<x.first<<" "<<x.second<<endl;
}

int main()
{
    Insert(20,"abc");
    Insert(10,"asd");
    Insert(10,"zxc");
    Insert(10,"kjh");
    print();
}