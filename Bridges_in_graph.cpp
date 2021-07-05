#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    void Bridgess_Help(int u,bool visited[],int disc[],int low[],int parent[]);
    public:
    Graph(int v){
        this->V=v;
        adj=new list<int>[V];
    }
    void addEdge(int x,int  y){
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    void bridge();
};

void Graph::Bridgess_Help(int u,bool visited[],int disc[],int low[],int parent[]){
        static int time=0;
        disc[u]=low[u]=++time;
        visited[u]=true;
        for(auto i : adj[u]){
            if(visited[i]==false){
                parent[i]=u;
                Bridgess_Help(i,visited,disc,low,parent);
                low[u]=min(low[u],low[i]);
                if( low[i] > disc[u])
                cout<<u<<" "<<i<<endl;
            }
            else if(i!=parent[u])
            low[u]=min(low[i],disc[i]);
        }


}

void Graph :: bridge(){
    bool visited[V];
    int disc[V];
    int low[V];
    int parent[V];

    for(int i=0;i<V;i++){
        visited[i]=false;
        parent[i]=-1;
    }

    for(int i=0;i<V;i++)
    if(visited[i]==false)
    Bridgess_Help(i,visited,disc,low,parent);   
}

int main()
{
    cout << "\nBridges in first graph \n";
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.bridge();
  
    cout << "\nBridges in second graph \n";
    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.addEdge(2, 3);
    g2.bridge();
  
    cout << "\nBridges in third graph \n";
    Graph g3(7);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(1, 3);
    g3.addEdge(1, 4);
    g3.addEdge(1, 6);
    g3.addEdge(3, 5);
    g3.addEdge(4, 5);
    g3.bridge();
  
    return 0;
}