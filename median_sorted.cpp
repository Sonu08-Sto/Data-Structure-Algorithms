#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double Median(int a1[],int a2[],int n1,int n2)
{
    int low=0;
    int high=n1;
    while(low<=high)
    {
        int mid1=(low+high)/2;
        int mid2=((n1+n2+1)/2)-mid1;
        int max1=(mid1==0)?INT_MIN:a1[mid1-1];
        int max2=(mid2==0)?INT_MIN:a2[mid2-1];
        int min1=(mid1==n1)?INT_MAX:a1[mid1];
        int min2=(mid2==n2)?INT_MAX:a2[mid2];
        if(max1<=min2 && max2 <= min1)
        {
            if((n1+n2)%2==0)
            return (double)(max(max1,max2)+min(min1,min2))/2;
            else
            return (double)max(max1,max2);
        }
        else if(max2 > min1)
        low=mid1+1;
        else
        high=mid1-1;
    }
    return -1;
}

int main()
{
    int a1[]={10,20,30};
    int a2[]={5,15,25,35,45};
    int n1=3;
    int n2=5;
    cout<<Median(a1,a2,n1,n2);
    return 0;
}