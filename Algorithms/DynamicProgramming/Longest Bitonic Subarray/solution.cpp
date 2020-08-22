#include <bits/stdc++.h>
using namespace std;

int longestBitonicSubarray(int *input, int n) {
    int* increasing = new int[n];
    int* decreasing = new int[n];
    increasing[0] = decreasing[n-1] = 1;
    for(int i=1;i<n;i++){
        increasing[i] = 1;
        for(int j=i-1;j>=0;j--){
            if(input[j]<input[i]){
                increasing[i] = max(increasing[i], 1+increasing[j]);
            }
        }
    }
    for(int i=n-2;i>=0;i--){
        decreasing[i] = 1;
        for(int j=i+1;j<n;j++){
            if(input[j]<input[i]){
                decreasing[i] = max(decreasing[i], 1+decreasing[j]);
            } 
        }
    }
    int res = 0;
    for(int i=0;i<n;i++) res = max(res, increasing[i]+decreasing[i]-1);
    delete[] increasing;
    delete[] decreasing;
    return res;
}
int main() {
  int n, input[100000];
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>input[i];
  }
  cout<<longestBitonicSubarray(input, n);
  return 0;
}


