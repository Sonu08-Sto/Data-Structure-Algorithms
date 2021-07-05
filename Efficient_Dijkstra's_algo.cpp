  ////  RUN ON ONLINE COMPILER  THIS IS NOT WORK IN VS CODE DONT KNOW WHY // 

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[],int x,int y,int w){
    adj[x].push_back(make_pair(y,w));
    adj[y].push_back(make_pair(x,w));
}

void PrimsP(vector<pair<int,int>> adj[],int V){
    priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > pq;

    vector<bool> visited(V,false);
    vector<int> key(V,INT_MAX);
    pq.push(make_pair(0,0));          // 0= weight  2nd 0=source
    key[0]=0;

    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();

       
        visited[u]=true;

        for( auto i : adj[u] ){
            int v=i.first;
            int w=i.second;

            if(visited[v]==false && key[v] > key[u]+w){
                key[v]=key[u]+w;
                pq.push(make_pair(key[v],v));
                
            }
        }
    }
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, key[i]);
}

int main(){
    int V=9;
    vector<pair<int,int>> adj[V];
	addEdge(adj,0, 1, 4);
    addEdge(adj,0, 7, 8);
    addEdge(adj,1, 2, 8);
    addEdge(adj,1, 7, 11);
    addEdge(adj,2, 3, 7);
    addEdge(adj,2, 8, 2);
    addEdge(adj,2, 5, 4);
    addEdge(adj,3, 4, 9);
    addEdge(adj,3, 5, 14);
    addEdge(adj,4, 5, 10);
    addEdge(adj,5, 6, 2);
    addEdge(adj,6, 7, 1);
    addEdge(adj,6, 8, 6);
    addEdge(adj,7, 8, 7);
    PrimsP(adj,V);
    return 0;
}