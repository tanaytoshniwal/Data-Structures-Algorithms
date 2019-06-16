#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll* arr = new ll[n];
        int flag = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]<0) flag++;
        }
        ll pos_a = LONG_MIN, pos_b = LONG_MIN, neg_a = LONG_MAX, neg_b = LONG_MAX;
        for(int i=0;i<n;i++){
            if(arr[i] > pos_a){
                pos_b = pos_a;
                pos_a = arr[i];
            }
            else if(arr[i] > pos_b) pos_b = arr[i];
            if(arr[i] < neg_a){
                neg_b = neg_a;
                neg_a = arr[i];
            }
            else if(arr[i] < neg_b) neg_b = arr[i];
        }
        if(flag>1) cout << max(pos_a*pos_b, neg_a*neg_b) << endl;
        else cout << pos_a * pos_b << endl;
    }
    return 0;
}