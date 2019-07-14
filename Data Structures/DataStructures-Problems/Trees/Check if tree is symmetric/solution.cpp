#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int key;
	struct Node* left, *right;
};
Node *newNode(int key)
{
	Node *temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return (temp);
}
bool isSymmetric(struct Node* root);
void inorder(struct Node *root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->key<<' ';
    inorder(root->right);
}
int main()
{
  int t;
  struct Node *child;
  cin>>t;
  while (t--)
  {
     int N1, N2;
     cin>>N1>>N2;
     struct Node *root1 = NULL;
     struct Node *root2 = NULL;
     struct Node *root = NULL;
     map<int, Node*> m;
     while (N1--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root1 == NULL)
             root1 = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     m.clear();
     while (N2--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root2 == NULL)
             root2 = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     int N;
     cin>>N;
     root = newNode(N);
     root->left=root1;
     root->right=root2;
     //inorder(root);
     if(isSymmetric(root))cout<<"True"<<endl;
     else cout<<"False"<<endl;
  }
  return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*
Structure of the node of the tree is as
struct Node
{
	int key;
	struct Node* left, *right;
};
*/
// complete this function
// return true/false if the is Symmetric or not
bool isIdentical(Node *r1, Node *r2){
    if(r1 == NULL && r2 == NULL) return true;
    if(r1 && r2){
        return r1->key == r2->key && isIdentical(r1->left, r2->right) && isIdentical(r1->right, r2->left);
    }
    return false;
}
bool isSymmetric(struct Node* root){
    return isIdentical(root ,root);
}