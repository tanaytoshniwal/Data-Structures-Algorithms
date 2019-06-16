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
    public static void levelOrderPrint(Node node){
        Queue<Node> queue = new LinkedList<Node>();
        while(node != null){
            queue.add(node.leftChild);
            queue.add(node.rightChild);
            System.out.print(node.getData()+" ");
            node = queue.remove();
        }
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

        levelOrderPrint(tree.rootNode);
    }
}
