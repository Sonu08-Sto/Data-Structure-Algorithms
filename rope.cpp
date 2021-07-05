#include<iostream>
using namespace std;

int cut(int rope,int a,int b,int c)
{
    if(rope==0)
    {
        return 0;
    }
    if(rope<=-1)
    {
        return -1;
    }
    int res=max(cut(rope-a, a, b, c), 
	          max(cut(rope-b, a, b, c), 
	          cut(rope-c, a, b, c)));

    if(res==-1)
    {
        return -1;
    }          
    return res+1;
}

int main()
{
        int rope,a,b,c;
        cout<<"Enter the rope = ";
        cin>>rope;
        cout<<"Enter the parts = ";
        cin>>a>>b>>c;
        int n=cut(rope,a,b,c);
        cout<<n;
        return 0;
}