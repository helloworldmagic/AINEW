#include <bits/stdc++.h>
using namespace std;

void BFS(int start , int v, vector<int> adj[], vector<bool>& visited){
    
    queue<int> q;
    q.push(start);

    visited[start] = true;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";

        for(int i=0;i<adj[curr].size();i++)
            if(visited[adj[curr][i]] == false)
            {
                q.push(adj[curr][i]);
                visited[adj[curr][i]] = true;
            }
    }

}
  

int main()
{
    int v,e;
    cout<<"Enter no. of vertex<<"<<endl;
    cin>>v;
    cout<<"Enter no. of edges<<"<<endl;
    cin>>e;
   
    vector<int> adj[v];

    cout<<"Enter x and y"<<endl;
    for(int i=0;i<e;i++)
    {  
       int x,y;
       cin>>x>>y;
       
       //undirected graph
       adj[x].push_back(y);
       adj[y].push_back(x);
   
       //directedgraph
       // adj[x].push_back(y);

    }

    vector<bool> visited(v, false);


    BFS(0, v, adj, visited);
}
