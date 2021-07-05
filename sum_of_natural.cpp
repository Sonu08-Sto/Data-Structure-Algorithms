#include<iostream>
using namespace std;

int natural(int a)
{
    if(a==0)
    {
        return a;
    }
    else
    {
        return a+ natural(a-1);
    }
}
int main()
{
    int a;
    cout<<"Enter the number one =";
    cin>>a;
    natural(a);
    cout<<natural(a);
    return 0;
}