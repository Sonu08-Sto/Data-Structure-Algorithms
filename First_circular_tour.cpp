#include<iostream>
using namespace std;

int FirstPump(int pt[],int dis[],int n){
    int start=0,prev=0;
    int curr=0;
    for(int i=0;i<n;i++){
        curr+=pt[i]-dis[i];
        if(curr<=0){
            start=i+1;
            prev=curr;
            curr=0;
        }
    }
    return (curr+prev<=0)?-1:start+1;
}

int main(){
    int petrol[]={4,8,7,4};
    int dis[]={6,5,3,5};
    int n=4;
    cout<<FirstPump(petrol,dis,n);
    return 0;
}