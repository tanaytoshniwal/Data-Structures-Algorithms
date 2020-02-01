#include <bits/stdc++.h>
using namespace std;
void rotate(int **arr, int n){
    for(int layer=0;layer<n/2;layer++){
        int start = layer, end = n-layer-1;
        for(int i=start;i<end;i++){
            int temp = arr[start][i];
            arr[start][i] = arr[end-(i-start)][start];
            arr[end-(i-start)][start] = arr[end][end-(i-start)];
            arr[end][end-(i-start)] = arr[i][end];
            arr[i][end] = temp;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    rotate(arr, n);
    cout << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}