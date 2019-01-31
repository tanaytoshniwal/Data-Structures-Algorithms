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
    static ArrayList<Integer> list = new ArrayList<>();
    public static void inorderGet(Node node){
        if(node == null)
            return;
        inorderGet(node.leftChild);
        list.add(node.getData());
        inorderGet(node.rightChild);
    }
    public static void inorderPut(Node node, int cur){
        if(node == null)
            return;
        inorderPut(node.leftChild, cur);
        node.setData(list.remove(0));
        inorderPut(node.rightChild, cur+1);
    }
    public static void correct(Node node){
        inorderGet(node);
        Collections.sort(list);
        inorderPut(node, 0);
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
