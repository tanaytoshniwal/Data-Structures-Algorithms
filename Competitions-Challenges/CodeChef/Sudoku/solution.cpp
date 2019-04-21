#include <bits/stdc++.h>
using namespace std;
bool print(int arr[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}
bool check(int arr[9][9], int row, int col, int val){
    // row
    for(int i=0;i<9;i++){
        if(arr[i][col] == val) return false;
    }
    // col
    for(int i=0;i<9;i++){
        if(arr[row][i] == val) return false;
    }
    // small 3x3 grid
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i+row-(row%3)][j+col-(col%3)] == val) return false;
        }
    }
    return true;
}
bool findEmpty(int arr[9][9], int &row, int &col){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(arr[i][j]==0){
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}
bool solve(int arr[9][9]){
    // check empty positions
    int row, col;
    if(!findEmpty(arr, row, col)){
        return true;
    }

    for(int k=1;k<=9;k++){
        if(check(arr, row, col, k)){
            arr[row][col] = k;
            if(solve(arr)) return true;
            arr[row][col] = 0;
        }
    }
    return false;
}
int main(){
    int board[9][9];
    for(int i=0;i<9;i++){
        string num;
        cin >> num;
        for(int j=0;j<num.length();j++){
            board[i][j] =  num[j]-48;
        }
    }
    solve(board);
    print(board);
    return 0;
}