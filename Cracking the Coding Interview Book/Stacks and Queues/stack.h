#include <bits/stdc++.h>
using namespace std;

class MyStack{
    private:
    int capacity, size;
    int* storage;
    public:
    MyStack(int capacity){
        this->capacity = capacity;
        this->size = 0;
        this->storage = new int[capacity];
    }
    void push(int data){
        if(size>=capacity){
            throw "StackOverflow Error";
        }
        this->storage[this->size++] = data;
    }
    int pop(){
        if(size<=0){
            throw "StackUnderflow Error";
        }
        return this->storage[--this->size];
    }
    int peek(){
        if(this->isEmpty()){
            throw "StackUnderflow Error";
        }
        return this->storage[this->size-1];
    }
    bool isEmpty(){
        return this->size==0;
    }
};