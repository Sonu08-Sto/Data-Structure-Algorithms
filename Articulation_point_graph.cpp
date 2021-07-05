#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    void Articulation(int u,bool visited[],int disc[],int low[],int parent[],bool ap[]);
    public:
    Graph(int v){
        this->V=v;
        adj=new list<int>[V];
    }
    void addEdge(int x,int  y){
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    void AP();
};

void Graph::Articulation(int u,bool visited[],int disc[],int low[],int parent[],bool ap[]){
        static int time=0;
        disc[u]=low[u]=++time;
        visited[u]=true;
        int child=0;

        for(auto i : adj[u]){
            if(visited[i]==false){
                child++;
                parent[i]=u;
                Articulation(i,visited,disc,low,parent,ap);
                low[u]=min(low[u],low[i]);

                if(parent[u]==-1 && child>1)
                ap[u]=true;
                if(parent[u]!=-1 && low[i] >= disc[u])
                ap[u]=true;
            }
            else if(i!=parent[u])
            low[u]=min(low[u],disc[i]);
        }
}

void Graph :: AP(){
    bool visited[V];
    bool ap[V];
    int disc[V];
    int low[V];
    int parent[V];

    for(int i=0;i<V;i++){
        visited[i]=false;
        parent[i]=-1;
        ap[i]=false;
    }

    for(int i=0;i<V;i++)
    if(visited[i]==false)
    Articulation(i,visited,disc,low,parent,ap);

    for(int i=0;i<V;i++)
    if(ap[i]==true)
    cout<<i<<" ";
}

int main()
{
    cout << "\nArticulation points in first graph \n";
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.AP();
 
    cout << "\nArticulation points in second graph \n";
    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.addEdge(2, 3);
    g2.AP();
 
    cout << "\nArticulation points in third graph \n";
    Graph g3(7);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(1, 3);
    g3.addEdge(1, 4);
    g3.addEdge(1, 6);
    g3.addEdge(3, 5);
    g3.addEdge(4, 5);
    g3.AP();
 
    return 0;
}