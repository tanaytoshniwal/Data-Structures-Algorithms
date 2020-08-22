#include <bits/stdc++.h>
using namespace std;
int getMin(int *arr, int n){
    int* chocolates = new int[n];
    chocolates[0] = 1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) chocolates[i] = chocolates[i-1]+1;
        else chocolates[i] = 1;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            if(chocolates[i]>chocolates[i+1]) continue;
            else chocolates[i] = chocolates[i+1]+1;
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++) sum += chocolates[i];
    return sum;
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << getMin(arr, n);
    delete []arr;
    return 0;
}