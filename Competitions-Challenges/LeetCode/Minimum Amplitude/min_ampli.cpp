#include <bits/stdc++.h>
using namespace std;

int getminiAmplitude(int* arr, int n) {
    if(n <= 4) return 0;
    sort(arr, arr+4);
    int maxi[4], mini[4];

    maxi[3] = mini[0] = arr[0];
    maxi[2] = mini[1] = arr[1];
    maxi[1] = mini[2] = arr[2];
    maxi[0] = mini[3] = arr[3];

    for(int i=4; i<n; i++) {
        if(arr[i] > maxi[0]) {
            maxi[3] = maxi[2];
            maxi[2] = maxi[1];
            maxi[1] = maxi[0];
            maxi[0] = arr[i];
        }
        else if(arr[i] > maxi[1]) {
            maxi[3] = maxi[2];
            maxi[2] = maxi[1];
            maxi[1] = arr[i];
        }
        else if(arr[i] > maxi[2]) {
            maxi[3] = maxi[2];
            maxi[2] = arr[i];
        }
        else if(arr[i] > maxi[3]) {
            maxi[3] = arr[i];
        }

        if(arr[i] < mini[0]) {
            mini[3] = mini[2];
            mini[2] = mini[1];
            mini[1] = mini[0];
            mini[0] = arr[i];
        }
        else if(arr[i] < mini[1]) {
            mini[3] = mini[2];
            mini[2] = mini[1];
            mini[1] = arr[i];
        }
        else if(arr[i] < mini[2]) {
            mini[3] = mini[2];
            mini[2] = arr[i];
        }
        else if(arr[i] < mini[3]) {
            mini[3] = arr[i];
        }
    }

    int ans = maxi[3] - mini[0];
    ans = min(ans, maxi[2] - mini[1]);
    ans = min(ans, maxi[1] - mini[2]);
    ans = min(ans, maxi[0] - mini[3]);

    return ans;
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << getminiAmplitude(arr, n);
    delete[] arr;
    return 0;
}