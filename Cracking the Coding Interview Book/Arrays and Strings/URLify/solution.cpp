#include <bits/stdc++.h>
using namespace std;
char* url(char str[], int n){
    int space_count = 0;
    for(int i=0;i<n;i++)
        if(str[i] == ' ') space_count++;
    int final_length = n + space_count * 2;
    str[final_length] = '\0';
    int ptr = final_length-1;
    for(int i=n-1;i>=0;i--, ptr--){
        if(str[i] == ' '){
            str[ptr] = '0';
            str[ptr-1] = '2';
            str[ptr-2] = '%';
            ptr-=2;
        }
        else {
            str[ptr] = str[i];
        }
    }
    return str;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    char* s = new char[20];
    int n;
    cin.getline(s, 20);
    cin >> n;
    cout << url(s, n);
    return 0;
}