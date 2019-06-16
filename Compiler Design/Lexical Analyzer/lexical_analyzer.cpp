#include <bits/stdc++.h>
using namespace std;

char operators[5] = {'+','-','*','/','%'};
string keywords[16] = {"break","case","char","continue","double",
                    "else","float","for","if","int",
                    "main","long","return","switch","void","while"};
bool is_keyword(string s){
    for(int i=0;i<16;i++){
        if(s.compare(keywords[i]) == 0) return true;
    }
    return false;
}

int main(){
    FILE *file = fopen("sample.c", "r");
    char ch;
    string buffer = "";
    while((ch = fgetc(file)) != EOF){
        for(int i=0;i<5;i++){
            if(ch == operators[i]){
                cout << ch << " is an OPERATOR" << endl;
            }
        }
        if(isalnum(ch)){
            buffer += ch;
        }
        else if((ch == ' ' || ch == '\n') && buffer.size() > 0){
            if(is_keyword(buffer))
                cout << buffer << " is a KEYWORD" << endl;
            else
                cout << buffer << " is an IDENTIFIER" << endl;
            buffer = "";
        }
    }
    fclose(file);
    return 0;
}