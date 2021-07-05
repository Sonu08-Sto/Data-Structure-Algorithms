#include<iostream>
#include<unordered_set>
using namespace std;

int Longest(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    int res=1;
    for(auto x : s){
        if(s.find(x-1)==s.end()){
            int curr=1;
            while(s.find(x+curr)!=s.end()){
                curr++;
                res=max(res,curr);
            }
        }
    }
    return res;
}

int main(){
    int arr[]={1,9,3,4,2,20};              // x,x+1,x+2,.....x+n = this is consecutive sub array (ex 1,2,3,4)
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Longest(arr,n);
    return 0;
}