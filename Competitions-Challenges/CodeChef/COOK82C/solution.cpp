#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n, m;
    cin >> n >> m;
    ll *arr = new ll[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    queue<ll> q;
    sort(arr, arr+n);
    int curr = 0, ptr = n-1;
    while(m--){
        int t;
        cin >> t;
        ll max_num;
        for(;curr<t;curr++){
            if(ptr>=0 && (q.empty() || arr[ptr] > q.front())){
                max_num = arr[ptr--];
            }
            else{
                max_num = q.front();
                q.pop();
            }
            q.push(max_num/2);
        }
        cout << max_num << endl;
    }
    return 0;
}