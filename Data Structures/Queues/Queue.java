import java.util.Scanner;
class Queue{
    private int capacity;
    private int size = 0;
    private int[] elements;

    public Queue(int capacity){
        this.capacity = capacity;
        elements = new int[capacity];
    }

    public void add(int item){
        if(size == capacity)
            throw new IllegalStateException("Queue is full");
        elements[size] = item;
        size++;
    }

    public int remove(){
        if(size == 0)
            throw new IllegalStateException("Queue is empty");
        int item = elements[0];
        for(int i=1;i<size;i++){
            elements[i-1] = elements[i];
        }
        size--;
        return item;
    }

    public int peek(){
        if(size == 0)
            throw new IllegalStateException("Stack is empty");
        return elements[0];
    }

    public int poll(){
        return remove();
    }
}
class TestClass {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Input size:");
        int n=sc.nextInt();
        try{
            if(n<0)
                throw new IllegalStateException("Invalid size");
        }
        catch(IllegalStateException e){
            System.out.println(e.getMessage());
            System.exit(0);
        }
        Queue queue = new Queue(n);
        System.out.println("Input "+n+" elements:");
        while(n-->0)
            queue.add(sc.nextInt());
        queue.remove();
        System.out.println(queue.peek());
    }
}
