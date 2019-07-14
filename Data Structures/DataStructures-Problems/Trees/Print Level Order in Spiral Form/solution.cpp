#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void printSpiral(struct Node *root);
/* Driver program to test above functions*/
int main()
{
   int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        Node *child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
    printSpiral(root);
    cout<<endl;
  }
    return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
int height(Node* root){
    if(root == NULL) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l, r)+1;
}
void print(Node* root, int level, bool flag){
    if(root == NULL) return;
    if(level == 1){
        cout << root->data << " ";
    }
    else{
        if(flag){
            print(root->left, level-1, flag);
            print(root->right, level-1, flag);
        }
        else{
            print(root->right, level-1, flag);
            print(root->left, level-1, flag);
        }
    }
}
void printSpiral(Node *root){
    if(root == NULL) return;
    int h = height(root);
    bool flag = false;
    for(int i=1;i<=h;i++){
        print(root, i, flag);
        flag = !flag;
    }
}
