#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int cost = 0;
    for(int i=0;i<n-1;){
        if(s1[i] != s2[i]){
            cost++;
            if(s1[i] != s1[i+1] && s1[i+1] != s2[i+1]){
                char c = s1[i];
                s1[i] = s1[i+1];
                s1[i+1] = c;
                i+=2;
            }
            else{
                s1[i] = (s1[i] == '1')?'0':'1';
                i++;
            }
        }
        else i++;
    }
    if(s1[n-1] != s2[n-1]) cost++;
    cout << cost;
    return 0;
}