#include <bits/stdc++.h>
using namespace std;
int gemstones(vector<string> arr) {
    int count = 0;
    vector<int> cnt(26, 0);
    for(auto item: arr){
        set<char> st;
        for(char c: item){
            st.insert(c);
        }
        for(set<char>::iterator it = st.begin();it!=st.end();it++){
            cnt[*it - 97]++;
        }
    }
    for(char c: cnt) if(c == arr.size()) count++;
    return count;
}
int main(){
    ofstream fout(getenv("OUTPUT_PATH"));
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }
    int result = gemstones(arr);
    fout << result << "\n";
    fout.close();
    return 0;
}
