#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
        adj[u].push_back(v);
}

void TopologicalSort(vector<int> adj[],int V){
    vector<int> visited(V,0);

    for(int i=0;i<V;i++)
    for(int x : adj[i])
    visited[x]++;

    queue<int> q;
    for(int i=0;i<V;i++)
    if(visited[i]==0)
    q.push(i);

    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int i : adj[u]){
            if( --visited[i]==0)
            q.push(i);
        }
    }
}

int main(){
    int V=5;
    vector<int> adj[V];
    addEdge(adj,0,2); 
	addEdge(adj,0,3); 
	addEdge(adj,1,3); 
	addEdge(adj,1,4); 

    TopologicalSort(adj,V);
    
    return 0;  
}