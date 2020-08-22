#include <bits/stdc++.h>
using namespace std;

int getRefillCount(int* flowers, int n, int cap1, int cap2) {
    int refill = 0;
    int can1 = 0, can2 = 0;
    int start = 0, end = n-1;
    while(start < end) {
        if(can1 < flowers[start]) {
            can1 = cap1;
            refill++;
        }
        if(can2 < flowers[end]) {
            can2 = cap2;
            refill++;
        }
        can1 -= flowers[start];
        can2 -= flowers[end];
        start++;
        end--;
    }
    refill = ((start == end) && (flowers[start] > (can1 + can2))) ? refill + 1 : refill;
    return refill;
}

int main() {
    int n;
    cin >> n;
    int* flowers = new int[n];
    for(int i=0;i<n;i++) cin >> flowers[i];
    int capacity1, capacity2;
    cin >> capacity1 >> capacity2;
    cout << getRefillCount(flowers, n, capacity1, capacity2);
    delete[] flowers;
    return 0;
}