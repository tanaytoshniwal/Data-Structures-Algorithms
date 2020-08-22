#include <bits/stdc++.h>
using namespace std;

vector<int> getPathDFS(int** graph, int n, int a, int b, bool* visited){
    vector<int> res;
    if(a == b){
        res.push_back(a);
        return res;
    }
    visited[a] = true;
    for(int i=0;i<n;i++){
        if(i == a) continue;
        if(graph[a][i] && !visited[i]){
            res = getPathDFS(graph, n, i, b, visited);
            if(res.size()!=0) {
                res.push_back(a);
                return res;
            }
        }
    }
    return res;
}

vector<int> getPath(int** graph, int n, int a, int b){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++) visited[i] = false;
    vector<int> res = getPathDFS(graph, n, a, b, visited);
    return res;
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
        graph[a][b] = graph [b][a] = 1;
    }
    int a, b;
    cin >> a >> b;
    vector<int> res = getPath(graph, n, a, b);
    for(auto i: res) cout << i << " ";
    return 0;
}
