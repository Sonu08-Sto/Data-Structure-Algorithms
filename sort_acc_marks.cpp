#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Mycmp(pair<int,int> p1, pair<int,int> p2)
{
    return p1.second < p2.second;
}

void sortmarks(int roll[],int marks[],int n)
{
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++)
    p.push_back({roll[i],marks[i]});
    sort(p.begin(),p.end(),Mycmp);
    for(int i=0;i<n;i++)
    cout<<p[i].first<<" "<<p[i].second<<endl;
}

int main()
{
    int marks[]={20,40,50,60};
    int roll[]={2,5,7,8};
    int N=4;
    sortmarks(marks,roll,N);
    return 0;
}