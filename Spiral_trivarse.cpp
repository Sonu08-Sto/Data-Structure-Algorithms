#include<iostream>
using namespace std;

const int R=4;
const int C=4;

void SpiralTriverse(int arr[R][C])
{
    int top=0,left=0,right=C-1,bottom=R-1;
    
    while(top<=bottom && right>=left){
        for(int i=top;i<C;i++)
        cout<<arr[top][i]<<" ";
        top++;

        for(int i=top;i<=bottom;i++)
        cout<<arr[i][right]<<" ";
        right--;

        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            cout<<arr[bottom][i]<<" ";
            bottom--;
        }
        if (right>=left)
        {
           for(int i=bottom;i>=top;i--)
            cout<<arr[bottom][left]<<" ";
            left++;
        }
    }
}

int main()
{
    int arr[R][C]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};

    SpiralTriverse(arr);
    return 0;
}