#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    vector<int> :: iterator i=v.begin();
    i=next(i);
    cout<<*i<<" ";
    i=next(i,3);
    cout<<*i<<" ";
    i=prev(i);
    cout<<*i<<" ";
    i=prev(i,3);
    cout<<*i<<" ";
}
