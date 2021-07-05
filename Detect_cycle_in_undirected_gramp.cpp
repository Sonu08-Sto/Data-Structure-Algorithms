#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
}

bool DFS_Help(vector<int> adj[],bool visited[],int s,int parent){
    visited[s]=true;

    for(int u:adj[s]){
        if(visited[u]==false){
            if(DFS_Help(adj,visited,u,s)==true)
                {return true;}}
        else if(u!=parent)
            {return true;}
    }
    
    return false;
}

bool DFS(vector<int> adj[], int V){
    bool visited[V]; 
	for(int i=0;i<V; i++) 
		visited[i] = false;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            if(DFS_Help(adj,visited,i,-1)==true)
                return true;
    }
    return false;
}

int main(){    
    int V=4;
    vector<int> adj[V];
    addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,1,3);  
    cout<<DFS(adj,V);
    return 0;  
}