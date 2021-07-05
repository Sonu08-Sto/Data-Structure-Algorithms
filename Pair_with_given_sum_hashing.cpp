#include<iostream>
#include<unordered_set>

using namespace std;

bool FindPair(int arr[],int n,int sum){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])!=s.end())
        return true;
        else
        s.insert(arr[i]);
    }
    return false;
}

int main(){
    int arr[]={8,3,4,2,5};
    int n=5;
    int sum=6;
    cout<<FindPair(arr,n,sum);
    return 0;
}