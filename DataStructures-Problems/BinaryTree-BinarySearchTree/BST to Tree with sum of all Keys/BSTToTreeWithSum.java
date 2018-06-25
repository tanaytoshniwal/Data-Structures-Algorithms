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
    static int sum=0;
    public static void compute(Node node){
        if(node == null)
            return;
        compute(node.leftChild);
        sum+=node.getData();
        node.setData(sum);
        compute(node.rightChild);
    }
    public static void main(String[] args){
        BinaryTree tree = new BinaryTree();
        tree.rootNode = new Node(9);
        tree.rootNode.leftChild = new Node(6);
        tree.rootNode.rightChild = new Node(17);

        compute(tree.rootNode);

        System.out.println("  "+tree.rootNode.getData());
        System.out.print(tree.rootNode.leftChild.getData()+"  ");
        System.out.println(tree.rootNode.rightChild.getData());
    }
}
