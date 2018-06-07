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
    static Stack<Node> stack = new Stack<>();
    public static void print(Stack<Node> stack){
        System.out.print("path: ");
        for(Node n: stack)
            System.out.print(n.getData()+" ");
        System.out.println();
    }
    public static void printPathsWithSum(Node node, int sum, int cur_sum){
        if(node == null)
            return;

        cur_sum += node.getData();
        stack.push(node);

        if(cur_sum == sum)
            print(stack);

        if(node.leftChild != null)
            printPathsWithSum(node.leftChild, sum, cur_sum);

        if(node.rightChild != null)
            printPathsWithSum(node.rightChild, sum, cur_sum);

        if(!stack.isEmpty())
            stack.pop();
    }
    public static void main(String[] args){
        BinaryTree tree = new BinaryTree();
        tree.rootNode = new Node(1);
        tree.rootNode.leftChild = new Node(7);
        tree.rootNode.rightChild = new Node(3);
        tree.rootNode.rightChild.leftChild = new Node(6);
        tree.rootNode.rightChild.rightChild = new Node(4);

        System.out.print("Input Sum: ");
        int sum = new Scanner(System.in).nextInt();

        printPathsWithSum(tree.rootNode, sum, 0);
    }
}
