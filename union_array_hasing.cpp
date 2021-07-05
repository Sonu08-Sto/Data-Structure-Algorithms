#include<iostream>
#include<unordered_set>

using namespace std;

int Union(int arr[],int brr[],int n,int m){
    unordered_set<int> s(arr,arr+n);
    int res=0;
    for(int i=0;i<m;i++){
        if(s.find(brr[i])==s.end()){
            s.insert(brr[i]);
        }
    }
    return s.size();
}

int main(){
    int arr[]={1,2,3,4,5};
    int brr[]={1,3,5,6,8,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(brr)/sizeof(brr[0]);
    cout<<Union(arr,brr,n,m);
    return 0;
}