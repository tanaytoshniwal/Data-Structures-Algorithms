#include <bits/stdc++.h>
using namespace std;
void rotate(int **arr, int n){
    arr[0][0] = 0;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}