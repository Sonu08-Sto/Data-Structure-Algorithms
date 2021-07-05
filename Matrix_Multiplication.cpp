#include<iostream>
using namespace std;

const int R=3;
const int C=2;

void Multiply(int arr[R][C],int brr[R][C])
{
    int temp[R][C];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            temp[i][j]=0;
            for(int k=0;k<R;k++){
                temp[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
        cout<<temp[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int arr[R][C]={{4,8},
                   {0,2},
                   {1,6}};
    int brr[R][C]={{5,2},
                    {9,4}};
    
    Multiply(arr,brr);
    return 0;

}