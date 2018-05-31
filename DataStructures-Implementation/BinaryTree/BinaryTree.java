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
    public static void main(String[] args){
        BinaryTree tree = new BinaryTree();
        tree.rootNode = new Node(1);
        tree.rootNode.leftChild = new Node(2);
        tree.rootNode.rightChild = new Node(3);

        System.out.println("Tree is:");
        System.out.println(tree.rootNode.getData());
        System.out.print(tree.rootNode.leftChild.getData()+" ");
        System.out.println(tree.rootNode.rightChild.getData());
    }
}
