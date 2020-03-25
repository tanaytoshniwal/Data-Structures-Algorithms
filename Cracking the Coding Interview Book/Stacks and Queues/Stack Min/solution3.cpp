#include <bits/stdc++.h>
using namespace std;

class Stack{
    private:
    int capacity, size;
    int* storage;
    public:
    Stack(int capacity){
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

class MyStack{
    private:
    int capacity, size;
    int* storage;
    Stack* _min;
    public:
    MyStack(int capacity){
        this->capacity = capacity;
        this->size = 0;
        this->storage = new int[capacity];
        this->_min = new Stack(capacity);
    }
    void push(int data){
        if(size>=capacity){
            throw "StackOverflow Error";
        }
        if(this->_min->isEmpty() || data <= this->_min->peek()){
            this->_min->push(data);
        }
        this->storage[this->size++] = data;
    }
    int getMinimum(){
        return (this->_min->isEmpty())?INT_MAX:this->_min->peek();
    }
    int pop(){
        if(size<=0){
            throw "StackUnderflow Error";
        }
        if(this->storage[this->size-1] == this->_min->peek()){
            this->_min->pop();
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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    MyStack st(5);
    st.push(1);
    st.push(11);
    st.push(-121);
    st.push(1132);
    st.push(112);
    cout << st.getMinimum() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.getMinimum();
    return 0;
}