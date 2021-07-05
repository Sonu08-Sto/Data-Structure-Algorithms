#include<iostream>
#include<algorithm>
using namespace std;

const int R=3;
const int C=3;

int Median(int arr[R][C])
{
    int min=arr[0][0];                  //Find MInimum element
    int max=arr[0][C-1];                //Find mAximum element
    for(int i=0;i<R;i++){
        if(arr[i][0]<min)
        min=arr[i][0];
        if(arr[i][C-1]>max)
        max=arr[i][C-1];
    }
    int Mediele=(R*C+1)/2;                 // Find the Median Position in the matrix
    while(min<max)
    {
        int minele=0;
        int mid=(min+max)/2;                //Find Mid element in range of min and max (1 to 40)
        for(int i=0;i<R;i++)
        minele += upper_bound(arr[i],arr[i]+C,mid) - arr[i];       // find the occurance of element in each row that is smaller than mid
        if(minele < Mediele)
        min=mid+1;
        else
        max=mid;
    }
    return max;
}

int main()
{
    int arr[R][C]={{1,10,20},
                   {15,25,35},
                   {5,30,40}};
    cout<<Median(arr);
    return 0;
}                  
                   
