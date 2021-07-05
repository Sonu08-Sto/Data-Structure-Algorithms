#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int x,int y){
    adj[x].push_back(y);
}

bool DFS(vector<int> adj[],bool visited[],bool resST[],int s){
    visited[s]=true;
    resST[s]=true;

    for(int u : adj[s]){
        if(visited[u]==false){
        if(DFS(adj,visited,resST,u)==true)return true;
        else if(resST[u] == true) return true;
    }
    resST[s]=false;
    return false;
    }
}

bool DetectCycle(vector<int> adj[],int V){
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;

    bool resST[V];
    for(int i=0;i<V;i++)
    resST[i]=false;

    for(int i=0;i<V;i++){
        if(visited[i]==false)
        if(DFS(adj,visited,resST,i)==true)return true;
    }
    return false;
}

int main(){
    int V=6;
    vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,2,1); 
	addEdge(adj,2,3); 
	addEdge(adj,3,4); 
	addEdge(adj,4,5);
	addEdge(adj,5,3);
    cout<<DetectCycle(adj,V);
    return 0;
}