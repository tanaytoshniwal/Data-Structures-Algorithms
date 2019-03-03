#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    vector<int> arr(26,0);
    int n=s.size(),min_count=0,max_count=0;

    if(n==1)
        return "YES";

    for(int i=0;i<n;i++)
        arr[s[i]-'a']++;

    arr.erase(remove(arr.begin(),arr.end(),0),arr.end());
    int max=*max_element(arr.begin(),arr.end());
    int min=*min_element(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        if(arr[i]==max)
            max_count++;
        else if(arr[i]==min)
            min_count++;
    }

    if(max==min)
        return "YES";
    if(min_count + max_count!=arr.size())
        return "NO";
    if(min == 1 && min_count==1)
        return "YES";
    if(max_count==1 && max==min+1)
        return "YES";

    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
