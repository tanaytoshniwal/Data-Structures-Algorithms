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
    public void setData(int data){
        this.data = data;
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
    static Node prev = null, first = null, middle = null, last = null;
    public static void find(Node node){
        if(node == null)
            return;
        find(node.leftChild);
        if(prev != null && node.getData() < prev.getData()){
            if(first == null){
                first = prev;
                middle = node;
            }
            last = node;
        }
        prev = node;
        find(node.rightChild);
    }
    public static void correct(Node node){
        find(node);
        if(first != null && last != null){
            int t = first.getData();
            first.setData(last.getData());
            last.setData(t);
        }
        else if(first != null && middle != null){
            int t = first.getData();
            first.setData(middle.getData());
            middle.setData(t);
        }
    }
    public static void inorderPrint(Node node){
        if(node == null)
            return;
        inorderPrint(node.leftChild);
        System.out.print(node.getData()+" ");
        inorderPrint(node.rightChild);
    }
    public static void main(String[] args){
        BinaryTree tree = new BinaryTree();
        tree.rootNode = new Node(10);
        tree.rootNode.leftChild = new Node(5);
        tree.rootNode.rightChild = new Node(8);
        tree.rootNode.leftChild.leftChild = new Node(2);
        tree.rootNode.leftChild.rightChild = new Node(20);

        System.out.println("Input tree is:");
        inorderPrint(tree.rootNode);
        System.out.println();
        correct(tree.rootNode);
        System.out.println("Corrected tree is:");
        inorderPrint(tree.rootNode);
    }
}
