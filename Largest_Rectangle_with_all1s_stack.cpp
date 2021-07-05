#include<iostream>
#include<stack>
using namespace std;
const int R=4;
const int C=4;

int Hectogram(int arr[],int n){
    stack <int> s;
    int res=0;
    int tp;
    int curr;
    
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            tp=s.top();s.pop();
            curr=arr[tp]* (s.empty() ? i : i - s.top() - 1);
            res=max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false){
        tp=s.top();s.pop();
        curr=arr[tp]* (s.empty() ? n : n - s.top() - 1);
        res=max(res,curr);
    }
    
    return res;
}

int LargestRectangle(int arr[][C]){
    int res=Hectogram(arr[0],C);
    for(int i=1;i<R;i++){
        for(int j=0;j<C;j++)
            if(arr[i][j])
                arr[i][j] += arr[i-1][j];
            
            res=max(res,Hectogram(arr[i],C));
    }
    return res;
}

int main(){
    int arr[R][C]={{0,1,1,0},
                    {1,1,1,1},
                    {1,1,1,1},
                    {1,1,0,0}};
    
    cout<<LargestRectangle(arr);
}
