#include <bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin >> n;
    long* arr = new long[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long i = 0, cost = 0;
    while(i<n-1){
        long j = i+1;
        while(j<n-1){
            if((abs(arr[i]) > abs(arr[j])) || (abs(arr[i]) == abs(arr[j]) && arr[i] > 0)) break;
            else j++;
        }
        cost += (j-i)*arr[i] + (pow(j,2)-pow(i,2))*pow(arr[i],2);
        i = j;
    }
    cout << cost;
    return 0;
}