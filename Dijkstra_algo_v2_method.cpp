#include <bits/stdc++.h> 
using namespace std; 
#define V 4

int primMST(int graph[][V]){
    int key[V];int res=0; 
	fill(key,key+V,INT_MAX);
	bool mSet[V];
    for(int i=0;i<V;i++)
    mSet[i]=false;
    key[0]=0;

    for(int i=0;i<V;i++){

        int u=-1;

        for(int i=0;i<V;i++)
        if(mSet[i]==false && (u==-1 || key[i] < key[u]))
        u=i;
        mSet[u]=true;
        

        for(int i=0;i<V;i++)
        if(graph[u][i]!=0 && mSet[i]==false)
        key[i]=min(key[i],key[u]+graph[u][i]);
    }
    for(int i=0;i<V;i++)
    cout<<key[i]<<" ";
}

int main() 
{ 
	int graph[V][V] = { { 0, 5, 10, 0}, 
						{ 5, 0, 3, 20 }, 
						{ 10, 3, 0, 2 }, 
						{ 0, 20, 2, 0 },}; 

	primMST(graph); 

	return 0; 
} 
