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
    static int count = 0;
    public static void find(Node node, int k) {
        if(node == null || count>=k)
            return ;
        find(node.rightChild, k);
        count++;
        if(count == k)
            System.out.println(node.getData());
        find(node.leftChild, k);
    }
    public static void main(String[] args){
        BinaryTree tree = new BinaryTree();
        tree.rootNode = new Node(20);
        tree.rootNode.leftChild = new Node(8);
        tree.rootNode.rightChild = new Node(22);
        tree.rootNode.leftChild.leftChild = new Node(4);
        tree.rootNode.leftChild.rightChild = new Node(12);
        tree.rootNode.leftChild.rightChild.leftChild = new Node(10);
        tree.rootNode.leftChild.rightChild.rightChild = new Node(14);

        System.out.print("Input k: ");
        int k = new java.util.Scanner(System.in).nextInt();
        find(tree.rootNode, k);
    }
}
