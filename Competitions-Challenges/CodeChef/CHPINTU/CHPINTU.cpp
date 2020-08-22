#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t-->0){
        int m, n, res = INT_MAX;
        cin >> m >> n;
        unordered_map<int, int> lookup;
        int* arr = new int[m];
        for(int i=0;i<m;i++){
            cin >> arr[i];
        }
        for(int i=0;i<m;i++){
            int temp;
            cin >> temp;
            if(lookup.count(arr[i]) == 0) lookup[arr[i]] = temp;
            else lookup[arr[i]] += temp;
        }
        for(const auto& ele: lookup){
            res = (ele.second < res)?ele.second:res;
        }
        cout << res << "\n";
    }
    return 0;
}