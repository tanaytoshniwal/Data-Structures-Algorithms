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
    static Queue<Integer> q1 = new LinkedList<>();
    static Queue<Integer> q2 = new LinkedList<>();
    static int n1, n2;
    static int count = 0;
    public static int count(Node node){
        if(node == null)
            return 0;
        else {
            int left = count(node.leftChild);
            int right = count(node.rightChild);
            return left+right-1;
        }
    }
    public static void inOrder(Node node){
        if(node == null)
            return;
        inOrder(node.leftChild);
        if(n1!=0){
            q1.add(node.getData());
            n1--;
        }
        else{
            q2.add(node.getData());
            n2--;
        }
        inOrder(node.rightChild);
    }
    public static void printMerge(Node root1, Node root2) throws Exception{
        if(root1 == null && root2 == null)
            return ;
        inOrder(root1);
        inOrder(root2);
        while(q1 != null || q1 != null){
            if(q1 == null){
                while(!q2.isEmpty())
                    System.out.print(q2.remove()+" ");
            }
            else if(q2 == null){
                while(!q1.isEmpty())
                    System.out.print(q1.remove()+" ");
            }
            else{
                int t1 = q1.peek();
                int t2 = q2.peek();
                if(t1<t2){
                    System.out.print(t1+" ");
                    q1.remove();
                }
                else{
                    System.out.print(t2+" ");
                    q2.remove();
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
        tree_2.rootNode.leftChild.leftChild = new Node(1);
        tree_2.rootNode.leftChild.rightChild = new Node(3);

        n1 = Math.abs(count(tree_1.rootNode));
        n2 = Math.abs(count(tree_2.rootNode));
        try{
            printMerge(tree_1.rootNode, tree_2.rootNode);
        }
        catch(Exception e){

        }
    }
}
