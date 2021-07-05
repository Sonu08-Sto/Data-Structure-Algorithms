#include<iostream>
using namespace std;

void PositionPattern(string txt,string pat){
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++)
            if(pat[j]!=txt[i+j])
            break;
            
            if(j==m)
            cout<<i<<" ";
    }
}

int main(){
    string txt="abccsasdabcsds";
    string pat="abc";
    PositionPattern(txt,pat);
    return 0;
}