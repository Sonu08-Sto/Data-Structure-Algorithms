#include<iostream>

using namespace std;

void reverse(int &a,int &b)
{
    int rev_a=0;
    while(a>0)
    {
        rev_a=rev_a*10+ a%10;
        a=a/10;
    }
    a=rev_a;
    int rev_b=0;
    while(b>0)
    {
        rev_b=rev_b*10+ b%10;
        b=b/10;
    }
    b=rev_b;
}

void swap(int &a,int &b)
{   
   int c;
   c=a;
   a=b;
   b=c;
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers = ";
    cin>>a>>b;
     cout<<"Before the swap value are = "<<a<<" "<<b<<endl;
    reverse(a,b);
    swap(a,b);
    cout<<"The swap value is = "<<a<<" "<<b<<endl;
    return 0;
}
