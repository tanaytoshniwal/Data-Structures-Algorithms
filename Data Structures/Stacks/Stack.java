import java.util.Scanner;
class Stack{
    private int capacity;
    private int size = 0;
    private int[] elements;

    public Stack(int capacity){
        this.capacity = capacity;
        elements = new int[capacity];
    }

    public void push(int item){
        if(size == capacity)
            throw new IllegalStateException("Stack is full");
        for(int i=size-1;i>=0;i--){
            elements[i+1] = elements[i];
        }
        elements[0] = item;
        size++;
    }

    public int pop(){
        if(size == 0)
            throw new IllegalStateException("Stack is empty");
        int item = elements[0];
        for(int i=0;i<size-1;i++){
            elements[i] = elements[i+1];
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
        return pop();
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
        Stack stack = new Stack(n);
        System.out.println("Input "+n+" elements:");
        while(n-->0)
            stack.push(sc.nextInt());
        stack.pop();
        System.out.println(stack.peek());
    }
}
