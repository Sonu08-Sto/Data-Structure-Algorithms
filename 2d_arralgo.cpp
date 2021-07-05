#include<iostream>

using namespace std;

int main()
{
    int row,column,c=0;
    cout<<"Enter the size of row in arrray"<<endl;
    cin>>row;
    cout<<"Enter the size of column in arrray"<<endl;
    cin>>column;
    int *arr=new int[row*column];
    cout<<"Enter the elemnt of 2d array one by one ="<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {s
            cin>>*(arr + i * row + j);
            c++;
        }
    }
    cout<<"The 2d array list is "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           cout<< *(arr + i * row + j)<<" ";
        }
        cout<<endl;
    }
    cout<<"The Number of element in the 2d array are ="<<c;
    return 0;
}