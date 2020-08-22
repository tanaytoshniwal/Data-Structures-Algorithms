#include <bits/stdc++.h>
using namespace std;

bool hasPath(int** graph, int n, int a, int b, bool* visited){
    if(graph[a][b] || graph[b][a]){
        return true;
    }
    queue<int> q;
    q.push(a);
    visited[a] = true;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        if(t == b) return true;
        for(int i=0;i<n;i++){
            if(graph[t][i]&&!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return false;
}

int main() {
    int n, e;
    cin >> n >> e;
    int** graph = new int*[n];
    for(int i=0;i<n;i++){
        graph[i] = new int[n];
        for(int j=0;j<n;j++) graph[i][j] = 0;
    }
    for(int i=0;i<e;i++){
        int x, y;
        cin >> x >> y;
        graph[x][y] = graph[y][x] = 1;
    }
    bool* visited = new bool[n];
    for(int i=0;i<n;i++) visited[i] = false;
    int a, b;
    cin >> a >> b;
    bool res = hasPath(graph, n, a, b, visited);
    if(res) cout << "true";
    else cout << "false";
    return 0;
}
