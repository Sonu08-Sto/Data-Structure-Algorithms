#include<iostream>
using namespace std;

int MergeSOrt(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-low;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++){ left[i]=arr[i+low]; }
    for(int i=0;i<n2;i++){ right[i]=arr[mid+1+i]; }
    int i=0,j=0,res=0,k=low;

    while(i<n1 && j<n2)
    {
        if(left[i] <= right[j])
        arr[k++]=left[i++];
        else
        {
         arr[k++]=right[j++];
         res=res+(n1-i);
        }
    }
    return res;
}

int Inverse(int arr[],int low,int high)
{
    int res=0;
    if(low<high)
    {
        int mid=(low+high)/2;
        res += Inverse(arr,low,mid);
        res += Inverse(arr,mid+1,high);
        res += MergeSOrt(arr,low,mid,high);
    }
    return res;
}

int main()
{
    int arr[]={2,4,1,3,5,10};
    int n=7;
    cout<<Inverse(arr,0,n-1);
    return 0;
}