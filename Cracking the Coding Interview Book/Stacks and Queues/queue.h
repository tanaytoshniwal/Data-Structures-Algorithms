#include <bits/stdc++.h>
using namespace std;

class MyQueue{
    private:
    int capacity, size;
    int* storage;
    public:
    MyQueue(int capacity){
        this->capacity = capacity;
        this->size = 0;
        this->storage = new int[capacity];
    }
    void add(int data){
        if(size>=capacity) throw "Overflow";
        this->storage[this->size++] = data;
    }
    int remove(){
        if(size<=0) throw "Underflow";
        int data = this->storage[0];
        for(int i=0;i<this->size-1;i++){
            this->storage[i] = this->storage[i+1];
        }
        this->size--;
        return data;
    }
    int peek(){
        if(size<=0) throw "Underflow";
        return this->storage[0];
    }
    bool isEmpty(){
        return this->size == 0;
    }
};