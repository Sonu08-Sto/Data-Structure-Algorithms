#include<iostream>

using namespace std;

int stringe(string s)
{
    int m=(int)s.size();
    int sum=0;
    int num=0;
    for(int i=0;i<m;i++)
    {
        if(s[i]>='0' && s[i]<='9' )
        {
            num=num*10 +(s[i]-'0');
        }
        else
        {
            sum+=num;
            num=0;
        }
    }
    return sum+num;
}

 int main()
 {
     string st="1asd24";
     stringe(st);
     cout<<stringe(st);
     return 0;
 }