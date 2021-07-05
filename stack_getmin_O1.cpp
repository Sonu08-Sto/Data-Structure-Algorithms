#include<iostream>
#include<stack>
using namespace std;

struct St{
    stack<int> s;
    int min;

    void push(int x){
        if(s.empty()){
            min=x;
            s.push(x);
        }
        else if(x<min){
            s.push(2*x-min);
            min=x;
        }
        else
        s.push(x);
    }
    int pop(){
        int tp=s.top();
        s.pop();
        if(tp<=min){
            int res=min;
            min=2*min-tp;
            return res;
        }
        return tp;
    }
};

int main(){
    St s;
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(2);
    s.push(6);
    s.push(4);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    s.push(2);
    cout<<s.pop()<<endl;
    s.push(1);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;
}