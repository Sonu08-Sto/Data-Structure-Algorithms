#include<iostream>
#include<algorithm>
using namespace std;

void FIND(string str,int i=0)
{
    if(i==str.length()-1)
    {
        cout<<str<<" ";
        return;
    }

    for(int j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        FIND(str,i+1);
        swap(str[i],str[j]);
    }

}

int main()
{
    string s="ABC";
    FIND(s);
    return 0;
}