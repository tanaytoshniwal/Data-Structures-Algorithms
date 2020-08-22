#include <bits/stdc++.h>
using namespace std;

void bfs_print(int** graph, int V, int sv, int* visited){
    queue<int> q;
    q.push(sv);
    visited[sv] = 1;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        cout << t << " ";
        for(int i=0;i<V;i++){
            if(i == t) continue;
            if(graph[t][i] && !visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

void bfs(int** graph, int V, int sv){
    int* visited = new int[V];
    for(int i=0;i<V;i++) visited[i] = 0;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            bfs_print(graph, V, i, visited);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;
    int** graph = new int*[V];
    for(int i=0;i<V;i++){
        graph[i] = new int[V];
        for(int j=0;j<V;j++) graph[i][j] = 0;
    }
    for(int i=0;i<E;i++){
        int a, b;
        cin >> a >> b;
        graph[a][b] = graph[b][a] = 1;
    }
    
    bfs(graph, V, 0);
    return 0;
}
