#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter the production :";
    string input;
    cin >> input;
    string left = "", right = "";
    bool flag = false;
    for(int i=0;i<input.length();i++){
        if(input[i] == '-' && input[i+1] == '>'){
            i+=2;
            flag = true;
        }
        if(!flag) left += input[i];
        else right += input[i];
    }
    flag = false;
    if(left[0] == right[0]){
        right = right.substr(1);
        string alpha = "", beta = "";
        for(int i=0;i<right.length();i++){
            if(right[i] == '|'){
                i++;
                flag = true;
            }
            if(!flag) alpha += right[i];
            else beta += right[i];
        }
        cout << left[0] << " -> " << beta << left[0] << "'" << endl;
        cout << left[0] << "' -> " << alpha << left[0] << "'|E" << endl;
    }
    return 0;
}