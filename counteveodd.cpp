#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int counteven=0,countodd=0;
    for(int i=0;i<=7-1;i++)
    {
        if(arr[i]%2==0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    cout<<counteven<<" "<<countodd;
    return 0;
}