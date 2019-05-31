#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {

	// Write your code here
    int n;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<long>());
    if(arr[2] + arr[1] > arr[0]) cout << arr[2] << " " << arr[1] << " " << arr[0];
    else cout << -1;
}