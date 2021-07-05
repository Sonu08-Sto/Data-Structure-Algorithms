#include<bits/stdc++.h>
using namespace std;

void KthSort(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<=k;i++)
    pq.push(arr[i]);

    int index=0;
    for(int i=k+1;i<n;i++){
        arr[index++]=pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        arr[index++]=pq.top();
        pq.pop();
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int arr[]={9,8,7,18,19,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    KthSort(arr,n,k);
    return 0;
}