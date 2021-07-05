#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
}

void Print(vector<int> adj[],int V){
    for(int i=0;i<V;i++){
        cout<<"vertex "<<i<<"->";
        for(int x : adj[i])
        cout<<x<<" ";
        cout<<endl;
    }
}

void BFS(vector<int> adj[],int V,int src){
    bool visited[V]={false};
    queue<int> q;
    q.push(src);
    visited[src]=true;
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int x : adj[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}

int main(){
    int V=5;
    vector<int> adj[5];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    int source=0;
    BFS(adj,V,source);
    return 0;  
}