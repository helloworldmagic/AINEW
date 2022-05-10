
#include <bits/stdc++.h>
using namespace std;
#define V 4
 
int tsp(int graph[][V], int s){
    vector<int> v;
    for (int i = 0; i < V; i++)
        if (i != s)
            v.push_back(i);
 
    int min_path = INT_MAX;
  
    do {
        int c = 0;
        int k = s;
        for (int i = 0; i < v.size(); i++) {
            c += graph[k][v[i]];
            k = v[i];
        }
      
        c += graph[k][s];
        min_path = min(min_path, c);
 
    } while (
        next_permutation(vertex.begin(), vertex.end()));
 
    return min_path;
}
 
int main()
{
    int graph[][V] = { { 0, 10, 15, 20 },
                       { 10, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };
    int s = 0;
    cout << tsp(graph, s) << endl;
    return 0;
}
