#include<iostream>
using namespace std;

bool find(string a,string b)
{
    int m=a.size();
    int n=b.size();
    
    for(int i=0;i<=(m-n);i++)
    {
        bool isbool=true;
        for(int j=0;j<n;j++)
        {
            if(b[j]!=a[j+i])
            {
                isbool=false;
                break;
            }
        }
        if(isbool)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string a="It Is the only way";
    string b="way";
    bool c=find(a,b);
    if(c)
    {
        cout<<"String is presentt";
    }
    else
    {
        cout<<"String is not present ";
    }
    return 0;
}