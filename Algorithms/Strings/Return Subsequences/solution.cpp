#include <bits/stdc++.h>
using namespace std;
int subsequences(string s, string arr[]){
    if(s.size() == 0){
        arr[0] = "";
        return 1;
    }
    string smallString = s.substr(1);
    int smallOutput = subsequences(smallString, arr);
    for(int i=0;i<smallOutput;i++){
        arr[i+smallOutput] = s[0] + arr[i];
    }
    return smallOutput*2;
}
int main(){
    string s = "abc";
    string* arr = new string[(int)pow(2, s.length())];
    int size = subsequences(s, arr);
    for(int i=0;i<size;i++){
        cout << arr[i] << endl;
    }
}