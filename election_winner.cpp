#include<iostream>
#include<unordered_map>
using namespace std;

string FindWinner(string arr[],int n)
{
    unordered_map<string,int> m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    string winner;
    int s=0;
    for(auto x : m)
    {
        if(x.second > s)
        {
        s=x.second;
        winner=x.first;
        }
    }
    return winner;
}

int main()
{
    string arr[]={"sad","abx","aas","asa","sad"};
    int s=sizeof arr/ sizeof arr[0];
    cout<<FindWinner(arr,s);
    return 0;
}