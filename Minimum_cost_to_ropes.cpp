#include<bits/stdc++.h>
using namespace std;

int Result(int arr[],int n){
    int res=0;
    priority_queue<int,vector<int>,greater<int>> v(arr,arr+n);

    while(v.size()>1){
        int first=v.top();
        v.pop();
        int second=v.top();
        v.pop();
        res+=first+second;

        v.push(first+second);
    }
    return res;
}

int main(){
    int arr[]={4,3,2,6};
    cout<<Result(arr,4);
    return 0;
}