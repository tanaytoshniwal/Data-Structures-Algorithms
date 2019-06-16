#include <bits/stdc++.h>
using namespace std;
const string key[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void _printKeypad(int num, string out){
    if(num == 0){
        cout << out << endl;
        return;
    }
    int cur = num%10;
    num /= 10;
    for(int i=0;i<key[cur].length();i++){
        _printKeypad(num, key[cur][i] + out);
    }
}
void printKeypad(int num){
    _printKeypad(num, "");
}
int main(){
    int num;
    cin >> num;
    printKeypad(num);
    return 0;
}