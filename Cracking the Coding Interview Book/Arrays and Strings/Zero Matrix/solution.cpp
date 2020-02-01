#include <bits/stdc++.h>
using namespace std;
void zeroMatrix(int **arr, int n, int m){
    bool rowflag = false, colflag = false;
    for(int i=0;i<n;i++)
        if(arr[i][0] == 0){
            colflag = true;
            break;
        }
    for(int i=0;i<m;i++)
        if(arr[0][i] == 0){
            rowflag = true;
            break;
        }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j] == 0){
                arr[i][0] = arr[0][j] = 0;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(arr[i][0] == 0){
            for(int j=0;j<m;j++){
                arr[i][j] = 0;
            }
        }
    }
    for(int i=1;i<m;i++){
        if(arr[0][i] == 0){
            for(int j=0;j<n;j++){
                arr[j][i] = 0;
            }
        }
    }
    if(rowflag){
        for(int i=0;i<m;i++){
            arr[0][i] = 0;
        }
    }
    if(colflag){
        for(int i=0;i<n;i++){
            arr[i][0] = 0;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    zeroMatrix(arr, n, m);
    cout << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}