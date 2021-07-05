#include<iostream>
#include<queue>
using namespace std;

struct st{
    queue<int> q1,q2;
    int top;
    st(){
        top=0;
    }

    void push(int x){
        top++;
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> q=q1;
        q1=q2;
        q2=q;
    }

    int pop(){
        if(q1.empty())
        return 0;
        int res=q1.front();
        q1.pop();
        top--;
        return res;
    }
};

int main(){
    st s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.pop()<<" ";
}