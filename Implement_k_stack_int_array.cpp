#include<iostream>
#include<stack>
using namespace std;

struct Stackk{
    int *arr,*next,*top;
    int k,freetop,cap;
    Stackk(int x,int y){
        k=y;
        cap=x;
        arr=new int[cap];
        next=new int[cap];
        top=new int[k];
        for(int i=0;i<k;i++)
        top[i]=-1;
        freetop=0;
        for(int i=0;i<cap-1;i++)
        next[i]=i+1;
        next[cap-1]=-1;
    }   
    bool IsFull(){ return (freetop==-1); }
    bool IsEmpty(int sn){ return top[sn]==-1; }
    void Push(int x,int sn){
        int i=freetop;
        arr[i]=x;
        freetop=next[i];
        next[i]=top[sn];
        top[sn]=i;
    }
    int pop(int sn){
        int i=top[sn];
        top[sn]=next[i];
        next[i]=freetop;
        freetop=i;
        return arr[i];
    }
};

int main(){
    Stackk s(5,3);
    s.Push(1,0);
    s.Push(2,0);
    s.Push(3,1);
    s.Push(4,2);
    s.Push(5,2);
    cout<<s.pop(0)<<endl<<s.pop(2)<<s.pop(2);
}