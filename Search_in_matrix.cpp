#include<iostream>
using namespace std;

const int R=4;
const int C=4;

void Search(int arr[R][C],int x)
{
    int i=0,j=C-1;
    while(i<R && j>=0)
    {
        if(arr[i][j]==x)
        {
            cout<<"Element is present at Index "<<i<<" "<<j;
            return;
        }
        else if(arr[i][j]>x)
        j--;
        else
        i++;
    }
}

int main()
{
    int arr[R][C]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,49},
                   {32,33,39,50}};
    int x=39;
    Search(arr,x);
    return 0;
}