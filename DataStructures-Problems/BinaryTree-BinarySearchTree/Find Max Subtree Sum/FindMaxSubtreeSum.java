class Node {
    int data;
    Node leftChild;
    Node rightChild;
    public Node(int data){
        this.data = data;
        leftChild = null;
        rightChild = null;
    }
    public int getData(){
        return this.data;
    }
}
class BinaryTree {
    Node rootNode;
    public BinaryTree(){
        rootNode = null;
    }
    public BinaryTree(int data){
        rootNode = new Node(data);
    }
}
class TestClass {
    static int sum = 0;
    public static int maxSum(Node node){
        if(node == null)
            return 0;
        int i = maxSum(node.leftChild);
        int j = maxSum(node.rightChild);
        int cur_sum = i+j+node.getData();

        if(cur_sum > sum)
            sum = cur_sum;

        return cur_sum;
    }
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.rootNode = new Node(1);
        tree.rootNode.leftChild = new Node(-2);
        tree.rootNode.rightChild = new Node(3);
        tree.rootNode.leftChild.leftChild = new Node(4);
        tree.rootNode.leftChild.rightChild = new Node(5);
        tree.rootNode.rightChild.leftChild = new Node(-6);
        tree.rootNode.rightChild.rightChild = new Node(2);

        int sum = maxSum(tree.rootNode);
        System.out.println(sum);
    }
}
