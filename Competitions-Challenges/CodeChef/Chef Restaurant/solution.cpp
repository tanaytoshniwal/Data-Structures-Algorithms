#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> time;
        for(int i=0;i<n;i++){
            int a, b;
            cin >> a >> b;
            time.push_back(make_pair(a,b));
        }
        sort(time.begin(), time.end());
        for(int i=0;i<m;i++){
            int t;
            cin >> t;
            int bound = lower_bound(time.begin(), time.end(), make_pair(t, 0))-time.begin();
            if(bound == 0){
                cout << time[0].first - t << endl;
            }
            else {
                int res = -1;
                if(time[bound-1].second > t) res = 0;
                else if(bound < time.size()) res = time[bound].first - t;
                cout << res << endl;
            }
        }
    }
    return 0;
}