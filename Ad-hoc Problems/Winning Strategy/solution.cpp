#include<bits/stdc++.h>
using namespace std;
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(abs(arr[i]-i-1) > 2){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES" << endl;
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            swap(arr[i], arr[i+1]);
            count++;
        }
    }
    cout << count;
    return 0;
}