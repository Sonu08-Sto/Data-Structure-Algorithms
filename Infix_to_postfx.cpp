#include<iostream>
#include<bits\stdc++.h>
#include<stack>

using namespace std;

int Prec(char x){
    if(x=='^')
    return 3;
    else if(x=='*' || x=='/')
    return 2;
    else if(x=='+' || x=='-')
    return 1;
    else 
    return -1;
}

void Postfix(string str){
    stack<char> s;
    string res;
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if((c>='a' && c<='z') || (c>='A' &&c<='Z'))
        res+=c;
        else if(c=='(')
        s.push(c);
        else if(c==')'){
            while(s.top()!='('){
                res+=s.top();
                s.pop();
            }
            if( !s.empty() )
            s.pop();
        }
        else{
            while( !s.empty() &&( Prec(s.top())>=Prec(c))){
                res+=s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while( !s.empty()){
        res+=s.top();
        s.pop();
    }
    cout<<res;
}

int main(){
    string str="((a*b)+c)";
    Postfix(str);
    return 0;
}