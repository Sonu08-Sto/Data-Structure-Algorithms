#include<iostream>
using namespace std;

bool Subsequence(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    int j=0;
    for(int i=0;i<n && j<m;i++){
        if(str1[i]==str2[j]){
            j++;
        }
    }
    return (j==m);
}

int main(){
    string str1="abcd";
    string str2="ab";
    cout<<Subsequence(str1,str2);
    return 0;
}