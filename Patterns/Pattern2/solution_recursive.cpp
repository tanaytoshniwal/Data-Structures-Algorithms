#include <bits/stdc++.h>
using namespace std;
void printLine(int low, int high){
    if(low > high) return;
    cout << low << " ";
    printLine(low+1, high);
}
void print(int n){
    if(n==0) return;
    print(n-1);
    printLine(1, n);
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}