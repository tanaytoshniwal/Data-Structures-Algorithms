#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int low = 0, high = n*n;
    for(int i=0;i<n;i++){
        // spaces
        for(int j=0;j<i;j++) cout << " ";
        for(int j=0;j<n-i;j++){
            cout << ++low;
            cout << "*";
        }
        for(int j=0;j<n-i;j++){
            cout << ++high;
            if(j!=n-i) cout << "*";
        }
        cout << endl;
    }
    return 0;
}