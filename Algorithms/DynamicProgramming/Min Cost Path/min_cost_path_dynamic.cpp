#include <bits/stdc++.h>
using namespace std;
int min_cost(int** input, int start_i, int start_j, int end_i, int end_j, int** output){
    if(start_i == end_i && start_j == end_j) return input[end_i][end_j];
    if(start_i > end_i || start_j > end_j) return INT_MAX;
    if(output[start_i][start_j]>-1) return output[start_i][start_j];
    output[start_i][start_j] = input[start_i][start_j] + min(
        min_cost(input, start_i+1, start_j, end_i, end_j, output),
        min(min_cost(input, start_i+1, start_j+1, end_i, end_j, output),
        min_cost(input, start_i, start_j+1, end_i, end_j, output)));
    return output[start_i][start_j];
}
int main(){
    int n, m;
    cin >> n >> m;
    int **input = new int*[n];
    for(int i=0;i<n;i++){
        input[i] = new int[m];
        for(int j=0;j<m;j++) cin >> input[i][j];
    }
    int **output = new int*[n+1];
    for(int i=0;i<=n;i++){
        output[i] = new int[m+1];
        for(int j=0;j<=m;j++) output[i][j] = -1;
    }
    cout << min_cost(input, 0, 0, n-1, m-1, output);
    for(int i=0;i<n;i++) delete[] input[i];
    delete[] input;
}