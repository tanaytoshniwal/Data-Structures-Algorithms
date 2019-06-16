import java.util.*;
class Node{
    int data;
    Node left;
    Node right;
    public Node(int data){
        this.data = data;
    }
    public void insert(int val){
        if(val<=data){
            if(left == null)
                left = new Node(val);
            else
                left.insert(val);
        }
        else{
            if(right == null)
                right = new Node(val);
            else
                right.insert(val);
        }
    }
}
class Tree{
    Node root;
    public Tree(){
        this.root = null;
    }
    public int height(Node root){
        if(root == null)
            return 0;
        return Math.max(height(root.left), height(root.right))+1;
    }
}
class TestClass{
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            Tree tree = new Tree();
            tree.root = new Node(sc.nextInt());
            for(int i=0; i<n-1; i++)
                tree.root.insert(sc.nextInt());
            System.out.println(tree.height(tree.root));
        }
    }
}
