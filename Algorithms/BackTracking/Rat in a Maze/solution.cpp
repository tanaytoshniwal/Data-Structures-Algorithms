#include <bits/stdc++.h>
using namespace std;

void solve(int arr[][20], int* output[], int row, int col, int size){
    if(row < 0 || col < 0 || row >= size || col >= size)
        return;
    if(arr[row][col] == 0 || output[row][col] == 1)
        return;
    output[row][col] = 1;
    if(row==size-1 && col == size-1){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cout << output[i][j] << " ";
            }
        }
        cout << endl;
        output[row][col] = 0;
        return;
    }
    solve(arr, output, row+1, col, size);
    solve(arr, output, row-1, col, size);
    solve(arr, output, row, col+1, size);
    solve(arr, output, row, col-1, size);
    output[row][col] = 0;
}
void ratInAMaze(int maze[][20], int n){
    int** output = new int*[n];
    for(int i=0;i<n;i++){
        output[i] = new int[n];
        for(int j=0;j<n;j++){
            output[i][j] = 0;
        }
    }
    solve(maze, output, 0, 0, n);
}
int main(){

  int n; 
  cin >> n ;
  int maze[20][20];
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> maze[i][j];
        }		
  }
  ratInAMaze(maze, n);
}