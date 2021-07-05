#include<iostream>
#include<unordered_set>
using namespace std;

int Intersection(int arr[],int brr[],int n,int m){
    unordered_set<int> s(arr,arr+n);
    int res=0;
    for(int i=0;i<m;i++){
        if(s.find(brr[i])!=s.end()){
            res++;
            s.erase(brr[i]);
        }
    }
    return res;
}

int main(){
    int a[]={10,15,20,5,30};
    int b[]={30,5,30,80};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    cout<<Intersection(a,b,n,m);
    return 0;
}