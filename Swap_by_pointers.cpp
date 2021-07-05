#include<iostream>
using namespace std;

void swap(int *a,int *b);
void swap(int &a,int &b);

int main()
{
    int x,y;
    cout<<"Enter the two nummbers that you want to swap="<<endl;
    cin>>x>>y;
    cout<<"Before swap the values are="<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"The swap value is ="<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"The swap value by pointer function is="<<x<<" "<<y<<endl;
    return 0;
}

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}