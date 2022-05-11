#include <bits/stdc++.h>
using namespace std;
#define V 4
int Min=INT_MAX;
vector<int> tsp;

voidDFS(int graph[][V], vector<bool>& visited, int currPos, int n, int count, int cost,vector<int> path){
    
    if (count == n && graph[currPos][0]) {
        Min = min(Min, cost + graph[currPos][0]);
        if(Min==(cost+graph[currPos][0])){
            tsp=path;
        }
        return;
    }

    visited[currPos]=true;
    count+=1;

    for(int i=0;i<n;i++) {
        if (!visited[i] && graph[currPos][i]) {
                path.push_back(i);
                DFS(graph, visited, i, n, count,cost + graph[currPos][i],path);
                path.pop_back();
        }
    }

    count-=1;
    visited[currPos] = false;
    return;
}

int main(){
    int n = 4;
    int graph[][V] = {
        { 0, 10, 15, 20 },
        { 10, 0, 35, 25 },
        { 15, 35, 0, 30 },
        { 20, 25, 30, 0 }
    };

    vector<bool> visited(n,false);
    vector<int> path;
    path.push_back(0);
    
    DFS(graph, visited, 0, n, 1, 0,path);
    cout<<Min<<endl;

    for(int i=0;i<tsp.size();i++)
            cout<<tsp[i]<<" ";

return 0;
}
