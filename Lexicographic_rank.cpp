#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}

int LexicographicalRank(string str)
{
    int n=str.length();
    int res=1;
    int mn=fact(n);
    int arr[256]={0};
    for(int i=0;i<n;i++)
    arr[str[i]]++;
    for(int i=1;i<256;i++)
    arr[i] += arr[i-1];
    for(int i=0;i<n-1;i++){
        mn=mn/(n-i);
        res=res + arr[str[i]-1] * mn;
        for(int j=str[i];j<256;j++)
        arr[j]--;
    }
    return res;
}

int main(){
    string str="BAC";
    cout<<LexicographicalRank(str);
    return 0;
    cout<<fact(4);
}