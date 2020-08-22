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
    int getSize(){
        return this->capacity;
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

void sort(MyStack st){
    MyStack *temp = new MyStack(st.getSize());
    while(!st.isEmpty()){
        int ele = st.pop();
        while(!temp->isEmpty() && temp->peek() > ele){
            st.push(temp->pop());
        }
        temp->push(ele);
    }
    while(!temp->isEmpty()){
        st.push(temp->pop());
    }
    delete temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    MyStack st(5);
    st.push(3);
    st.push(1);
    st.push(5);
    st.push(4);
    st.push(2);
    sort(st);
    while(!st.isEmpty()){
        cout<< st.pop();
    }
    return 0;
}