#include<iostream>
using namespace std;

void DistintPosition(string txt,string pat){
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<n-m;){
        int j;
        for(j=0;j<m;j++)
        if(txt[i+j]!=pat[j])
        break;
        if(j==m)
        cout<<i<<" ";
        if(j==0)
        i++;
        else
        i=j+i;
    }
}

int main(){
    string str1="abcdefghijabcdhie";
    string str2="abcd";
    DistintPosition(str1,str2);
    return 0;
}