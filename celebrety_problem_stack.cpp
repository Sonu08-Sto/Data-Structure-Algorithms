#include<iostream>
#include<stack>
using namespace std;
const int R=4;
const int C=4;

int arr[R][C]={{0,0,1,0},{0,0,1,0},{0,0,0,0},{0,0,1,0}};

bool Knows(int a,int b){
    return arr[a][b];
}

int findcele(int n){
    stack<int> s;
    for(int i=0;i<n;i++)
    s.push(i);

    int count=0;
    while(count<n-1){
        int first=s.top();
        s.pop();
        int second=s.top();
        s.pop();
        if(Knows(first,second))
        s.push(second);
        else
        s.push(first);
        count++;
    }
    cout<<s.top();
}

int main(){
    findcele(4);
    return 0;
}