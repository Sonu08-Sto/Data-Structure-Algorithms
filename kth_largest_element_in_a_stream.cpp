#include<bits/stdc++.h>
using namespace std;

vector<int> Stream(int arr[],int n,int k){
    vector<int> res;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        if(pq.size()<k)
        pq.push(arr[i]);
        else{
            if(arr[i]>pq.top()){
                pq.push(arr[i]);
                pq.pop();
            }
        }
        if(pq.size()<k)
        res.push_back(-1);
        else
        res.push_back(pq.top());
    }
    return res;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int k=4;
    vector<int> v=Stream(arr,n,k);
    for(auto x: v)
    cout<<x<<" ";
    return 0;
}