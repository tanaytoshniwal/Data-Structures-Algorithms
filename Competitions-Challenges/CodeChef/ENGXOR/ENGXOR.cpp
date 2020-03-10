#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld t;
    scanf("%lld", &t);
    while(t-->0){
        lld n, q;
        scanf("%lld%lld", &n, &q);
        lld* arr = new lld[n];
        int even = 0, odd = 0;
        for(int i=0;i<n;i++){
            scanf("%lld", &arr[i]);
            even = (__builtin_popcount(arr[i])%2 == 0) ? even+1 : even;
        }
        odd = n - even;
        
        while(q-->0){
			lld query, evens = 0, odds = 0;
			scanf("%lld", &query);
			lld count = __builtin_popcount(query);
            evens = (count%2 == 0) ? even : odd;
            odds = (count%2 == 0) ? odd : even;
			printf("%lld %lld\n", evens, odds);
        }
    }
    return 0;
}