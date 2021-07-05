#include<bits/stdc++.h>
using namespace std;

void findPostOrderUtil(int arr[],int n,int min,int max,int &preindex){
    if(preindex==n)return ;
    if (arr[preindex]<min || arr[preindex]> max)return;
    
    int val=arr[preindex];
    preindex++;
    findPostOrderUtil(arr,n,min,val,preindex);
    findPostOrderUtil(arr,n,val,max,preindex);

    cout<<val<<" ";
}

void findPostOrder(int pre[], int n)
{
    int preIndex = 0;
    findPostOrderUtil(pre, n, INT_MIN, INT_MAX, preIndex);
}
 
int main()
{
    int pre[] = { 40, 30, 35, 80, 100 };
    int n = sizeof(pre) / sizeof(pre[0]);
    findPostOrder(pre, n);
    return 0;
}