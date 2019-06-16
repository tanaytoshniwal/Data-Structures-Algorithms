#include <bits/stdc++.h>
using namespace std;
typedef long ll;
int main(){
    ll n, m;
    cin >> n >> m;
    ll* arr = new ll[m];
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    n-=arr[0];
    arr[0] = n;
    for(int i=1;i<m;i++){
        int cur,p = (i-1)/2;
        if(arr[p]%2==0) cur = arr[p]/2;
        else{
            if(i%2==1) cur = (arr[p]/2)+1;
            else cur = arr[p]/2;
        }
        //cout<< arr[i] << ":"<<cur << endl;
        if(arr[i]<=cur){
            n -= arr[i];
            arr[i] = cur-arr[i];
        }
        else{
            arr[i] = 0;
            n -= cur;
        }
    }
    //for(int i=0;i<m;i++)cout << arr[i] << endl;
    cout << n;
    return 0;
}