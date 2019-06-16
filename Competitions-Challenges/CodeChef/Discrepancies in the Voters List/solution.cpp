#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int *arr = new int[n1+n2+n3];
    int *res = new int[n1+n2+n3];
    for(int i=0;i<n1+n2+n3;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n1+n2+n3);
    int count = 0, ind = 0;
    for(int i=1;i<n1+n2+n3;i++){
        if(arr[i] == arr[i-1]){
            count++;
            res[ind++] = arr[i];
            while(arr[i] == arr[i-1])i++;
        }
    }
    cout << count << endl;
    for(int i=0;i<ind;i++){
        cout << res[i] << endl;
    }
    return 0;
}