#include <bits/stdc++.h>
using namespace std;
typedef struct jewel jewel;
struct jewel{
    int mass;
    int value;
};
bool compare(jewel a, jewel b){
    return (a.value != b.value)?a.value > b.value:a.mass < b.mass;
}
int main(){
    int n, k;
    cin >> n >> k;
    jewel* arr = new jewel[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].mass >> arr[i].value;
    }
    sort(arr, arr+n, compare);
    multiset<int> m;
    for(int i=0;i<k;i++){
        int temp;
        cin >> temp;
        m.insert(temp);
    }
    long ans = 0;
    for(int i=0;i<n;i++){
        if(m.empty()) break;
        else if(m.lower_bound(arr[i].mass) != m.end()){
            ans += arr[i].value;
            m.erase(m.lower_bound(arr[i].mass));
        }
    }
    cout << ans;
    return 0;
}