#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++) cout << n-i+j;
        for(int j=0;j<n-i;j++) cout << n;
        cout << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    print(n);
}


