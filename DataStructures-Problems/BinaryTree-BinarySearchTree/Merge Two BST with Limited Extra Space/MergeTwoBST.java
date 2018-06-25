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
    public static void inOrder(Node node){
        if(node == null)
            return;
        inOrder(node.leftChild);
        System.out.print(node.getData()+" ");
        inOrder(node.rightChild);
    }
    public static void printMerge(Node root1, Node root2){
        Node cur1 = root1, cur2 = root2;
        Stack<Node> s1 = new Stack<>();
        Stack<Node> s2 = new Stack<>();
        if(root1 == null){
            inOrder(root2);
            return;
        }
        if(root2 == null){
            inOrder(root1);
            return;
        }
        while(cur1 != null || !s1.isEmpty() || cur2 != null || !s2.isEmpty()){
            if(cur1 != null || cur2 != null){
                if(cur1 != null){
                    s1.push(cur1);
                    cur1 = cur1.leftChild;
                }
                if(cur2 != null){
                    s2.push(cur2);
                    cur2 = cur2.leftChild;
                }
            }
            else {
                if(s1.isEmpty()){
                    while(!s2.isEmpty()){
                        cur2 = s2.pop();
                        cur2.leftChild = null;
                        inOrder(cur2);
                    }
                    return;
                }
                if(s2.isEmpty()){
                    while(!s1.isEmpty()){
                        cur1 = s1.pop();
                        cur1.leftChild = null;
                        inOrder(cur1);
                    }
                    return;
                }

                cur1 = s1.pop();
                cur2 = s2.pop();

                if(cur1.getData() < cur2.getData()){
                    System.out.print(cur1.getData()+" ");
                    cur1 = cur1.rightChild;
                    s2.push(cur2);
                    cur2 = null;
                }
                else {
                    System.out.print(cur2.getData()+" ");
                    cur2 = cur2.rightChild;
                    s1.push(cur1);
                    cur1 = null;
                }
            }
        }
    }
    public static void main(String[] args){
        BinaryTree tree_1 = new BinaryTree();
        tree_1.rootNode = new Node(3);
        tree_1.rootNode.leftChild = new Node(1);
        tree_1.rootNode.rightChild = new Node(5);

        BinaryTree tree_2 = new BinaryTree();
        tree_2.rootNode = new Node(4);
        tree_2.rootNode.leftChild = new Node(2);
        tree_2.rootNode.rightChild = new Node(5);

        printMerge(tree_1.rootNode, tree_2.rootNode);
    }
}
