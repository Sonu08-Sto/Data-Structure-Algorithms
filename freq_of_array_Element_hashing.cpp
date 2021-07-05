#include<iostream>
#include<unordered_map>

using namespace std;

void Freq(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    for(auto x: m)
    cout<<x.first<<" "<<x.second<<endl;
}

int main(){
    int arr[]={10,12,10,15,10,20,12,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    Freq(arr,n);
    return 0;
}