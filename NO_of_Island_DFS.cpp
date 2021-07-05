#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
}

void DFS(vector<int> adj[],bool visited[],int src){
    visited[src]=true;
    for(int x:adj[src]){
        if(visited[x]==false)
        DFS(adj,visited,x);
    }
}

int DFSGraph(vector<int> adj[],int V){
    bool visited[V];
    int count=0;
    for(int i=0;i<V;i++)
    visited[i]=false;
    for(int i=0;i<V;i++)
    if(visited[i]==false){
    DFS(adj,visited,i); 
    count++;
    }
    return count;
}

int main(){
    int V=7;
    vector<int> adj[V];
    addEdge(adj,0,1); 
	addEdge(adj,2,3); 
	addEdge(adj,2,4); 
	addEdge(adj,5,6);
    cout<<DFSGraph(adj,V);
    return 0;  
}