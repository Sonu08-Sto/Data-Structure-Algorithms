#include<iostream>
#include<unordered_set>
using namespace std;

bool ZeroSum(int arr[],int n){
    unordered_set<int> s;
    int prefix_sum=0;
    for(int i=0;i<n;i++){
        prefix_sum += arr[i];
        if(prefix_sum==0)
        return true;
        if(s.find(prefix_sum)!=s.end())
        return true;
        s.insert(prefix_sum);
    }
    return false;
}

int main(){
    int arr[]={1,4,13,-1,-10,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ZeroSum(arr,n);
    return 0;
}