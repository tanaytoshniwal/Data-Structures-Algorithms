#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x=1;
    cin >> t;
    while(t--){
        int n, sum = 0, row = 0, col = 0;
        cin >> n;
        int** arr = new int*[n];
        for(int i=0;i<n;i++){
            arr[i] = new int[n];
            unordered_set<int> lkp;
            bool flag = false;
            for(int j=0;j<n;j++){
                cin >> arr[i][j];
                if(lkp.find(arr[i][j]) == lkp.end()) lkp.insert(arr[i][j]);
                else if(!flag) {
                    row++;
                    flag = true;
                }
                if(i==j) sum += arr[i][j];
            }
        }
        for(int j=0;j<n;j++){
            unordered_set<int> lkp;
            bool flag = false;
            for(int i=0;i<n;i++){
                if(lkp.find(arr[i][j]) == lkp.end()) lkp.insert(arr[i][j]);
                else if(!flag) {
                    col++;
                    flag = true;
                }
            }
        }
        cout << "Case #" << x++ << ": " << sum << " " << row << " " << col << "\n";
    }
    return 0;
}