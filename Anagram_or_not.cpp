#include<iostream>
using namespace std;

bool Anagram(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    int count[256]={0};
    if(n!=m)
    return false;
    for(int i=0;i<n;i++){
    count[str1[i]]++;
    count[str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0)
        return false;
    }
    return true;
}

int main(){
    string str1="listen";
    string str2="islent";
    cout<<Anagram(str1,str2);
    return 0;
}
