import java.util.*;
class MinHeap {
    private int capacity;
    private int size = 0;
    private int[] elements;

    public MinHeap(int capacity){
        this.capacity = capacity;
        elements = new int[capacity];
    }

    private int getLeftChildIndex(int parentIndex){
        return 2*parentIndex + 1;
    }
    private int getRightChildIndex(int parentIndex){
        return 2*parentIndex + 2;
    }
    private int getParentIndex(int childIndex){
        return (childIndex-1)/2;
    }
    private int getIndex(int item){
        int index=-1;
        for(int i=0;i<size;i++){
            if(elements[i] == item){
                index = i;
                break;
            }
        }
        return index;
    }

    public int capacity(){
        return capacity;
    }

    private boolean hasLeftChild(int parentIndex){
        return getLeftChildIndex(parentIndex) < size;
    }
    private boolean hasRightChild(int parentIndex){
        return getRightChildIndex(parentIndex) < size;
    }
    private boolean hasParent(int childIndex){
        return getParentIndex(childIndex) >= 0;
    }

    private int leftChild(int parentIndex){
        return elements[getLeftChildIndex(parentIndex)];
    }
    private int rightChild(int parentIndex){
        return elements[getRightChildIndex(parentIndex)];
    }
    private int parent(int childIndex){
        return elements[getParentIndex(childIndex)];
    }

    private void swap(int first, int second){
        int temp = elements[first];
        elements[first] = elements[second];
        elements[second] = temp;
    }

    private void ensureCapacity(){
        if(size == capacity){
            elements = Arrays.copyOf(elements, capacity*2);
            capacity *= 2;
        }
    }

    public int peek(){
        if(size == 0)
            throw new IllegalStateException();
        return elements[0];
    }

    public int poll(){
        if(size == 0)
            throw new IllegalStateException();
        int item = elements[0];
        elements[0] = elements[size-1];
        size--;
        heapifyDown();
        return item;
    }

    public void add(int item){
        ensureCapacity();
        elements[size] = item;
        size++;
        heapifyUp();
    }

    public void delete(int item){
        if(size == 0)
            throw new IllegalStateException();
        int index = getIndex(item);
        if(index == -1)
            throw new IllegalStateException();
        elements[index] = elements[size-1];
        size--;
        heapifyDown();
    }

    public void heapifyUp(){
        int index = size-1;
        while(hasParent(index) && (parent(index) > elements[index])){
            swap(getParentIndex(index), index);
            index = getParentIndex(index);
        }
    }

    public void heapifyDown(){
        int index = 0;
        while(hasLeftChild(index)){
            int smallerChildIndex = getLeftChildIndex(index);
            if(hasRightChild(index) && leftChild(index) > rightChild(index))
                smallerChildIndex = getRightChildIndex(index);
            if(elements[index] < elements[smallerChildIndex])
                break;
            else
                swap(index, smallerChildIndex);
            index = smallerChildIndex;
        }
    }
}
class TestClass {
    public static void main(String[] args){
        System.out.print("Input size of min-heap:");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        try{
            if(n<0)
                throw new IllegalStateException("Invalid size");
        }
        catch(IllegalStateException e){
            System.out.println(e.getMessage());
            System.exit(0);
        }
        MinHeap heap = new MinHeap(n);
        System.out.println("Input "+n+" elements:");
        while(n-->0)
            heap.add(sc.nextInt());
        System.out.println(heap.peek());
    }
}
