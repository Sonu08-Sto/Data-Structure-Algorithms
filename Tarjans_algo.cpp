#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    void Tarjons(int u,bool visited[],int disc[],int low[],stack<int> *st);
    public:
    Graph(int v){
        this->V=v;
        adj=new list<int>[V];
    }
    void addEdge(int x,int  y){
        adj[x].push_back(y);
    }
    void SCC();
};

void Graph::Tarjons(int u,bool visited[],int disc[],int low[],stack<int> *st){
      static int time=0;
      disc[u]=low[u]=++time;
      st->push(u);
      visited[u]=true;

      for(int v : adj[u]){
          if(disc[v]==-1){
            Tarjons(v,visited,disc,low,st);
            low[u]=min(low[u],low[v]);
          }
          else if(visited[v]==true)
          low[u]=min(low[u],disc[v]);
      }
      int w=0;
      if (low[u] == disc[u])
    {
        while (st->top() != u)
        {
            w = (int) st->top();
            cout << w << " ";
            visited[w] = false;
            st->pop();
        }
        w = (int) st->top();
        cout << w << "\n";
        visited[w] = false;
        st->pop();
    }
}

void Graph ::SCC(){
    stack<int> *st = new stack<int>();
    bool visited[V];
    int disc[V];
    int low[V];

    for(int i=0;i<V;i++)  {
    visited[i]=false;
    disc[i]=-1;
    low[i]=-1;
    }

    for(int i=0;i<V;i++)
    if(disc[i]==-1)
    Tarjons(i,visited,disc,low,st); 
}

int main()
{
    cout << "\nSCCs in first graph \n";
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.SCC();

    return 0;
}