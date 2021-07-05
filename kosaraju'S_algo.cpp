#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    void DFS(int i,bool visited[]);
    void fillorder(int i,bool visited[],stack<int> &st);
    public:
    Graph(int v){
        this->V=v;
        adj=new list<int>[V];
    }
    void addEdge(int x,int y){
        adj[x].push_back(y);
    }
    Graph Transpose();
    void Korsraju();
};

void Graph::DFS(int u ,bool visited[]){
    visited[u]=true;
    cout<<u<<" ";
    for(auto x:adj[u])
    if(visited[x]==false)
    DFS(x,visited);
}

Graph Graph :: Transpose(){
    Graph gt(V);
    for(int i=0;i<V;i++)
    for(auto u:adj[i])
    gt.adj[u].push_back(i);

    return gt;
}

void Graph :: fillorder(int i,bool visited[],stack<int> &st){
    visited[i]=true;
    for(int u : adj[i])
    if(visited[u]==false)
    fillorder(u,visited,st);

    st.push(i);
}

void Graph :: Korsraju(){
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;
    stack<int> st;

    for(int i=0;i<V;i++)
    if(visited[i]==false)
    fillorder(i,visited,st);

    Graph g=Transpose();
    for(int i=0;i<V;i++)
    visited[i]=false;

    while(!st.empty()){
        int u=st.top();
        st.pop();
        if(visited[u]==false){
            g.DFS(u,visited);
            cout<<endl;
        }
    }
}

int main(){
  Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
  g.Korsraju();
}