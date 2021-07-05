#include<iostream>
using namespace std;

int getcount(int arr[],int N)
{
    int low=0;
    int high=N-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==1 && arr[mid+1]==1 && mid +1 <N)
        {
            low =mid+1;
        }
        else if(arr[mid]==0)
        {
            high =mid-1;
        } 
        else if(arr[mid]==1 && ((mid+1 <N && arr[mid+1==0])) || mid==N-1 )
        {
            return mid+1;
        }
    }
}

int main()
{
    int arr[]={1,1,1,1,1,1,0,0,0};
    int N=10;
    cout<<getcount(arr,N);
    return 0;
}