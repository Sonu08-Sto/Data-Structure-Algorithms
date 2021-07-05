#include<iostream>
#include<stack>
using namespace std;

bool matching(char a,char b)
{
    return a=='[' && b==']' || a=='(' && b==')' || a=='{' && b=='}';
}

bool Check(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='[' || str[i]=='{' || str[i]=='(')
        s.push(str[i]);
        else
        {
        if(s.empty()==true)
        return false;
        else if(matching(s.top(),str[i])==false)
        return false;
        else 
        s.pop();
        }
    }
    return (s.empty()==true);
}

int main()
{
    string str={"[{}]"};
    cout<<Check(str);
    return 0;
}
