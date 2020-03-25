#include <bits/stdc++.h>
using namespace std;

class MyStack{
    private:
    int capacity, size, minimum;
    int* storage;
    public:
    MyStack(int capacity){
        this->capacity = capacity;
        this->size = 0;
        this->storage = new int[capacity];
        this->minimum = INT_MAX;
    }
    void push(int data){
        if(size>=capacity){
            throw "StackOverflow Error";
        }
        this->minimum = min(this->minimum, data);
        this->storage[this->size++] = data;
    }
    int getMinimum(){
        return this->minimum;
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    MyStack st(5);
    st.push(1);
    st.push(11);
    st.push(-121);
    st.push(1132);
    st.push(112);
    cout << st.getMinimum();
    return 0;
}