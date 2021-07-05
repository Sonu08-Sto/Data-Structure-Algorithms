#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers = ";
    cin>>a>>b;
    int c=max(a,b);
    int end=a*b;
    int ans=c;

    for(int i=1;i<=end;i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
            break;
        }
    }
     cout<<ans;
    return 0;
}