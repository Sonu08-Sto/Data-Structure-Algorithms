#include<iostream>
using namespace std;

void LPS(string pat,int arr[]){
    int n=pat.length();
    int i=1;
    int len=0;
    arr[0]=0;
    while(i<n){
        if(arr[i]==arr[len]){
            len++;
            arr[i]=len;
            i++;
        }
        else{
            if(len==0){
                arr[i]=0;
                i++;
            }
            else
            len=arr[len-1];
        }
    }
}

void KMP(string txt,string pat){
    int n=txt.length();
    int m=pat.length();
    int arr[m];
    LPS(pat,arr);
    int i=0,len=0;
    while(i<n){
        if(txt[i]==pat[len]){
            i++;
            len++;
        }
        if(len==m){
            cout<<i-len<<" ";
            len=arr[len-1];
        }
        else if(i<n &&txt[i] != pat[len]){
            if(len==0){
                i++;
            }
            else
            len=arr[len-1];
        }
    }
}

int main(){
    string str="ababcababaad";
    string pat="ababa";
    KMP(str,pat);
    return 0;
}