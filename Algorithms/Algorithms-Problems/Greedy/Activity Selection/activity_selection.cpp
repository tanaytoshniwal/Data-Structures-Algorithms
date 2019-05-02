#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct act act;
struct act{
    ll st, et;
};
bool cmp(act a, act b){
    return a.et < b.et;
}
int main(){
    int n;
    cin >> n;
    act *arr = new act[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].st >> arr[i].et;
    }
    sort(arr, arr+n, cmp);
    int c=1;
    act cur = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i].st>=cur.et){
            c++;
            cur = arr[i];
        }
    }
    cout << c;
    return 0;
}