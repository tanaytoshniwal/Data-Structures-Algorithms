#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        arr.push_back(t);
    }
    sort(arr.begin(), arr.end(), greater<int>());
    long sum = 0;
    int exp = 0;
    for(int i: arr)
        sum += (i * pow(2, exp++));
    cout << sum;
    return 0;
}