#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,k;
        scanf("%d %d", &n, &k);
        int min=99999999;
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
            if(arr[i]<min)
                min=arr[i];
        }
        int c=(k-min>0)?k-min:0;
        printf("%d\n", c);
    }
    return 0;
}
