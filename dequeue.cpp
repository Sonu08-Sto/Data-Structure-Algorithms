#include<iostream>
#include<deque>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.pop_front();
    for(int x : d)
    cout<< x<< " ";
}