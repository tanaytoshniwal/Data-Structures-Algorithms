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
    public static void inOrderPrint(Node node){
        if(node  == null)
            return;

        Stack<Node> st = new Stack<>();

        while(node!=null){
            st.push(node);
            node = node.leftChild;
        }

        while(!st.isEmpty()){
            Node t = st.pop();
            System.out.print(t.getData() + " ");
            Node tr = t.rightChild;
            while(tr != null){
                st.push(tr);
                tr = tr.leftChild;
            }
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

        inOrderPrint(tree.rootNode);
    }
}
