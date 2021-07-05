#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
        adj[u].push_back(v);
}

void TopologicalSort(vector<int> adj[],int V){
    vector<int> in_degree(V, 0); 
    int count=0;
    for (int u = 0; u < V; u++) { 
        for (int x:adj[u]) 
            in_degree[x]++; 
    }
    queue<int> q; 
    for (int i = 0; i < V; i++) 
        if (in_degree[i] == 0) 
            q.push(i); 

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i : adj[u])
            if( --in_degree[i]==0)
            q.push(i);
            count++;
    }
    if(count==V)
    cout<<"Cycle Not Present";
    else
    cout<<"Cycle Is Present";
}

int main(){
    int V=3;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,0,2); 

    TopologicalSort(adj,V);
    
    return 0;  
}