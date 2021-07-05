#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    vector<int> :: iterator i=v.begin();
    cout<<*i<<" ";
    i++;
    cout<<*i<<" ";
    i=v.end();
    i--;
    cout<<*i;
    advance(i,4);
    cout<<*i;
}