#include<iostream>
#include <queue>
#include<cstdlib>
#include <stack>
using namespace std;
template <typename T>

class BinaryTreeNode{
	public:
		T data;
		BinaryTreeNode* left;
		BinaryTreeNode* right;
		
		BinaryTreeNode(T data){
			this->data=data;
			left=NULL;
			right=NULL;
			
		}
		
		~BinaryTreeNode(){
			delete left;
			delete right;
		}
		
};

BinaryTreeNode<int>* takeInput()
{
	int rootData;
	cout<<"Enter data"<<endl;
	cin>>rootData;
	if(rootData==-1)
	{
		return NULL;
	}
	BinaryTreeNode<int>* root=new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int>*leftChild=takeInput();
	BinaryTreeNode<int>*rightChild=takeInput();
	root->left=leftChild;
	root->right=rightChild;
	return root;
	
}
void preorder(BinaryTreeNode<int>*root)//print root first and then childrens 
{
	if(root==NULL)
	{
		return;
		
	}
	cout<<root->data<<",";
	preorder(root->left);
	preorder(root->right);
	
}

void inorder(BinaryTreeNode<int>*root)//print left child first then root then right child 
{
	if(root==NULL)
	{
		return;
		
	}
	inorder(root->left);
	cout<<root->data<<",";
	inorder(root->right);
	
}

void postorder(BinaryTreeNode<int>*root)//print childrens first and then root
{
	if(root==NULL)
	{
		return;
		
	}
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<",";
	
}
//driver code
int main()
{
	//1 2 3 4 5 6 7 -1 -1 -1 8 -1 -1 -1 9 10 -1 -1 11 -1 -1 -1 -1
	
	BinaryTreeNode<int>* root=takeInput();
    //using dfs showing preorder, inorder, postorder traversal 
    cout<<"preorder traversal of the given tree is :"<<endl;
	preorder(root);//calling function for preorder traversal 
	cout<<endl;
	cout<<"inorder traversal of the given tree is :"<<endl;
		
	inorder(root);//calling function for inorder traversal
		cout<<endl;
	cout<<"postorder traversal of the given tree is :"<<endl;
	postorder(root); //calling function for postorder traversal
	cout<<endl;
	
	delete root; 
	
	
 } 