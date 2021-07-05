#include<iostream>
#include<stack>
using namespace std;

struct St{
    stack<int> s;
    int capacity;
    int *arr;
    int top1,top2;
    St(int x){
        capacity=x;
        arr=new int[capacity];
        top1=-1;
        top2=capacity;
    }
    void Push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
    }
    void Push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
    }
    int top(){
        return arr[top1];
    }
    int pop1(){
        if(top1>=0){
            int res=top();
            top1--;
            return res;
        }
    }
    int pop2(){
        if(top2<=capacity){
            int x=arr[top2];
            top2--;
            return x;
        }
    }
};

int main(){
    St s(5);
    s.Push1(1);
    s.Push1(2);
    s.Push1(2);
    s.Push1(4);
    s.Push2(5);
    cout<<s.top()<<endl;
    cout<<s.pop1()<<endl<<s.pop2();
    return 0;
}