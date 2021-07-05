#include<iostream>

using namespace std;

void disk(int n,char A,char B,char C)
{
        if(n==1)
        {
            cout<<"Move disk "<<A<<" to "<<C<<endl;
            return;
        }
        disk(n-1,A,C,B);
        cout<<"Move disk "<<n<<" "<<A<<" to "<<C<<endl;
        disk(n-1,B,A,C);
}

int main()
{
    int n;
    cout<<"Enter the number of disk = ";
    cin>>n;
    disk(n,'A','B','C');
    return 0;
}