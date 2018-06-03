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
class BinaryTree {
    Node rootNode;
    public BinaryTree(){
        this.rootNode = null;
    }
    public BinaryTree(int data){
        this.rootNode = new Node(data);
    }
}
class TestClass {
    public static int height(Node node){
        if(node == null)
            return 0;
        int lh = height(node.leftChild);
        int rh = height(node.rightChild);
        return Math.max(lh, rh)+1;
    }
    public static int getDiameter(Node node){
        if(node == null)
            return 0;
        int leftHeight = height(node.leftChild);
        int rightHeight = height(node.rightChild);

        int leftDiameter = getDiameter(node.leftChild);
        int rightDiameter = getDiameter(node.rightChild);

        int temp = leftHeight+rightHeight+1;

        return Math.max(temp, Math.max(leftDiameter, rightDiameter));
    }
    public static void printDiameter(Node node){
        int diameter = getDiameter(node);
        System.out.println("Diameter of tree is: "+diameter);
    }
    public static void main(String[] args){
        BinaryTree tree = new BinaryTree();
        tree.rootNode = new Node(1);
        tree.rootNode.leftChild = new Node(2);
        tree.rootNode.rightChild = new Node(3);
        tree.rootNode.leftChild.leftChild = new Node(4);
        tree.rootNode.leftChild.rightChild = new Node(5);
        tree.rootNode.rightChild.leftChild = new Node(6);
        tree.rootNode.rightChild.rightChild = new Node(7);

        printDiameter(tree.rootNode);
    }
}
