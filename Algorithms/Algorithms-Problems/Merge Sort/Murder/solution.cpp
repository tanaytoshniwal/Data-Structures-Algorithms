#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll count(ll* arr, int n){
    if(n==1 || n==0) return 0;
    int mid = n/2;
    ll sum = 0;
    ll *left = new ll[mid];
    ll *right = new ll[n-mid];
    int k=0;
    for(int i=0;i<mid;i++){
        left[k++] = arr[i];
    }
    k=0;
    for(int i=mid;i<n;i++){
        right[k++] = arr[i];
    }
    sum += count(left, mid);
    sum += count(right, n-mid);

    sort(left, left+mid);
    sort(right, right+n-mid);
    int i=0,j=0;k=0;
    while(i<mid && j<n-mid){
        if(left[i] < right[j]){
            sum += ((n-mid)-j)*left[i];
            i++;
        }
        else j++;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll* arr = new ll[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        cout << count(arr, n) << endl;
    }
    return 0;
}