#include <bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(vector<int> input){
    set<int> s;
    vector<int> result;
    for(int i=0;i<input.size();i++){
        if(s.find(input[i]) == s.end()){
            s.insert(input[i]);
            result.push_back(input[i]);
        }
    }
    return result;
}
int main(){
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin >> input[i];
    }
    vector<int> result = removeDuplicates(input);
    for(auto a: result){
        cout << a << " ";
    }
    return 0;
}