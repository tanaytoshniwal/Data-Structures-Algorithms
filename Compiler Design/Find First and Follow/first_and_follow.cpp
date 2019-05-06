#include <bits/stdc++.h>
using namespace std;
string first(string [], int, char);
bool is_variable(char c){
    return ((int)c) >= 65 && ((int)c) <= 90;
}
string remove_duplicates(string s){
    set<char> temp;
    for(int i=0;i<s.length();i++){
        temp.insert(s[i]);
    }
    string res = "";
    for(auto i=temp.begin();i!=temp.end();i++){
        res += *i;
    }
    return res;
}
string follow(string input[], int n, char ch){
    string follows = "";
    if(input[0][0] == ch){
        follows += '$';
    }
    for(int i=0;i<n;i++){
        string right = input[i].substr(3);
        for(int j=0;j<right.length();j++){
            if(right[j] == ch){
                if(right[j+1]!='\0') follows += first(input, n, right[j+1]);
                else if(right[j+1] == '\0' && ch != input[i][0]) follows += follow(input, n, input[i][0]);
            }
        }
    }
    return remove_duplicates(follows);
}
string first(string input[], int n, char ch){
    string firsts = "";
    if(!is_variable(ch)){
        firsts += ch;
    }
    for(int i=0;i<n;i++){
        if(input[i][0] == ch){
            string right = input[i].substr(3);
            if(right[0] == '$') firsts += follow(input, n, ch);
            else if(is_variable(right[0])) firsts += first(input, n, right[0]);
            else firsts += right[0];
        }
    }
    return remove_duplicates(firsts);
}
int main(){
    cout << "Enter no. of Productions: ";
    int n;
    cin >> n;
    cout << "Enter " << n << " Productions: " << endl;
    string input[n];
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    cout << "Enter the Element: ";
    char ch;
    cin >> ch;
    string firsts = first(input, n, ch);
    string follows = follow(input, n, ch);
    cout << "First: ";
    for(int i=0;i<firsts.length();i++){
        cout << firsts[i] << " ";
    }
    cout << endl << "Follow: ";
    for(int i=0;i<follows.length();i++){
        cout << follows[i] << " ";
    }
    return 0;
}