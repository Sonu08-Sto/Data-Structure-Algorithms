#include<iostream>
#include<unordered_map>

using namespace std;

void Distint(int arr[],int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<k;i++)
    m[arr[i]]++;
    cout<<m.size()<<" ";
    for(int i=k;i<n;i++)
    {
        m[arr[i-k]]--;
        if(m[arr[i-k]]==0)
        m.erase(arr[i-k]);

        m[arr[i]]++;
        cout<<m.size()<<" ";
    }
}

int main(){
    int arr[]={10,20,20,10,30,40,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    Distint(arr,n,4);
    return 0;
}