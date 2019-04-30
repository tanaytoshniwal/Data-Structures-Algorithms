#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<string, int> freq;
    while(cin>>s){
        if(freq.find(s)==freq.end())
            freq[s] = 1;
        else
            freq[s]++;
    }
    if(freq.size()==0){
        cout << -1;
        return 0;
    }
    map<string, int>::iterator itr;
    for(itr=freq.begin();itr!=freq.end();itr++){
        if(itr->second>1)
            cout << itr->first << " " << itr->second << endl;
    }
	return 0;
}
