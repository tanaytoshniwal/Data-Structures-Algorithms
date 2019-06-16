#include <bits/stdc++.h>
using namespace std;
bool is_alpha(char c){
    return (int)c >= 97 && (int)c <= 122;
}
bool is_opr(char c){
    return c == '*' || c == '+' || c == '-' || c == '/' || c == '^';
}
int prec(char c){
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    else return -1;
}
string postfix(string s){
    string res = "";
    stack<char> st;
    st.push('$');
    int n = s.length(); 
    for(int i=0;i<n;i++){
        if((s[i]>='a'&&s[i]<='z')) res+=s[i];
        else if(s[i] == '(') st.push('(');
        else if(s[i] == ')') {
            while(st.top() != '$' && st.top() != '(') {
                char c = st.top();
                st.pop();
                res += c;
            }
            if(st.top() == '(') st.pop(); 
        }
        else { 
            while(st.top() != '$' && prec(s[i]) <= prec(st.top())) {
                char c = st.top();
                st.pop();
                res += c;
            }
            st.push(s[i]);
        }
    }
    while(st.top() != '$'){ 
        char c = st.top();
        st.pop();
        res += c;
    }
    return res;
}
int main(){
    string input;
    cin >> input;
    cout << postfix(input);
}