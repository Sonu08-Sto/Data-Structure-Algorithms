#include<iostream>

using namespace std;

int main()
{
    string s;
    cout<<"**** Enter the string **** "<<endl;
    getline(cin,s);
    int starting,ending,m;
    m=s.size();
    ending=m-1;
    for(int i=m-1;i>=0;i--)
    {
        if(s[i]== ' ' || i==0 )
        {
            if(i==0)
            {
                starting=0;
            }
            else
            {
                starting=i+1;
            }
            for(int j=starting;j<=ending;j++)
            {
                cout<<s[j];
            }
            ending=i-1;
            cout<<" ";
        }
    }
    return 0;
}