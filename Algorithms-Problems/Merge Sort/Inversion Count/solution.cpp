#include <bits/stdc++.h>
using namespace std;
#define MAXN 100005
long long solve(int arr[], int n){
    if(n==0 || n==1) return 0;
    long long mid = n/2;
    int *left = new int[mid];
    int *right = new int[n-mid];
    int k=0;
    for(int i=0;i<mid;i++){
        left[k++] = arr[i];
    }
    k=0;
    for(int i=mid;i<n;i++){
        right[k++] = arr[i];
    }
    long long leftans = solve(left, mid);
    long long rightans = solve(right, n-mid);
    sort(left, left+mid);
    sort(right, right+(n-mid));
    int i=0, j=0;k=0;
    long long ans = 0;
    int *res = new int[n];
    while((i<mid)&&(j<(n-mid))){
        if(left[i]<=right[j]){
            res[k++] = left[i++];
        }
        else{
            res[k++] = right[j++];
            ans+=mid-i;
        }
    }
    while(i<mid)res[k++]=left[i++];
    while(j<(n-mid))res[k++]=right[j++];
    return ans+leftans+rightans;
}
int main()
{
	int n,A[MAXN];
	cin>>n;
	for(int i = 0; i < n ; i++){
		cin>>A[i];
	}
	cout<<solve(A,n)<<endl;
}