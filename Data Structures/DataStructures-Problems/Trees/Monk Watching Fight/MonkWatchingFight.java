import java.util.*;
class Node {
    int data;
    Node left;
    Node right;

    Node(int data) {
        this.data = data;
    }
    public void insert(int value) {
        if(value <= data) {
            if(left == null)
                left = new Node(value);
            else
                left.insert(value);
        }
        else {
            if(right == null)
                right = new Node(value);
            else
                right.insert(value);
        }
    }
    public int height(Node node) {
        if(node == null)
            return 0;
        return Math.max(height(node.left),height(node.right))+1;
    }
}
class TestClass {
    public static void main(String[] args) throws Exception {
        Node root;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        root = new Node(sc.nextInt());
        for(int i=1;i<n;i++)
            root.insert(sc.nextInt());
        System.out.println(root.height(root));
    }
}
