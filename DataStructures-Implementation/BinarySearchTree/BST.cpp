#include <bits/stdc++.h>
using namespace std;

typedef struct Node Node;

struct Node{ 
    int data; 
    Node *left, *right; 
};

Node* insert(Node* root, int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    if (!root) return newNode;
    if (data < root->data) 
        root->left  = insert(root->left, data); 
    else if (data > root->data) 
        root->right = insert(root->right, data);
    return root; 
}

void inOrder(Node* root){
    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main(){
    Node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80);
    inOrder(root);
    return 0;
}