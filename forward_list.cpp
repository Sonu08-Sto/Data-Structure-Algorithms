#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
    forward_list<int> f={54,84,75};
    forward_list<int> f1={1,2,3,4,5,6};
    auto i=f.insert_after(f.begin(),10);
    i=f.insert_after(i,10);
    i=f.insert_after(i,30);
    i=f.erase_after(i);
    i=f.insert_after(i,10);
    f.push_front(100);
    f.pop_front();
    f.merge(f1);
    f.reverse();
    f.sort();
    f.remove(10);
    for(int x : f)
    cout<< x<<" ";
    
}