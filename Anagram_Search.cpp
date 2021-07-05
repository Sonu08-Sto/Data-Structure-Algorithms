#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool areSame(int CT[],int CP[]){
    for(int i=0;i<256;i++){
        if(CT[i]!=CP[i])return false;
    }
    return true;
}
bool Anagram(string txt,string pat){
    int arr[256]={0};
    int brr[256]={0};
    int n=txt.length();
    int m=pat.length();
    for(int i=0;i<m;i++){
        arr[txt[i]]++;
        brr[pat[i]]++;
    }
    for(int i=m;i<n;i++)
    {
        if(areSame(arr,brr))
        return true;
        arr[txt[i]]++;
        arr[txt[i-m]]--;
    }
    return false;
}

int main(){
    string str="geeksforgeeks";
    string str2="frog";
    cout<<Anagram(str,str2);
    return 0;
}