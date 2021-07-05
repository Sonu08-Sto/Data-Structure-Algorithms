#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortmarks(int marks[],int n)
{
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++)
    p.push_back({marks[i],i});
    sort(p.begin(),p.end());
    for(int i=0;i<n;i++)
    cout<<p[i].first<<" "<<p[i].second<<endl;
}

int main()
{
    int marks[]={5,4,3,2,1};
    int N=5;
    sortmarks(marks,N);
    return 0;
}