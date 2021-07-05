#include<iostream>
#include<unordered_set>
using namespace std;

int Distint(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    return s.size();
}

int main(){
    int arr[]={15,12,13,12,13,13,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Distint(arr,n);
    return 0;
}