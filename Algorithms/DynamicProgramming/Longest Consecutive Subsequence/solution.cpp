#include<bits/stdc++.h>
using namespace std;
vector<int> longestSubsequence(int *arr, int n){
	map<int, bool> flag;
    map<int, int> m;
    for(int i=0;i<n;i++){
        flag[arr[i]] = true;
        if(m.find(arr[i])==m.end())
            m[arr[i]] = i;
    }
    int start = 0, j = 0, length = 1, max_length = 0, max_start = 0;
    for(int i=0;i<n;i++){
        if(!flag[arr[i]])
            continue;
        for(start = arr[i], length = 1,j=arr[i]+1;m.find(j)!=m.end();j++){
            flag[j]=false;
            length++;
        }
        for(j=arr[i]-1;m.find(j)!=m.end();j--){
            flag[i]=false;
            length++;
            start = j;
        }
        if((length > max_length) || (length == max_length && m[max_start] > m[start])){
            max_length = length;
            max_start = start;
        }
    }
    vector<int> res;
    for(int i=max_start;i<max_start+max_length;i++){
        res.push_back(i);
    }
    return res;
}
int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	vector<int> output = longestSubsequence(input, n);
	for(int i = 0; i < output.size(); i++) {
		cout << output[i] << endl;
	}
}
