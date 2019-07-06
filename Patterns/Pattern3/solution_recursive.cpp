#include <bits/stdc++.h>
using namespace std;
void printSpaces(int n){
    if(n==1) return;
    printSpaces(n-1);
    cout << " ";
}
void printLine(int low, int high){
    if(low > high) return;
    cout << low << " ";
    printLine(low+1, high);
}
void print(int n){
    if(n == 0) return;
    printSpaces(n);
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