#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

bool Mycmp(pair<int,int> a,pair<int,int> b){
    if(a.second == b.second)
    return a.first<b.first;
    return  a.second > b.second;
}

void Choc(int arr[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    vector<pair<int,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),Mycmp);
    int i=0;
    for(auto x: v){
        for(int j=0;j<x.second;j++)
        arr[i++] = x.first;
    }
}

int main(){
    int arr[]={10,5,20,10,10,5,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    Choc(arr,n);
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}