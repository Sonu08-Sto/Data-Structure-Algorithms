#include<iostream>
#include<queue>
using namespace std;

void purchase(int arr[],int n,int sum)
{
    priority_queue<int,vector<int>,greater<int>> p(arr,arr+n);
    int res=0;
    while(sum >=0 && p.empty()== false && sum >= p.top())
    {
        sum=sum - p.top();
        res++;
        p.pop();
    }
    cout<<res;
}

int main()
{
    int arr[]={1,2,5,1,200};
    int sum=10;
    int n=5;
    purchase(arr,n,sum);
    return 0;
}