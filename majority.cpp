#include<iostream>

 using namespace std;

int check(int arr[],int size,int n)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==n)
        count++;
    }
    return count;
}

 int main()
 {
     int size ;
     int *arr=new int(size);
     cout<<"Enter the size of arrar = ";
     cin>>size;
     cout<<"Enter the elements of array = ";
     for(int i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     int m,n;
     cout<<"Enter the two no you want to check the occrance = ";
     cin>>m>>n;
     int a=check(arr,size,m);
     int b=check(arr,size,n);
     if(a>b)
     cout<<"The occrance of "<<m<<" is greater";
     else
     cout<<"The occrance of "<<n<<" is greater";
     return 0;
 }