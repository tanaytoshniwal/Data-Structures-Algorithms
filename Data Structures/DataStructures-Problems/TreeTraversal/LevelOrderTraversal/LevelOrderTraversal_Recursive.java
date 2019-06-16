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
    public static int getTreeHeight(Node node){
        if(node == null)
            return 0;
        else{
            int left = getTreeHeight(node.leftChild);
            int right = getTreeHeight(node.rightChild);
            if(left>right)
                return left+1;
            else
                return right+1;
        }
    }
    public static void printCurrentLevel(Node node, int level){
        if(node == null)
            return ;
        else {
            if(level == 1)
                System.out.print(node.getData()+" ");
            else{
                printCurrentLevel(node.leftChild, level-1);
                printCurrentLevel(node.rightChild, level-1);
            }
        }
    }
    public static void levelOrderPrint(Node node){
        int height = getTreeHeight(node);
        for(int i=1;i<=height;i++){
            printCurrentLevel(node, i);
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
