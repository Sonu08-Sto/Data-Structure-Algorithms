#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;                             // for weighted graph or undirected graph use vector<pair<int,int>>
    public:
    
    Graph(int v){
        this-> V = v;
        adj=new list<int>[V];
    }
    void addEdge(int x,int y){
        adj[x].push_back(y);
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<"The vertex "<<i<<"->";
            for(int x : adj[i])
            cout<<x<<" ";
            cout<<endl;
        }
    }
};

int main(){
  Graph g(5);
  g.addEdge(1,0);   
  g.addEdge(0,2);   
  g.addEdge(2,1);   
  g.addEdge(0,3);   
  g.addEdge(3,4);   
  g.print();
}