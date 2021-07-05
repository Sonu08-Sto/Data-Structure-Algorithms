#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[],int x,int y,int w){
    adj[x].push_back(make_pair(y,w));
}

void TopologicalSort(vector<pair<int,int>> adj[],bool visited[],stack<int> &st,int s){
    visited[s]=true;
    for(auto u : adj[s])
    if(visited[u.first]==false)
    TopologicalSort(adj,visited,st,u.first);

    st.push(s);
}

void Sortestpath(vector<pair<int,int>> adj[],int V,int src){
    int dist[V];
    for(int i=0;i<V;i++)
    dist[i]=INT_MAX;
    dist[src]=0;

    bool visited[V];
    for(int i=0;i<V;i++)
    visited[i]=false;

    stack<int> st;

    for(int i=0;i<V;i++)
    if(visited[i]==false)
    TopologicalSort(adj,visited,st,i);

    for(int i=0;i<V;i++)
    visited[i]=false;

    while(!st.empty()){
        int u=st.top();
        st.pop();

        if(dist[u]!=INT_MAX){
            for(auto x : adj[u]){
                if(dist[x.first] > dist[u]+x.second )
                dist[x.first] = dist[u]+x.second ;
            }
        }
    }

    for(int i=0;i<V;i++)
    cout<<dist[i]<<" ";
}

int main(){
    int V=7;
    vector<pair<int,int>> adj[V];
	addEdge(adj,0,1,2); 
	addEdge(adj,1,2,3); 
	addEdge(adj,2,3,6); 
	addEdge(adj,0,4,1); 
	addEdge(adj,4,5,4);
	addEdge(adj,4,2,2);
	addEdge(adj,5,3,1);
    int source=0;
    Sortestpath(adj,V,source);
    return 0;
}