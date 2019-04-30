#include <bits/stdc++.h>
using namespace std;

typedef struct Node Node;

struct Node{
    int data;
    Node *left, *right;
};

Node* newNode(int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
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
    root = newNode(50);
    root->left = newNode(30);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right = newNode(70);
    root->right->left = newNode(60);
    root->right->right = newNode(80);
    inOrder(root);
    return 0;
}