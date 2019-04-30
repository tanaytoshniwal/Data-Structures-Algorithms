import java.util.*;
class EmptyListException extends Exception{
    public EmptyListException(String str){
        super(str);
    }
}
class LinkedList {
    static Node currentNode=null;
    static Node startingNode=null;
    static class Node{
        Node previous = null;
        Node next = null;
        int data;
        Node(){
            this.previous=null;
            this.next=null;
        }
        Node(int data){
            this.data = data;
        }
        boolean hasNext(){
            return this.next!=null;
        }
        boolean hasPrevious(){
            return this.previous!=null;
        }
        void next(Node next){
            this.next = next;
        }
        void previous(Node previous){
            this.previous = previous;
        }
        int data(){
            return this.data;
        }
        void put(int data){
            this.data = data;
        }
    }
    LinkedList(){
        Node node = new Node();
        currentNode = node;
        startingNode = currentNode;
    }
    void add(int element){
        Node node = new Node(element);
        currentNode.next(node);
        node.previous(currentNode);
        currentNode = node;
    }
    void print() throws Exception{
        if(startingNode == null){
            throw new EmptyListException("oops its empty");
        }
        Node iterator = startingNode;
        while(iterator.hasNext()){
            iterator = iterator.next;
            System.out.print(iterator.data()+" ");
        }
    }
    public static void main(String[] args) throws Exception {
        System.out.print("Input size of the linked list:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        LinkedList list = new LinkedList();
        for(int i=0;i<n;i++)
            list.add(sc.nextInt());

        System.out.println("Your list is:");
        try{
            list.print();
        }
        catch(EmptyListException e){
            e.printStackTrace();
        }
    }
}
