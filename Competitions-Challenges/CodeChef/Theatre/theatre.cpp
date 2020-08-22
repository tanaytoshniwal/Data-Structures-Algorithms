#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long long total = 0;
    cin >> t;
    while(t-->0){
        int n;
        cin >> n;
        int arr[4][4] = {0};
        while(n-->0){
            char show;
            int time;
            cin >> show >> time;
            arr[show - 'A'][(time/3)-1]++;
        }
        int max_val[4] = {0};
        for(int i=0;i<4;i++){
            max_val[i] = max(max(arr[i][0], arr[i][1]), max(arr[i][2], arr[i][3]));
        }
        sort(max_val, max_val+4, greater<int>());
        int price = 100;long long sum = 0;
        for(const auto& val: max_val){
            if(val!=0){
                sum += (val*price);
                price -= 25;
            }
            else sum -= 100;
        }
        total += sum;
        cout << sum << "\n";
    }
    cout << total << "\n";
    return 0;
}