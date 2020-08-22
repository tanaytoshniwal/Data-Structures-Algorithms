#include <bits/stdc++.h>
using namespace std;

void dfs(int** graph, int n, int sv, bool* visited, set<int>& temp){
    visited[sv] = true;
    temp.insert(sv);
    for(int i=0;i<n;i++){
        if(i==sv) continue;
        if(graph[sv][i] && !visited[i])
            dfs(graph, n, i, visited, temp);
    }
}

vector<set<int>> getConnectedComponents(int** graph, int n){
    vector<set<int>> res;
    bool* visited = new bool[n];
    for(int i=0;i<n;i++) visited[i] = false;
    for(int i=0;i<n;i++){
        set<int> temp;
        if(!visited[i]){
            dfs(graph, n, i, visited, temp);
            res.push_back(temp);
            temp.clear();
        }
    }
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
        graph[a][b] = graph[b][a] = 1;
    }
    vector<set<int>> res = getConnectedComponents(graph, n);
    for(auto i: res){
        for(auto j: i) cout << j << " ";
        cout << endl;
    }
    return 0;
}