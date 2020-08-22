#include <bits/stdc++.h>
using namespace std;
int min_cost(int** input, int start_i, int start_j, int end_i, int end_j){
    if(start_i == end_i && start_j == end_j) return input[end_i][end_j];
    if(start_i > end_i || start_j > end_j) return INT_MAX;
    return input[start_i][start_j] + min(
        min_cost(input, start_i+1, start_j, end_i, end_j),
        min(min_cost(input, start_i+1, start_j+1, end_i, end_j),
        min_cost(input, start_i, start_j+1, end_i, end_j))
    );
}
int main(){
    int n, m;
    cin >> n >> m;
    int **input = new int*[n];
    for(int i=0;i<n;i++){
        input[i] = new int[m];
        for(int j=0;j<m;j++) cin >> input[i][j];
    }
    cout << min_cost(input, 0, 0, n-1, m-1);
    for(int i=0;i<n;i++) delete[] input[i];
    delete[] input;
}