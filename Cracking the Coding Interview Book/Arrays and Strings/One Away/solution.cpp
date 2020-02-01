#include <bits/stdc++.h>
using namespace std;
bool oneAway(string s1, string s2){
    int l1 = s1.length(), l2 = s2.length();
    if(abs(l1-l2)>=2) return false;
    if(l1 == l2){
        int ctr = 0;
        for(int i=0;i<l1;i++){
            if(s1[i] != s2[i]) ctr++;
        }
        return ctr<=1;
    }
    else{
        int i=0, j=0;
        string t1 = (l1>l2)?s1:s2;
        string t2 = (l1<l2)?s1:s2;
        while(i<l1 && j<l2){
            if(t1[i]!=t2[j]){
                if(i!=j) return false;
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        return true;
    }
}
bool oneAway2(string s1, string s2){
    int l1 = s1.length(), l2 = s2.length();
    if(abs(l1-l2)>=2) return false;
    if(l1<l2){
        string t = s2;
        s2 = s1;
        s1 = t;
    }
    int i=0, j=0;
    bool flag = false;
    while(i<l1 && j<l2){
        if(s1[i]!=s2[j]){
            if(flag) return false;
            flag = true;
            if(l1 == l2) j++;
        }
        else j++;
        i++;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    cout << oneAway(s1, s2) << endl;
    cout << oneAway2(s1, s2) << endl;
    return 0;
}