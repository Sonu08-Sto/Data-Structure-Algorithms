#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void CheckBiit(string s)
{
    int n=s.length();
    int power=pow(2,n);   
    for(int counter=0;counter<power;counter++)
    {
        for(int j=0;j<n;j++)
        if(counter &(1<<j)!=0)
        cout<<s[j];
        cout<<endl;
    }

}

int main()
{
    string s="abc";
    CheckBiit(s);
    return 0;
}