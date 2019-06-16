#include <bits/stdc++.h>
using namespace std;
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
string lead(string input[], int n, char ch){
    string leads = "";
    for(int i=0;i<n;i++){
        if(input[i][0] == ch){
            string right = input[i].substr(3);
            if(is_variable(right[0])){
                if(right.length() > 1) leads += right[1];
                if(right[0] != ch) leads += lead(input, n, right[0]);
            }
            else leads += right[0];
        }
    }
    return remove_duplicates(leads);
}
string trail(string input[], int n, char ch){
    string trails = "";
    for(int i=0;i<n;i++){
        if(input[i][0] == ch){
            string right = input[i].substr(3);
            int l = right.length();
            if(is_variable(right[l-1])){
                if(right.length() > 1) trails += right[l-2];
                if(right[l-1] != ch) trails += trail(input, n, right[l-1]);
            }
            else trails += right[l-1];
        }
    }
    return remove_duplicates(trails);
}
int main(){
    cout << "Enter the no. of Productions: ";
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
    string leads = lead(input, n, ch);
    cout << "Lead: ";
    for(int i=0;i<leads.length();i++){
        cout << leads[i] << " ";
    }
    string trails = trail(input, n, ch);
    cout << endl << "Trail: ";
    for(int i=0;i<trails.length();i++){
        cout << trails[i] << " ";
    }
    return 0;
}