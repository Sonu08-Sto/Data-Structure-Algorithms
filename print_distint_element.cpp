#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> us={4,8,5,8,7,5};
    for(int x : us)
    cout<< x <<" ";
    return 0;
}