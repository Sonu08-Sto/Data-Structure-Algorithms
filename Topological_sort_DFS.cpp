#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
        adj[u].push_back(v);
}

void DFS_Help(vector<int> adj[],bool visited[],int s,stack<int> &st){
    visited[s]=true;
    for(int u : adj[s])
        if(visited[u]==false)
        DFS_Help(adj,visited,u,st);

    st.push(s);
}

void DFS(vector<int> adj[],int V){
    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;

    stack<int> st;

    for(int i=0;i<V;i++)
    if(visited[i]==false)
    DFS_Help(adj,visited,i,st);

    while(!st.empty()){
        int u=st.top();
        st.pop();
        cout<<u<<" ";
    }
}

int main(){
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,1,3); 
    addEdge(adj,3,4); 
    addEdge(adj,2,4); 
    addEdge(adj,2,3); 

    DFS(adj,V);
    
    return 0;  
}