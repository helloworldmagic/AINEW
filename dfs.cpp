#include <bits/stdc++.h>
using namespace std;
#define v 4

void DFS(int start ,int adj[v][v], vector<bool>& visited){
   cout << start << " ";
    visited[start] = true;
    for (int i = 0; i < v; i++) {
        if (adj[start][i] == 1 && (!visited[i])) {
            DFS(i, adj, visited);
        }
    }

}
  

int main(){
   int e;

   cout<<"Enter no of edeges : ";
   cin>>e;
    
    int adj[v][v];
  
    for(int i=0;i<e;i++)
    {  
       int x,y;
       cout<<"Enter x and y : "<<endl;
       cin>>x>>y;
       
       //undirected graph
       // adj[x][y] = 1;
       // adj[y][x] = 1;

       //directedgraph
       adj[x][y] = 1;

    }
  
    vector<bool> visited(v, false);
    DFS(0, adj, visited);
}
