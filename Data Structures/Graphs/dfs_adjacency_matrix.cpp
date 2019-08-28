#include <bits/stdc++.h>
using namespace std;

void dfs_print(int** graph, int N, int starting_vertex, int* visited){
    cout << starting_vertex << endl;
    visited[starting_vertex] = 1;
    for(int i=0;i<N;i++){
        if(i == starting_vertex) continue;
        if(graph[starting_vertex][i] && !visited[i]){  // checking all the adjacent vertices
            dfs_print(graph, N, i, visited);
        }
    }
}

int main(){
    int N, E;   // N: number of vertices, E: number of edges
    cin >> N >> E;
    int** graph = new int*[N];
    for(int i=0;i<N;i++){
        graph[i] = new int[N];
        for(int j=0;j<N;j++)
            graph[i][j] = 0;    // initializing graph with no edges
    }
    // Taking input of each edge
    for(int i=0;i<E;i++){
        int a, b;   // a, b represents 2 vertices that have a direct connection
        cin >> a >> b;
        graph[a][b] = graph[b][a] = 1;
    }

    int* visited = new int[N];
    for(int i=0;i<N;i++) visited[i] = 0;

    dfs_print(graph, N, 0, visited);

    delete[] visited;
    for(int i=0;i<N;i++) delete[] graph[i];
    delete[] graph;
    return 0;
}