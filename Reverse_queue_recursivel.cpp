#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void print(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}

void Reverse(queue<int> &q){
    if(q.empty())
    return ;
    int x=q.front();
    q.pop();
    Reverse(q);
    q.push(x);
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    Reverse(q);
    print(q);
    return 0;
}
