#include <bits/stdc++.h>
using namespace std;

void dfs(int** graph, int n, int sv, bool* visited){
    visited[sv] = true;
    for(int i=0;i<n;i++){
        if(i==sv) continue;
        if(graph[sv][i] && !visited[i]){
            dfs(graph, n, i, visited);
        }
    }
}

bool isConnected(int** graph, int n, int sv){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++) visited[i] = false;
    dfs(graph, n, sv, visited);
    for(int i=0;i<n;i++) if(!visited[i]) return false;
    return true;
}

int main(){
    int n, e;
    cin >> n >> e;
    int** graph = new int*[n];
    for(int i=0;i<n;i++){
        graph[i] = new int[n];
        for(int j=0;j<n;j++) graph[i][j] = 0;
    }
    for(int i=0;i<e;i++){
        int a, b;
        cin >> a >> b;
        graph[a][b] = graph[b][a] = 1;
    }
    (isConnected(graph, n, 0))?cout << "true": cout << "false";
    return 0;
}