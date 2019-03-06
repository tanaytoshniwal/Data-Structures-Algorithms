#include <bits/stdc++.h>
using namespace std;

void maxPositiveSubarray(vector<int> &A) {
    long long cur = 0, sum_so_far = 0;
    int il = 0, ir = 0, ix = -1, iy = -1;
    while(ir<A.size()){
        if(A[ir]>=0){
            cur += (long long) A[ir];
            if(cur>sum_so_far){
                sum_so_far = cur;
                ix = il;
                iy = ir+1;
            }
            else if(cur == sum_so_far){
                if(ir+1-il > iy-ix){
                    ix = il;
                    iy = ir+1;
                }
            }
        }
        else{
            cur = 0;
            il = ir+1;
        }
        ir++;
    }
    if(ix==-1 || iy==-1) cout<<"No such subarray";
    else {
        for(int i=ix;i<iy;i++) cout<<A[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        int t; cin>>t;
        arr.push_back(t);
    }
    maxPositiveSubarray(arr);
    return 0;
}