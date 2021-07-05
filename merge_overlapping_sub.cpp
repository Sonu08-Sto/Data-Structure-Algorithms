#include<iostream>
#include<algorithm>
using namespace std;

struct Pairs
{
    int start;
    int end;
};

bool MyCmp(Pairs a,Pairs b)
{
    return (a.start < b.start);
}

void OverLapping(Pairs arr[],int n)
{
    sort(arr,arr+n,MyCmp);
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res].end >= arr[i].start)
        {
            arr[res].end = max(arr[res].end,arr[i].end);
            arr[res].start = min(arr[res].start,arr[i].start);
        }
        else
        {
            res++;
            arr[res]=arr[i];
        }
    }
    for(int i=0;i<=res;i++)
    cout<<arr[i].start<<" "<<arr[i].end<<endl;
}

int main()
{
    Pairs arr[]={{2,7},{5,10},{18,30},{2,7}};
    int n=sizeof(arr)/sizeof(arr[0]);
    OverLapping(arr,n);
    return 0;
}