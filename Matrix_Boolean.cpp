#include<iostream>
using namespace std;

const int R=3;
const int C=3;

void Boolean(int arr[R][C])
{
    bool arr_row[R];
    fill(arr_row,arr_row+R,false);
    bool arr_col[C];
    fill(arr_col,arr_col+C,false);

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(arr[i][j]){
                arr_row[i]=true;
                arr_col[j]=true;
            }
        }
    }

    for(int i=0;i<R;i++){
        if(arr_row[i]){
            for(int j=0;j<C;j++){
                arr[i][j]=1;
            }
        }
    }

    for(int i=0;i<C;i++){
        if(arr_col[i]){
            for(int j=0;j<C;j++){
                arr[j][i]=1;
            }
        }
    }
}

int main()
{
    int arr[R][C]={{0,0,1},
                    {0,0,0},
                    {1,0,0}};

    Boolean(arr);
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
    }
    return 0;                
}
