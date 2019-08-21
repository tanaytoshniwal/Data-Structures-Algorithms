#include <bits/stdc++.h>
using namespace std;

typedef struct Node Node;

const int SIZE = 26;

struct Node{
    Node* children[SIZE];
    bool isWord;
};

Node* getNode(){
    Node* node = new Node;
    node->isWord = false;
    for(int i=0;i<SIZE;i++)
        node->children[i] = NULL;
    return node;
}

void insert(Node* root, string str){
    Node* temp = root;
    for(auto s: str){
        int index = s - 'a';
        if(!temp->children[index])
            temp->children[index] = getNode();
        temp = temp->children[index];
    }
    temp->isWord = true;
}

bool search(Node* root, string str){
    Node* temp = root;
    for(auto s: str){
        int index = s - 'a';
        if(!temp->children[index])
            return false;
        temp = temp->children[index];
    }
    return temp!=NULL && temp->isWord;
}

int main(){
    cout << "Input Number of Words: ";
    int n;
    cin >> n;
    string* arr = new string[n];

    Node* root = getNode();

    cout << "Input Words: ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        insert(root, arr[i]);
    }

    cout << "Type Search Query: ";
    string s;
    cin >> s;
    if(search(root, s)){
        cout << "It exist!";
    }
    else{
        cout << "It doesn't exist!";
    }
    return 0;
}