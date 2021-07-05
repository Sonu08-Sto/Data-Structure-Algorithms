#include<iostream>
using namespace std;

int FIND(string s1,string s2)
{
    if(s2[0]== '\0')
    return 0;

    for(int i=0;s1[i]!='\0';i++)
    {
        bool ans=true;
        for(int j=0;s2[j]!='\0';j++)
        {
            if(s1[i+j]=='\0')
            return 0;
            if(s1[i+j] != s2[j])
            {
                ans=false;
                break;
            }
        }
        if(ans==true)
        return i;
    }
}

int main()
{
    string s1="Geeks For Geeks";
    string s2="For";
    cout<<FIND(s1,s2);
    return 0;
}