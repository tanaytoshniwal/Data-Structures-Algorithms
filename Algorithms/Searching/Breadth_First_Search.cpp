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

void printLevelWise(BinaryTreeNode<int>* root)//print tree level wise i.e, BFS traversal.
{
	if(root==NULL)
	{
	  return;	
	}
	queue<BinaryTreeNode<int>*>printingNodes;
	printingNodes.push(root);
	while (printingNodes.size()!=0)
	{
	  BinaryTreeNode<int>*front=printingNodes.front();
	  cout<<front->data<<":";
	  printingNodes.pop();
	  if(front->left!=NULL)
	  {
	  	cout<<"L"<<front->left->data<<",";
	  	printingNodes.push(front->left);
	  }
	  if(front->right!=NULL)
	  {
	    cout<<"R"<<front->right->data;
	    printingNodes.push(front->right);
      }
      cout<<endl;
	}
	
}

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

int main()
{
	//1 2 3 4 5 6 7 -1 -1 -1 8 -1 -1 -1 9 10 -1 -1 11 -1 -1 -1 -1
	
	
	BinaryTreeNode<int>* root=takeInput();
   
	
	printLevelWise(root);//calling function for bfs trversal of a tree 

	cout<<endl;
	
	delete root; 
	
	
 } 
 