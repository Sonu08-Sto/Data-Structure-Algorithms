#include<bits/stdc++.h>
using namespace std;

void Median(int arr[],int n){
    priority_queue<int> s;
    priority_queue<int,vector<int>,greater<int>> g;
    s.push(arr[0]);
    cout<<s.top()<<" ";
    for(int i=1;i<n;i++){
        int x=arr[i];
        if(s.size()>g.size()){
            if(s.top()<x)
            g.push(x);
            else{
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            cout<<(s.top()+g.top())/2.0<<" ";
        }
        else{
            if(s.top()>=x)
            s.push(x);
            else{
                    g.push(x);
                    s.push(g.top());
                    g.pop();
            }
            cout<<s.top()<<" ";
        }
    }
}


int main(){
    int arr[]={25,7,10,15,20};
    Median(arr,5);
    return 0;
}