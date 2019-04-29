#include<bits/stdc++.h>
using namespace std;
#define N 10

bool isValidVertical(string cross[N], vector<string> words, int index, int row, int col){
    if(words[index].length() > N-row){
        return false;
    }
    for(int i=0;i<words[index].length();i++){
        if(cross[i+row][col] == '+') return false;
    }
    for(int i=0;i<words[index].length();i++){
        if(cross[i+row][col] == '-' || cross[i+row][col] == words[index][i]){}
        else return false;
    }
    return true;
}
bool setVertical(string cross[N], vector<string> words, int index, bool helper[], int row, int col){
    for(int i=0;i<words[index].length();i++){
        if(cross[i+row][col] == '-'){
            helper[i] = false;
        }
        else{
            helper[i] = true;
        }
        cross[i+row][col] = words[index][i];
    }
}
bool resetVertical(string cross[N], vector<string> words, int index, bool helper[], int row, int col){
    for(int i=0;i<words[index].length();i++){
        if(helper[i] == false){
            cross[row+i][col] = '-';
        }
    }
}
bool isValidHorizontal(string cross[N], vector<string> words, int index, int row, int col){
    if(words[index].length() > N-col){
        return false;
    }
    for(int i=0;i<words[index].length();i++){
        if(cross[row][i+col] == '+') return false;
    }
    for(int i=0;i<words[index].length();i++){
        if(cross[row][col+i] == '-' || cross[row][col+i] == words[index][i]){}
        else return false;
    }
    return true;
}
bool setHorizontal(string cross[N], vector<string> words, int index, bool helper[], int row, int col){
    for(int i=0;i<words[index].length();i++){
        if(cross[row][col+i] == '-'){
            helper[i] = false;
        }
        else{
            helper[i] = true;
        }
        cross[row][col+i] = words[index][i];
    }
}
bool resetHorizontal(string cross[N], vector<string> words, int index, bool helper[], int row, int col){
    for(int i=0;i<words[index].length();i++){
        if(helper[i] == false){
            cross[row][col+i] = '-';
        }
    }
}

void crossword(string cross[N], vector<string> words, int index){
    if(index >= words.size()){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout << cross[i][j];
            }
            cout << endl;
        }
        return;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(cross[i][j] == '-' || cross[i][j] == words[index][0]){
                if(isValidVertical(cross, words, index, i, j)){
                    bool helper[words[index].length()];
                    setVertical(cross, words, index, helper, i, j);
                    crossword(cross, words, index + 1);
                    resetVertical(cross, words, index, helper, i, j);
                }
                if(isValidHorizontal(cross, words, index, i, j)){
                    bool helper[words[index].length()];
                    setHorizontal(cross, words, index, helper, i, j);
                    crossword(cross, words, index + 1);
                    resetHorizontal(cross, words, index, helper, i, j);
                }
            }
        }
    }
}

int main() {
    string cross[N];
    for(int i=0;i<N;i++){
        cin >> cross[i];
    }
    vector<string> words;
    string s;
    cin >> s;
    int j=0, k=0;
    for(int i=0;i<s.length();i++){
        k++;
        if(s[i]==';' || i==s.length()-1){
            if(i!=s.length()-1) words.push_back(s.substr(j, k-1));
            else words.push_back(s.substr(j, k));
            j=i+1;
            k=0;
        }
    }
    crossword(cross, words, 0);
    return 0;
}