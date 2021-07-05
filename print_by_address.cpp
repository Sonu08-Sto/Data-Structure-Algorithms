#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int *address;
    address=&n;
    cout<<"The address print by pointer is = "<<&address<<endl;
    cout<<"The value print by pointer is = "<<*address;
    
}