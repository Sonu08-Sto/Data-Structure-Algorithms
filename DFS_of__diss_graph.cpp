#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
}

void DFS(vector<int> adj[],bool visited[],int src){
    visited[src]=true;
    cout<<src<<" ";
    for(int x:adj[src]){
        if(visited[x]==false)
        DFS(adj,visited,x);
    }
}

void DFSGraph(vector<int> adj[],int V){
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;
    for(int i=0;i<V;i++)
    if(visited[i]==false)
    DFS(adj,visited,i); 
}

int main(){
    int V=5;
    vector<int> adj[V];
    addEdge(adj,0,1); 
	addEdge(adj,1,3); 
	addEdge(adj,3,2); 
	addEdge(adj,2,0); 
	addEdge(adj,1,4);
	addEdge(adj,3,4);
    DFSGraph(adj,V);
    return 0;  
}