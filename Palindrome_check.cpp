#include<iostream>
using namespace std;

bool Palindrome(string str){
    int n=str.length()-1;
    int i=0;
    while(i<=n){
        if(str[i]!=str[n]){
            return false;
        }
        i++;
        n--;
    }
    return true;
}

int main(){
    string str="abba";
    cout<<Palindrome(str);
    return 0;
}