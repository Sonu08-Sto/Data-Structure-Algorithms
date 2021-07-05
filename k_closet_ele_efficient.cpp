#include<bits/stdc++.h>
using namespace std;

void KClosest(int arr[],int n,int k,int x){
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<k;i++)
    pq.push({abs(arr[i]-x),i});

    for(int i=k;i<n;i++){
        int diff=abs(arr[i]-x);
        if(pq.top().first>=diff){
            pq.pop();
            pq.push({diff,i});
        }
    }
    while(!pq.empty()){
        cout<<arr[pq.top().second]<<" ";
        pq.pop();
    }
}

int main(){
    int arr[]={10,15,7,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=8;
    KClosest(arr,n,2,x);
    return 0;
}