import java.util.*;
class Node {
    int data;
    Node leftChild;
    Node rightChild;
    public Node(int data){
        this.data = data;
        this.leftChild = null;
        this.rightChild = null;
    }
    public int getData(){
        return this.data;
    }
}
class BinarySearchTree {
    Node rootNode;
    public BinarySearchTree(){
        this.rootNode = null;
    }
    Node insert(Node root, int data) {
        if (root == null) { 
            root = new Node(data); 
            return root; 
        }
        if (data < root.getData()) 
            root.leftChild = insert(root.leftChild, data); 
        else if (data > root.getData()) 
            root.rightChild = insert(root.rightChild, data);
        return root; 
    }
    void inorder(Node root) { 
        if (root != null) { 
            inorder(root.leftChild); 
            System.out.println(root.getData()); 
            inorder(root.rightChild); 
        } 
    }
}
class Solution {
    public static void main(String[] args){
        BinarySearchTree tree = new BinarySearchTree();
        
        tree.rootNode = tree.insert(tree.rootNode, 50);
        tree.rootNode = tree.insert(tree.rootNode, 30);
        tree.rootNode = tree.insert(tree.rootNode, 20);
        tree.rootNode = tree.insert(tree.rootNode, 40);
        tree.rootNode = tree.insert(tree.rootNode, 70);
        tree.rootNode = tree.insert(tree.rootNode, 60);
        tree.rootNode = tree.insert(tree.rootNode, 80);
        tree.inorder(tree.rootNode);
    }
}
