#include<iostream>
using namespace std;

void print(int hashtable[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<hashtable[i]<<" ";
    }
}

void hasht(int hashtable[],int l,int arr[],int N)
{
    for(int i=0;i<N;i++)
    {
        int index1=arr[i]% l;

        if(hashtable[index1]== -1)
        {
            hashtable[index1]=arr[i];
        }
        else
        for(int j=0;j<l;j++)
        {
            int t=(index1+ j*j)%l;
            if(hashtable[j]== -1)
            {
                hashtable[t]=arr[i];
                break;
            }
        }
    }
    print(hashtable,N);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int N=5;
    int l=5;
    int hashtable[l];
    for(int i=0;i<N;i++)
    {
        hashtable[i]=-1;
    }
    hasht(hashtable,l,arr,N);
    return 0;
}