#include <bits/stdc++.h>
using namespace std;

vector<int> getPath(int** graph, int n, int a, int b, bool* visited){
    vector<int> res;
    if(a == b){
        res.push_back(a);
        return res;
    }
    queue<int> q;
    map<int, int> lookup;
    q.push(a);
    visited[a] = true;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        if(t == b){
            res.push_back(t);
            return res;
        }
        for(int i=0;i<n;i++){
            if(graph[t][i]&&!visited[i]){
                q.push(i);
                lookup[i] = t;
                visited[i] = true;
                if(i == b){
                    while(i!=a){
                        res.push_back(i);
                        i = lookup[i];
                    }
                    res.push_back(a);
                    return res;
                }
            }
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
    bool* visited = new bool[n];
    for(int i=0;i<n;i++) visited[i] = false;
    int a, b;
    cin >> a >> b;
    vector<int> res = getPath(graph, n, a, b, visited);
    for(auto i: res) cout << i << " ";
    return 0;
}