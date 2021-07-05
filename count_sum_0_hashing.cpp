#include<iostream>
#include<unordered_map>
using namespace std;

int Length(int arr[],int n){
    unordered_map<int,int> m;
    int presum=0;
    int count=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(presum==0)
        count++;
        if(m.find(presum)!=m.end())
        count += m[presum];

        m[presum]++;
    }
    return count;
}

int main(){
    int arr[]={0,0,5,5,0,0};
    int n=6;
    cout<<Length(arr,n);
    return 0;
}