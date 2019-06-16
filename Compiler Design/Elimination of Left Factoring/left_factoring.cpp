#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "Enter the Production: ";
    string input;
    cin >> input;
    string right_production = input.substr(3);
    string left = "", right = "", common = "";
    bool flag = false;
    for(int i=0;i<right_production.length();i++){
        if(right_production[i] == '|') {
            flag = true;
            i++;
        }
        if(!flag) left += right_production[i];
        else right += right_production[i];
    }
    for(int i=0;i<min(left.length(), right.length());i++){
        if(left[i] == right[i]) common += left[i];
        else{
            left = left.substr(i);
            right = right.substr(i);
            break;
        }
    }
    cout << input.substr(0, 3) << common << "X" << endl;
    cout << "X -> " << left << "|" << right << endl;
    return 0;
}