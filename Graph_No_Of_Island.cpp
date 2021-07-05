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

void BFS(vector<int> adj[],bool visited[],int src){
    visited[src]=true;
    queue<int> q;
    q.push(src);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        for(int x : adj[u]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}

int BFS_Diss(vector<int> adj[],int V){
    bool visited[V];
    int count=0;
    for(int i=0;i<V;i++)
    visited[i]=false;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
        BFS(adj,visited,i);
        count++;
        }
    }
    return count;
}

int main(){
    int V=7;
    vector<int> adj[V];
    addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);
    cout<<BFS_Diss(adj,V);
    return 0;  
}