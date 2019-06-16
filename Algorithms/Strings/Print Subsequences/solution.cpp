#include <bits/stdc++.h>
using namespace std;
void print_subsequences(string input, string output){
    if(input.length() == 0){
        cout << output << endl;
        return;
    }
    char ch = input[0];
    input = input.substr(1);
    print_subsequences(input, output);
    print_subsequences(input, output+ch);
}
int main(){
    string str = "abc";
    print_subsequences(str, "");
    return 0;
}