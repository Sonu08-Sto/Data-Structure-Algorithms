#include<iostream>
using namespace std;

void PrefixSuffex(string str,int arr[])
{
    arr[0]=0;
    int i=1;
    int len=0;
    int n=str.length();
    while(i<n){
        if(str[i]==str[len]){
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

int main(){
    string str="abcbabca";
    int n=str.length();
    int arr[n];
    PrefixSuffex(str,arr);
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}